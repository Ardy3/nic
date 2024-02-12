class MailServices {
    constructor(sender) {
        this.sender = sender;
    }

    sendMessage(message, receiver) {
        console.log(`${this.sender} sent ${message} to ${receiver}`);
    }
}

class WhatsAppService extends MailServices {
    constructor(sender, isBusiness) {
        /* Use super to override constructor in extends function */
        super(sender);
        this.isBusiness = isBusiness;
    }

    sendMessage(message, receiver) {
        /* Use super to override method */
        super.sendMessage(message, receiver);
        console.log('message sent via WhatsApp');

        /* Normal message */
        console.log(`${this.sender} sent ${message} to ${receiver} via WhatsApp`);
    }
}

const mailService = new MailServices('someSender');
const whatsappService = new WhatsAppService('+6281234567890', true);
 
mailService.sendMessage('Hai, apa kabar?', 'someReceiver');
whatsappService.sendMessage('Hai, apa kabar?', '+6289876543210');