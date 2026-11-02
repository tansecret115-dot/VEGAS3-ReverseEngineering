/* Module: vegas30k.dll
   Function: FUN_0119ab60
   Address: 0119ab60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0119ab60(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    return 1;
  }
  iVar1 = param_1[0x189];
  param_1[0x189] = iVar1 + 1;
  if ((param_1[0x187] == iVar1 + 1) &&
     (iVar1 = (**(code **)(*param_1 + 0x178))(param_2,param_3,0), iVar1 != 0)) {
    param_1[0x189] = param_1[0x189] + -1;
    return iVar1;
  }
  return 0;
}


