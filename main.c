//
//  main.c
//  MIP GIT
//
//  Created by Ilia Furdey on 12/4/19.
//  Copyright © 2019 Ilia Furdey. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE *fp;
        FILE *f2;
    char str[128], stu[128];
        int i = 0, len = 0, j =0, len2= 0;
        fp = fopen("text.txt", "r");
        f2 = fopen("cisla.txt", "a");
    if (fp ==NULL) {
    printf("Cannot open file.\n");
    exit (1);
    }
    while(!feof (fp)) {
        fgets(str, 126, fp);
        fgets(stu, 126, fp);
    //printf("%s\n", str);
        while (str[i++]) {
        if (str[i-1] == 'x' || str[i-1] == 'X') {
            printf("Precital som X\n");
            len++;
        }
            if (str[i-1]== '$' || str[i-1] == '#' || str[i-1] == '&') {
                printf("Precital som riadiaci znak\n");
                len++;
            }
            if (str[i-1] == 'y' || str[i-1] == 'Y') {
            printf("Precital som Y\n");
                len++;
            }
            if (str[i-1] == '*') {
            printf("Koniec\n");
            len++;
            feof;
                    break;
            }
        }
    }
    while (stu[j++]) {
        if (stu[j-1] == 'x' || stu[j-1] == 'X') {
            printf("Sucsess.1\n");
            len2++;
        }
            if (stu[j-1]== '$' || stu[j-1] == '#' || stu[j-1] == '&') {
                printf("Precital som riadiaci znak\n");
                len2++;
            }
            if (stu[j-1] == 'y' || stu[j-1] == 'Y') {
            printf("Sucsess3.1\n");
                len2++;
            }
            if (stu[j-1] == '*') {
            printf("Koniec\n");
                len2++;
                feof;
                fclose(fp);
                break;
            }
        }
    printf("Pocet precitanych medzier: %i\n", len2+len);
    fclose(fp);
    fclose(f2);
    return 0;
}
