#strings
# Longest Prefix Suffix (LPS)

LPS é um algoritmo que cria uma estrutura que dado uma string S encontra o maior prefixo de S que também é um sufixo.

# Implementação (C++)

```cpp
string s = "mamao";

vi lps(s.size(),0);

int i = 0, j = 1;

while(j < s.size()){
	if(s[i] == s[j]){
		i++;
		lps[j] = i;
		j++;
	}else{
		if(i != 0)
			i = lps[i-1];
		else{
			// i = 0
			lps[j] = i;
			j++;
		}
	}
}

dbgvec(lps);
```

```cpp
0 0 1 2 0
```
