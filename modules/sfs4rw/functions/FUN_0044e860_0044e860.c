/* Module: sfs4rw.dll
   Function: FUN_0044e860
   Address: 0044e860
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0044e860(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) &&
     ((iVar2 = *(int *)(iVar1 + 4), iVar2 == 0x2a || ((iVar2 == 0x71 || (iVar2 == 0x29a)))))) {
    if (*(int *)(iVar1 + 8) != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(int *)(iVar1 + 8));
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x3a);
    if (iVar1 != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x36);
    if (iVar1 != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x2e);
    if (iVar1 != 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return (iVar2 != 0x71) - 1 & 0xfffffffd;
  }
  return 0xfffffffe;
}


