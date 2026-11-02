/* Module: vegas30.exe
   Function: FUN_0040c740
   Address: 0040c740
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040c740(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xd0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,0,0xffffffff,0xffffffff,1);
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    return 1;
  }
  return 1;
}


