#strings 
# Knuth-Morris-Pratt Algorithm

KMP é um algoritmo que usa a estrutura do [[LPS]] para comparação de strings.
[]()
Para duas strings `s` de tamanho `m` e `r` de tamanho `n`, a complexidade do KMP será O(n+m)

# Implementação (C++)
```cpp
string s = "ababcabab", r = "bababababcababcabab";
vi lps = make_lps(s);

int i = 0, j = 0;
while(i < r.size()){
	if(r[i] == s[j]){
		j++;
		i++;
	}
	else
		if(j != 0)
			j = lps[j-1];
		else
			i++;

	if(j == s.size()){
		cout << "found at " << i-j << " position" << endl;	
		j = lps[j-1];
	}
}
```

```cpp
found at 5 position
found at 10 position
```