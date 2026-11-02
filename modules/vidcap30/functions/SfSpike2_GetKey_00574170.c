/* Module: vidcap30.exe
   Function: SfSpike2_GetKey
   Address: 00574170
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfSpike2_GetKey(char const *,char *,unsigned int) */

long SfSpike2_GetKey(char *param_1,char *param_2,uint param_3)

{
  long lVar1;
  uchar local_200 [512];
  
                    /* 0x174170  131  ?SfSpike2_GetKey@@YGJPBDPADI@Z */
  _mbscpy(local_200,(uchar *)"Software\\Sonic Foundry\\");
  _mbscat(local_200,(uchar *)param_1);
  lVar1 = FUN_00573530(local_200,"keyRegFile",param_2,param_3);
  return lVar1;
}


