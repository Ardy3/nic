const date = new Date();

// Format date bawaan js
const timeInJakarta = date.toLocaleString('id-ID', {
    timeZone: 'Asia/Jakarta',
});

const timeInTokyo = date.toLocaleString('ja-JP', {
    timeZone: 'Asia/Tokyo',
});

const timeInMakassar = date.toLocaleString('id-ID', {
    timeZone: 'Asia/Makassar',
});

// Unique Array untuk data yang unique
class UniqueArray extends Array {
    constructor(...args) {
        // make sure args is unique before passing it to super
        const uniqueValue = args.filter((item, index) => args.indexOf(item) === index);

        super(...uniqueValue);
    }

    push(item) {
        // make sure only unique item is added
        if (!this.includes(item)) {
            super.push(item);
        }
    }
}

const someArray = new UniqueArray('a', 'b', 'c', 'a', 'b', 'c');
someArray.push('d');
// someArray.pop();
console.log(someArray);