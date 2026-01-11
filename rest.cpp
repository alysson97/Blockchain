#include "headers/Blockchain.h"


void startServer() {
    httplib::Server svr;
    svr.Get("/", [](const httplib::Request &, httplib::Response &res) {
        res.set_content("Hello Blockchain", "text/plain");
    });
    std::cout << "Servidor rodando em http://localhost:8080\n";
    svr.listen("0.0.0.0", 8080);
}