const http = require('http');//loads the http module

http.createServer((request, response)=>{
    ////tell the browser everything is OK(Status code 200) and the data is
    response.writeHead(200,{
        'Content-Type': 'text/plain'
    });

    //2.write the announment text to the body of the page
    response.write('hello, world!\n');

    //3. tell the server that all of the response headers
    response.end();
}).listen(1337)//tells the server what porter to be order