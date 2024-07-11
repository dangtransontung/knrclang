//
// Created by Tung Dang Tran on 7/10/24.
//

#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf; // equivalent to `static char *allocp = &allocbuf[0]

char *alloc(int n) // return pointer to n free characters
{
    /*
     * allocbuf - pointer to first elem of the whole array
     * ALLOCSIZE = total size
     * allocp - pointer to start elem of the free array
     */
    if (allocbuf + ALLOCSIZE - allocp >= n) {
        allocp += n;
        return allocp - n; /*return old p, which points to start element of free*/
    } else {
        return 0; // C guarantees that 0 would never be a valid address
    }
}

void afree(char *p)
{
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}
