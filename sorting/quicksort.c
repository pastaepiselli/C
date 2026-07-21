void qsort(int v[], int left, int right)
{
    int i, last;
    void swap(int v[], int i, int j);

    if (left >= right) // non fare niente se l'array contiene meno di 2 elementi
        return;
    swap(v, left, (left + right) / 2);
    last = left;
    for (i = left + 1;i <= right; i++)
        if (v[i] < v[left])
            swap(v, ++last, i);
    swap(v, left, last);
    qsort(v, left, last - 1);
    qsort(v, last + 1,right);
}

void swap(int v[], int i, int j)
{
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;

}
