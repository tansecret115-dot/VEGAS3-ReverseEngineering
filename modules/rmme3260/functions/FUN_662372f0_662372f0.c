/* Module: rmme3260.dll
   Function: FUN_662372f0
   Address: 662372f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662372f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 == (int *)0x0) {
    return 0x80040009;
  }
  uVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,param_2,param_3);
  return uVar2;
}


