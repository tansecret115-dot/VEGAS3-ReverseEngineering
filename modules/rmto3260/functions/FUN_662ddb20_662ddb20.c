/* Module: rmto3260.dll
   Function: FUN_662ddb20
   Address: 662ddb20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662ddb20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (piVar1 = *(int **)(param_1 + 0x34), piVar1 != (int *)0x0))
  {
    uVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,param_2,param_3);
    return uVar2;
  }
  return 0x80004005;
}


