class Car {
    #chassisNumber

    constructor(brand, color, maxSpeed) {
        this.brand = brand;
        this.color = color;
        this.maxSpeed = maxSpeed;
        this.#chassisNumber = this.#generateChassisNumber;
    }

    get chassisNumber() {
        return this.#chassisNumber;
    }

    set chassisNumber(chassisNumber) {
        console.log(`you are not allowed to change the chassis number.`);
    }

    drive(){
        console.log(`${this.brand} in ${this.color} is driving.`);
    }

    turn(drection){
        console.log(`${this.brand} in ${this.color} is turning ${drection}`);
    }

    #generateChassisNumber(){
        return `${brand}-${Math.floor(Math.random() * 1000)}`;
    }
}

const mobil = new Car('Ferrari', 'blue', 250);

/* Normal Set Get */
// console.log(mobil);
// mobil.chassisNumber = 'Ferrari123';
// console.log(mobil);

/* With Methods */
// mobil.drive();
// mobil.turn('right');