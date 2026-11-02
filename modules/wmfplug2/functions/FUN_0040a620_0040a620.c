/* Module: wmfplug2.dll
   Function: FUN_0040a620
   Address: 0040a620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040a620(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 0;
}


