
#include<sdfdsf>


typedef func_ptr (int (*POINTER_NAME)(int a, int b))

struct client_operation {

    // function pointer

     
    func_ptr init;
    func_ptr login;
    func_ptr fire_request;
    func_ptr get_response;
    func_ptr process_response;
    func_ptr logout;



    func_ptr start;


}

struct client_data {
    int a[1000]
}


void main () {
    client_operation *p = malloc(sizeof(client_operation));

    p->init = cl_init;
    p->login= cl_login;
    p->logout = cl_logout;
    p->fire_request= cl_request;
    .
    .
    .


    p->start = 


}

void cl_start() {
    while(1) {

    }
}

void cl_init() {
}

void cl_login() {
}
void cl_request() {
}
void cl_response() {
}
void cl_logout() {
}
