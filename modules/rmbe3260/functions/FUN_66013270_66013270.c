/* Module: rmbe3260.dll
   Function: FUN_66013270
   Address: 66013270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66013270(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 == (int *)0x0) {
    *param_3 = 0;
    param_3[1] = 0;
    return 0x80040007;
  }
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param_2,param_3);
  return uVar2;
}


