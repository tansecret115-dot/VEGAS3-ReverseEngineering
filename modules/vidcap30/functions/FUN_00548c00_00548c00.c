/* Module: vidcap30.exe
   Function: FUN_00548c00
   Address: 00548c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00548c00(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(*(int *)(param_1 + 8) + 0xc) = 0;
  }
  return 0;
}


