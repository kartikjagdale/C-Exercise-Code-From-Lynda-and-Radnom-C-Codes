/*s
Name: Variadc Demo
Author:Kartik Jagdale
Description:
    >> include<stdarg.h>
    >> pass ... in the function
    >> second declare va_lis var_name
    >> start vaarg va_start(varname of va_list,var-bfore start)
    >> use va_arg(varname, type) to do operation
    >> end with va_end(varname)
    >> you can use vfprintf(stdout, var_before_dot, varname)
    >> you can use fputs("\n",stdout);
*/


#include<stdio.h>
#include<stdarg.h>

double total(const int count, ...){ // see the 3 dots
    va_list ap;
    va_start(ap,count);// see the order of elelments in va_start
    unsigned int i;
    double total = 0;
    for(i=0;i<count;i++){
        total = total + va_arg(ap, double);
    }
    va_end(ap);
    return total;

}

int message(const char *fmt, ...)// see the 3 dots
{
    va_list ap;
    va_start(ap,fmt);
    int rc;
    rc = vfprintf(stdout,fmt,ap);
    fputs("",stdout);
    va_end(ap);
    return rc;
}


int main(int argc, char **argv){
    message("Total is : ");
    message("%lf",total(5,25.23,56.23,32.65,101.1,23));

return 0;
}
