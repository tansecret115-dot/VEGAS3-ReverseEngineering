/* Module: rmbe3260.dll
   Function: FUN_66013240
   Address: 66013240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66013240(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 == (int *)0x0) {
    *param_2 = 6;
    return 0x80040007;
  }
  uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,param_2);
  return uVar2;
}


