/* Module: aviplug.dll
   Function: FUN_5f933170
   Address: 5f933170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f933170(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x22c) == 0) {
    return 0x8000ffff;
  }
  iVar1 = *(int *)(param_1 + 0x244);
  if (*(int *)(iVar1 + 0x28) == 0) {
    uVar2 = ftol();
    *(undefined8 *)(param_1 + 0x230) = uVar2;
    *param_2 = *(undefined4 *)(param_1 + 0x230);
    param_2[1] = *(undefined4 *)(param_1 + 0x234);
    return 0;
  }
  *param_2 = *(undefined4 *)(iVar1 + 0x10);
  param_2[1] = *(undefined4 *)(iVar1 + 0x14);
  return 0;
}


