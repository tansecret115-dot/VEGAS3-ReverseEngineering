/* Module: rmto3260.dll
   Function: FUN_662f60b0
   Address: 662f60b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662f60b0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (((param_2 != 0) && (param_3 != 0)) && (piVar1 = *(int **)(param_1 + 4), piVar1 != (int *)0x0))
  {
    uVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,param_2,param_3);
    return uVar2;
  }
  return 0x80004003;
}


