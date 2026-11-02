/* Module: vidcap30.exe
   Function: FUN_00405210
   Address: 00405210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405210(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xac);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,0,0xffffffff,0xffffffff,1);
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    return 1;
  }
  return 1;
}


