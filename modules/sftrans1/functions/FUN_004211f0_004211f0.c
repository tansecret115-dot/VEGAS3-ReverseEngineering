/* Module: sftrans1.dll
   Function: FUN_004211f0
   Address: 004211f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004211f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x84));
  uVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x20))(param_2,param_1 + 0x9c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x84));
  return uVar1;
}


