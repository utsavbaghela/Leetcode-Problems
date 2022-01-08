M-468. Validate IP Address

class Solution {
public:
    
    int check_ipv4(string ip)
    {
        int s=0;
    vector<string> parts;
    string p="";
    if(ip[ip.size()-1]=='.')
            return 0;
    for (int i=0;i<=ip.size();i++)
    { 
        if(ip[i]=='.' && ip[i+1]=='.')
            return 0;
        if(ip[i]=='.' || i==ip.size())
        { 
            if(p.size()!=0)
                parts.push_back(p);
            p="";
        }
        else
        {
            p+=ip[i];
        }
    }
    
    for(auto i : parts)
    {
        //cout<<"*"<<i<<endl;
        if(parts.size()!=4 || i.size()>4)
            return 0;
    
        if(i.size()>1 && i[0]-'0'==0)
            return 0;
        
        for(int j=0;j<i.size();j++)
        {
            if(i[j]-'0'< 0 || i[j]-'0'>9 )
               return 0;
        }
        if(0>stoi(i) || stoi(i)>255)
            return 0;
    }
    return 1;
    }
    
    
    
    int check_ipv6(string ip)
    {
    int s=0;
    vector<string> parts;
    string p="";
    for (int i=0;i<=ip.size();i++)
    { 
        if(ip[i]==':' || i==ip.size())
        {
            parts.push_back(p);
            p="";
        }
        else
        {
            p+=ip[i];
        }
    }
    
    for(auto i : parts)
    {
       if(i.size()>4 || i.size()<=0)
            return 0;
       for(int j=0;j<i.size();j++)
       {
           if(parts.size()!=8)
            return 0;
           if(i[j]-'0'< 0 || i[j]-'0'>9  && (int)i[j]<65 || (int)i[j]>70 && (int)i[j]<97 || (int)i[j]>102 )
               return 0;
       }
    }
    return 1 ;
    }
    
    
    string validIPAddress(string ip) {
    if(ip.size()==0)
        return "Neither";
    if( check_ipv4(ip) )
        return "IPv4";
    if( check_ipv6(ip) )
        return "IPv6";
    else
        return "Neither";
    
    return ip;
    }
};