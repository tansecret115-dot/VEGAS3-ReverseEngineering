/* Module: sfpagepeel.dll
   Function: FUN_00403a10
   Address: 00403a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403a10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xdc));
  uVar1 = (**(code **)(*(int *)(param_1 + -8) + 0x20))(param_2,param_1 + 0xf8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xdc));
  return uVar1;
}


