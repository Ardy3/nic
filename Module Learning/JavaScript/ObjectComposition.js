class Developer{
    constructor(name){
        this.name = name;
    }

    commitChanges(){
        console.log(`${this.name} is commiting changes...`)
    }
}

// Penggunaan pewarisan sangat tidak efektif bila kita berhadapan dengan case user yang memiliki all access function.  
/* 
class FrontEndDeveloper extends Developer{
    buildUI(){
        console.log(`${this.name} is building UI...`)
    }
}

class BackEndDeveloper extends Developer{
    buildAPI(){
        console.log(`${this.name} is building API...`)
    }
}

class DevOpsDeveloper extends Developer{
    deployApp(){
        console.log(`${this.name} is deploying app...`)
    }
} 
*/

// Maka dibuatlah fungsi berdasarkan skill dari masing-masing divisi
function canBuildUI(developer){
    return {
        buildUI: () => {
            console.log(`${developer.name} is building UI...`)
        }
    }
}

function canBuildAPI(developer){
    return {
        buildAPI: () => {
            console.log(`${developer.name} is building API...`)
        }
    }
}

function canDeployApp(developer){
    return {
        deployApp: () => {
            console.log(`${developer.name} is deploying app...`)
        }
    }
}

// Kita bisa membuat sebuah fungsi sebagai object creator dengan menggunakan method Object.assign()
function createFrontEndDeveloper(name){
    const developer = new Developer(name);
    return Object.assign(developer, canBuildUI(developer));
}

function createBackEndDeveloper(name){
    const developer = new Developer(name);
    return Object.assign(developer, canBuildAPI(developer));
}

function createDevOpsDeveloper(name){
    const developer = new Developer(name);
    return Object.assign(developer, canDeployApp(developer));
}

function createFullStackDeveloper(name){
    const developer = new Developer(name);
    return Object.assign(developer, canBuildUI(developer), canBuildAPI(developer), canDeployApp(developer));
}

// Deklarasi dengan memanggil function
const frontEndDeveloper = createFrontEndDeveloper('Fulan');
frontEndDeveloper.commitChanges();
frontEndDeveloper.buildUI();
console.log(`is ${frontEndDeveloper.name} developer? `, frontEndDeveloper instanceof Developer);
 
const backEndDeveloper = createBackEndDeveloper('Fulana');
backEndDeveloper.commitChanges();
backEndDeveloper.buildAPI();
console.log(`is ${backEndDeveloper.name} developer? `, backEndDeveloper instanceof Developer);
 
const devOpsDeveloper = createDevOps('Fulani');
devOpsDeveloper.commitChanges();
devOpsDeveloper.deployApp();
console.log(`is ${devOpsDeveloper.name} developer? `, devOpsDeveloper instanceof Developer);
 
const fullStackDeveloper = createFullStackDeveloper('Fulanah');
fullStackDeveloper.buildUI();
fullStackDeveloper.buildAPI();
fullStackDeveloper.deployApp();
console.log(`is ${fullStackDeveloper.name} developer? `, fullStackDeveloper instanceof Developer);
