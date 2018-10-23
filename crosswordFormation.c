int crosswordFormation(std::vector<std::string> words) {
    int Min = INT_MAX;
    for(auto item : words)
    {
        if(item.size()<Min)
            Min = item.size();
    }
    int cnt=0;
    while(next_permutation(words.begin(), words.end()))
    {
        for(int a=1; (a+2)<=words[0].size() && (a+2)<=words[2].size(); a++)
        {
            for(int b=1; (b+2)<=words[1].size() && (b+2)<=words[3].size(); b++)
            {
                // cout << a << " " << b << endl;
                for(int one=0; (one+a+2)<=words[0].size(); ++one)
                {
                    for(int two=0; (two+b+2)<=words[1].size(); ++two)
                    {
                        for(int three=0; (three+a+2)<=words[2].size(); ++three)
                        {
                            for(int four=0; (four+b+2)<=words[3].size(); ++four)
                            {
                                if(words[0][one]==words[1][two] 
                                && words[1][two]==words[2][three]
                                && words[2][three]==words[3][four] 
                                && words[3][four]==words[0][one])
                                    cnt++;
                            }
                        }
                    }
                }
            }
        }
    }
    
    
    return cnt;
}
