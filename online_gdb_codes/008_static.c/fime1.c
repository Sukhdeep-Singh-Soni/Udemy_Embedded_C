
// extern int my_private_var; //static var cannot be extern

void change_sysclk(int sysclk); //can use extern with functions also but they are 
                                //assumed to be extern until its defined static



void ext_func(void) {
    // my_private_var = 900;
    change_sysclk(0);
}
