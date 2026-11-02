/* Module: vegas30.exe
   Function: FUN_005ba030
   Address: 005ba030
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005ba030(undefined4 *param_1,LPCRITICAL_SECTION param_2,int param_3,int param_4)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  DWORD DVar2;
  
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    if (param_3 == 1) {
      param_2[1].LockCount = param_2[1].LockCount + -1;
    }
    if ((param_4 == 0) || (param_3 != 1)) {
      if ((param_3 == 0) && (DVar2 = GetCurrentThreadId(), DAT_00647208 == DVar2)) {
        return;
      }
    }
    else if (param_2[1].LockCount == 0) {
      p_Var1 = param_2[8].DebugInfo;
      FUN_005ba110(param_1,param_2[10].LockSemaphore);
      FUN_005ba210(param_1,0,param_2[10].LockSemaphore);
      if (p_Var1 != param_2[8].DebugInfo) {
        *(uint *)*param_1 = *(uint *)*param_1 | 0x400000;
        LeaveCriticalSection(param_2);
        return;
      }
    }
    LeaveCriticalSection(param_2);
  }
  return;
}


