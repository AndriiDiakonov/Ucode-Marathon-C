void mx_printchar(char c);

void mx_cube(int n){

if (n <= 1)
        return;

    int z = n;
    int x = n/2 +1;
    int bok_pravo = n/2;
    int bok_pravo_palka = n;
    int centr_palka = n;


    for(int i = 0; i < x; i++){
        mx_printchar(' ');
    }
    mx_printchar('+');

    for(int i = 0; i < n*2; i++){
        mx_printchar('-');
    }
    mx_printchar('+');
    mx_printchar('\n');

    for(int i = n/2; i != 0; i --){

        for(int j = x - 1; j != 0; j --){
            mx_printchar(' ');
        }
        mx_printchar('/');

        for(int k = 0; k < n*2; k++){
            mx_printchar(' ');
        }
        mx_printchar('/');

        for(int p = n/2; p > bok_pravo; p--){
            mx_printchar(' ');

        }


        mx_printchar('|');

        mx_printchar('\n');

        bok_pravo_palka--;
        bok_pravo--;
        z--;
        x--;
    }


    mx_printchar('+');
    for(int i = 0; i < n*2; i++){
        mx_printchar('-');
    }
    mx_printchar('+');

    for(int i = 0; i < n/2;i++){
        mx_printchar(' ');
    }
    mx_printchar('|');
    bok_pravo_palka--;
    mx_printchar('\n');

    for(int i = 0; bok_pravo_palka > 0;i++){
        mx_printchar('|');
        for(int j = 0; j < n*2; j++){
            mx_printchar(' ');
        }
        mx_printchar('|');
        for(int k = 0; k < n/2; k++){
            mx_printchar(' ');
        }
        mx_printchar('|');
        mx_printchar('\n');
        centr_palka--;
        bok_pravo_palka--;
    }

    mx_printchar('|');
    for(int j = 0; j < n*2; j++){
        mx_printchar(' ');
    }
    mx_printchar('|');
    for(int k = 0; k < n/2; k++){
        mx_printchar(' ');
    }
    mx_printchar('+');
    mx_printchar('\n');

    centr_palka--;

    while(centr_palka){
        mx_printchar('|');
        for(int j = 0; j < n*2; j++){
            mx_printchar(' ');
        }
        mx_printchar('|');

        for(int k = 1; k < centr_palka; k++){
            mx_printchar(' ');
        }
        mx_printchar('/');

        mx_printchar('\n');
        centr_palka--;
    }

    mx_printchar('+');
    for(int i = 0; i < n*2; i++){
        mx_printchar('-');
    }
    mx_printchar('+');
    mx_printchar('\n');

}

