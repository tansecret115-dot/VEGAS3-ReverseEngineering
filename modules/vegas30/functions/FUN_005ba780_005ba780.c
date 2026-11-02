/* Module: vegas30.exe
   Function: FUN_005ba780
   Address: 005ba780
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005ba780(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  
  iVar1 = FUN_005b9fc0(param_1,param_2,0);
  *param_3 = *(undefined4 *)(iVar1 + 0xec);
  *param_4 = *(undefined4 *)(iVar1 + 0xf0);
  param_4[1] = *(undefined4 *)(iVar1 + 0xf4);
  *param_5 = *(undefined4 *)(iVar1 + 0xf8);
  FUN_005ba030(param_1,iVar1,0,1);
  return;
}


