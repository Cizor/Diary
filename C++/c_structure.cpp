
class Task : public thread{ 
    A *task_item;

    Task(A *i) : task_item(i) {}

    void run() {
        task_item->init();

        task_item->login();

        // wait

        task_item->request();

        task_item->logout();
    }
}

class A { 
    // this is base of all the items...

    void init()
    void login()
    void request()
    void logout()
    void start()

}


class B : public A {
    // this is related to network opertaion
    //
}

class C : public A {
    // this is related to network opertaion
}


class Runner  { 

    vector<A> tasks;

    void addTask(A item) {
        tasks.push_back(item);
    }

    void start() { 
        for ( auto i = tasks.begin() ; i != tasks.end() ; ++) {
            i->init();

            i-> run();
        }

        for ( auto i = tasks.begin() ; i != tasks.end() ; ++) {
            i->join();
        }
    }

}
