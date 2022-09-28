/*
1.  Is the following a legal C ++ program?
no causes redefinition error
*/

int proc(int x) {
    return x + 2;
}

int proc(int n) {
    return 2*n + 1;
}

int main() {

    int x = proc(5);

}
