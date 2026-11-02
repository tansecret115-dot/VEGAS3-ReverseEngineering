/* Module: vfplugs.dll
   Function: FUN_0047f250
   Address: 0047f250
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047f250(uint param_1,uint param_2,LPSTR param_3,undefined4 param_4,LPCSTR param_5)

{
  undefined4 uVar1;
  CHAR local_104 [260];
  
  uVar1 = FUN_0047d880(param_2,param_1);
  wsprintfA(local_104,param_5,uVar1);
  lstrcpynA(param_3,local_104,0x2d);
  param_3[0x2c] = '\0';
  return;
}


