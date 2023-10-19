class MailServices {
    constructor(sender) {
        this.sender = sender;
    }

    sendMessage(message, receiver) {
        console.log(`${this.sender} sent ${message} to ${receiver}`);
    }
}

class WhatsAppService extends MailServices {
    sendBroadcastMessage(message, receivers) {
        for (const receiver of receivers) {
            this.sendMessage(message, receiver);
        }
    }
}

class EmailService extends MailServices {
    sendDelayedMessage(message, receiver, delay) {
        setTimeout(() => {
            this.sendMessage(message, receiver);
        }, delay);
    }
}

const whatsapp = new WhatsAppService('+6287874923715')
const email = new EmailService('nicoardy23@gmail.com')

//whatsapp.sendMessage('Hello bro, ', '+6281280525192');
whatsapp.sendBroadcastMessage('Hello bro, ', ['+6281280525192', '+6281936604023']);
