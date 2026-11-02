/* Module: auth3260.dll
   Function: FUN_627a23e0
   Address: 627a23e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a23e0(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
    piVar1 = *(int **)(param_1 + 0x58);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(piVar1,*(undefined4 *)(param_1 + 0x54));
    }
  }
  return 0;
}


