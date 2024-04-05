const rl = readline.create.createInterface({
    input : process.stdin,
    output: process.stdout,
});
r1.question('Enter the first number: ',(num1) => {
    rl.question('Enter the second number:',(num2) => {
        // convert the input strings to numbers
    const number1 = parseFloat(num1);
    const number2 = parseFloat(num2);
    // Check if the input is valid numbers
    if(isNaN(number1)|| isNaN(number2)){
        console.log('Please enter valid numbers.');
    } else {
        const sum = number1+number2;
        console.log(`The sum of ${number1} and ${number2} is: ${num}`);
    }
    r1.close();
    });
});