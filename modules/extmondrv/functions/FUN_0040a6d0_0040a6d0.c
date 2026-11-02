/* Module: extmondrv.dll
   Function: FUN_0040a6d0
   Address: 0040a6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040a6d0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  if ((*param_2 != param_1[8]) || (param_2[1] != param_1[9])) {
    (**(code **)(*param_1 + 0x20))(param_1);
    param_1[8] = *param_2;
    param_1[9] = param_2[1];
    uVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_1 + 7);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return uVar1;
}


