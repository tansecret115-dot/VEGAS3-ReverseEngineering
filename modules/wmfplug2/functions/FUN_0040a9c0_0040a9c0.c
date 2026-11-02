/* Module: wmfplug2.dll
   Function: FUN_0040a9c0
   Address: 0040a9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040a9c0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 0;
}


