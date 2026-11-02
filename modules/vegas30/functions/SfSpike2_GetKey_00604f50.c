/* Module: vegas30.exe
   Function: SfSpike2_GetKey
   Address: 00604f50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfSpike2_GetKey(char const *,char *,unsigned int) */

long SfSpike2_GetKey(char *param_1,char *param_2,uint param_3)

{
  long lVar1;
  uchar local_200 [512];
  
                    /* 0x204f50  36  ?SfSpike2_GetKey@@YGJPBDPADI@Z */
  _mbscpy(local_200,(uchar *)"Software\\Sonic Foundry\\");
  _mbscat(local_200,(uchar *)param_1);
  lVar1 = FUN_00604310(local_200,"keyRegFile",param_2,param_3);
  return lVar1;
}


