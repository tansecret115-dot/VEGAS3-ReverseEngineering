/* Module: rmto3260.dll
   Function: FUN_662c29f0
   Address: 662c29f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c29f0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0x80040007;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x10);
  }
  if (1 < iVar1) {
    if (*(int *)(param_1 + 0x38) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x38) + 0x10);
    }
    uVar2 = 2;
    if (1 < iVar1) goto LAB_662c2a36;
  }
  uVar2 = 1;
LAB_662c2a36:
  *param_2 = uVar2;
  return 0;
}


