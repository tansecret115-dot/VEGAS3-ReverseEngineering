/* Module: rmto3260.dll
   Function: FUN_662ddbe0
   Address: 662ddbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662ddbe0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 == (int *)0x0) {
    return 0x80004005;
  }
  uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,param_2,param_3,param_4);
  return uVar2;
}


