/* Module: mp3plug.dll
   Function: FUN_5f727c90
   Address: 5f727c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f727c90(uint param_1,uint param_2,LPSTR param_3,undefined4 param_4,LPCSTR param_5)

{
  undefined4 uVar1;
  CHAR local_104 [260];
  
  uVar1 = FUN_5f7265f0(param_2,param_1);
  wsprintfA(local_104,param_5,uVar1);
  lstrcpynA(param_3,local_104,0x2d);
  param_3[0x2c] = '\0';
  return;
}


