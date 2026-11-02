/* Module: wmfplug2.dll
   Function: FUN_0041ed90
   Address: 0041ed90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041ed90(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x214);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x214) = 0;
  return 0;
}


