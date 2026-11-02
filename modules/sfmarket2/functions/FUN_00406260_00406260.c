/* Module: sfmarket2.dll
   Function: FUN_00406260
   Address: 00406260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406260(int param_1,undefined4 *param_2,undefined4 param_3)

{
  DWORD DVar1;
  
  *param_2 = param_3;
  DVar1 = GetCurrentThreadId();
  param_2[1] = DVar1;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x34));
  param_2[2] = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 **)(param_1 + 0x68) = param_2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x34));
  return;
}


