/* Module: Setup.exe
   Function: SfSpike2_GetUserCompany
   Address: 0042c740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfSpike2_GetUserCompany(char const *,char *,unsigned int) */

long SfSpike2_GetUserCompany(char *param_1,char *param_2,uint param_3)

{
  long lVar1;
  uchar local_200 [512];
  
                    /* 0x2c740  59  ?SfSpike2_GetUserCompany@@YGJPBDPADI@Z */
  _mbscpy(local_200,(uchar *)"Software\\Sonic Foundry\\");
  _mbscat(local_200,(uchar *)param_1);
  lVar1 = FUN_0042bc30((LPCSTR)local_200,"Company",param_2,param_3);
  return lVar1;
}


