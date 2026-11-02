/* Module: rmto3260.dll
   Function: FUN_662dda20
   Address: 662dda20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662dda20(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (piVar1 = *(int **)(param_1 + 0x34), piVar1 != (int *)0x0))
  {
    uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,param_2);
    return uVar2;
  }
  return 0x80004005;
}


