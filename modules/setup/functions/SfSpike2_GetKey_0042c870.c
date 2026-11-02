/* Module: Setup.exe
   Function: SfSpike2_GetKey
   Address: 0042c870
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfSpike2_GetKey(char const *,char *,unsigned int) */

long SfSpike2_GetKey(char *param_1,char *param_2,uint param_3)

{
  long lVar1;
  uchar local_200 [512];
  
                    /* 0x2c870  57  ?SfSpike2_GetKey@@YGJPBDPADI@Z */
  _mbscpy(local_200,(uchar *)"Software\\Sonic Foundry\\");
  _mbscat(local_200,(uchar *)param_1);
  lVar1 = FUN_0042bc30((LPCSTR)local_200,"keyRegFile",param_2,param_3);
  return lVar1;
}


