/* Module: sftrans1.dll
   Function: FUN_0042ac90
   Address: 0042ac90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042ac90(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 0x80004005;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  uVar1 = (**(code **)(*(int *)(param_1 + -0xc) + 0x24))(param_2,param_1 + 0xc4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  return uVar1;
}


