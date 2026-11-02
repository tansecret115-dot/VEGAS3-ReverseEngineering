/* Module: rmbe3260.dll
   Function: FUN_66025670
   Address: 66025670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66025670(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 == (int *)0x0) {
    return 0x80040007;
  }
  uVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,param_2);
  return uVar2;
}


