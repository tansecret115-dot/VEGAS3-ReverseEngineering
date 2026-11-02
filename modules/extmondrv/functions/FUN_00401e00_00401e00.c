/* Module: extmondrv.dll
   Function: FUN_00401e00
   Address: 00401e00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00401e00(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[6];
  iVar2 = (**(code **)(*param_1 + 0x14))(param_1);
  if (-1 < iVar2) {
    param_1[6] = 2;
    return;
  }
  param_1[6] = iVar1;
  return;
}


