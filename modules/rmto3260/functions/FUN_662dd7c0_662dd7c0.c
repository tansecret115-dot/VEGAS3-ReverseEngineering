/* Module: rmto3260.dll
   Function: FUN_662dd7c0
   Address: 662dd7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662dd7c0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (piVar1 = *(int **)(param_1 + 0x28), piVar1 != (int *)0x0))
  {
    uVar2 = (**(code **)(*piVar1 + 0x6c))(piVar1,param_2);
    return uVar2;
  }
  return 0x80004005;
}


