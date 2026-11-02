/* Module: aviplug.dll
   Function: FUN_5f950380
   Address: 5f950380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f950380(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    return 0x80040209;
  }
  (**(code **)(*piVar1 + 8))(piVar1);
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_5f94fa50(*(int *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 0;
}


