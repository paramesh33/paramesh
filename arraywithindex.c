int main() {
	int n,i;
  scanf("%d",&n);
  int a[n];
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for(i = 0; i < n; i++) {
			printf("%d %d", a[i],i);
	}
	return 0;
}
