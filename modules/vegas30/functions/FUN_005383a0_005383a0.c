/* Module: vegas30.exe
   Function: FUN_005383a0
   Address: 005383a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_005383a0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  switch(*param_1) {
  case 1:
  case 7:
  case 8:
    if (param_1[1] != 0) {
      return *(undefined8 *)(param_1[1] + 0x18);
    }
    break;
  case 5:
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      uVar2 = *(uint *)(*(int *)(iVar1 + 0x50) + 8);
      return CONCAT44((*(int *)(iVar1 + 0x1c) - *(int *)(*(int *)(iVar1 + 0x50) + 0xc)) -
                      (uint)(*(uint *)(iVar1 + 0x18) < uVar2),*(uint *)(iVar1 + 0x18) - uVar2);
    }
  }
  return 0;
}


