if (n - i > p / 2){
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            merge(A, l, mid, n - 1);
        }