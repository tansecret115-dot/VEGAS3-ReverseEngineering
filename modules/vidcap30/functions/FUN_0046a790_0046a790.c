/* Module: vidcap30.exe
   Function: FUN_0046a790
   Address: 0046a790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0046a790(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  HANDLE pvVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[-0x31];
  EnterCriticalSection(lpCriticalSection);
  pvVar1 = OpenEventA(0x1f0003,0,"RenderStop");
  param_1[7] = (int)pvVar1;
  pvVar1 = OpenEventA(0x1f0003,0,"VideoSampleRendered");
  param_1[0xb] = (int)pvVar1;
  pvVar1 = OpenSemaphoreA(0x1f0003,0,"VideoSamples");
  param_1[9] = (int)pvVar1;
  if ((((HANDLE)param_1[7] != (HANDLE)0x0) && (pvVar1 != (HANDLE)0x0)) && (param_1[0xb] != 0)) {
    ResetEvent((HANDLE)param_1[7]);
    ResetEvent((HANDLE)param_1[0xb]);
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  LeaveCriticalSection(lpCriticalSection);
  return 0x80004005;
}


