/* Module: rn5a3260.dll
   Function: FUN_628a2440
   Address: 628a2440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a2440(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
    return uVar2;
  }
  *param_2 = 0;
  return 0x80004002;
}


