/* Module: wmfplug2.dll
   Function: FUN_00409c20
   Address: 00409c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00409c20(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x4c);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar2 = (**(code **)(*piVar1 + 0x34))(piVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
    return uVar2;
  }
  uVar2 = (**(code **)(*piVar1 + 0x30))(piVar1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  return uVar2;
}


