/* Module: vegas30.exe
   Function: SfSpike2_GetUserName
   Address: 00604a90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfSpike2_GetUserName(char const *,char *,unsigned int) */

long SfSpike2_GetUserName(char *param_1,char *param_2,uint param_3)

{
  long lVar1;
  uchar local_200 [512];
  
                    /* 0x204a90  39  ?SfSpike2_GetUserName@@YGJPBDPADI@Z */
  _mbscpy(local_200,(uchar *)"Software\\Sonic Foundry\\");
  _mbscat(local_200,(uchar *)param_1);
  lVar1 = FUN_00604310(local_200,"UserName",param_2,param_3);
  return lVar1;
}


