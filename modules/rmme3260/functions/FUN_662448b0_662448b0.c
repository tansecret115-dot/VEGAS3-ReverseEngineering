/* Module: rmme3260.dll
   Function: FUN_662448b0
   Address: 662448b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_662448b0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  LONG *lpAddend;
  LONG LVar1;
  undefined4 uVar2;
  
  lpAddend = (LONG *)((int)param_1 + 0x927);
  LVar1 = InterlockedIncrement(lpAddend);
  if (1 < LVar1) {
    InterlockedDecrement(lpAddend);
    return 0;
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_3);
  uVar2 = (**(code **)(*param_1 + 0x14))(param_1,param_2,param_4,param_5);
  InterlockedDecrement(lpAddend);
  return uVar2;
}


