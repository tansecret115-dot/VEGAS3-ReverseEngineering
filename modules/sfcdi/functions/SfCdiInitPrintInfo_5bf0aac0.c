/* Module: sfcdi.dll
   Function: SfCdiInitPrintInfo
   Address: 5bf0aac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiInitPrintInfo(void * *,unsigned long,int,struct tPARAMETERS_PRNCFG *,long
   (__stdcall*)(void *,unsigned char *,long),void *) */

long SfCdiInitPrintInfo(void **param_1,ulong param_2,int param_3,tPARAMETERS_PRNCFG *param_4,
                       _func_long_void_ptr_uchar_ptr_long *param_5,void *param_6)

{
  HGLOBAL hMem;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  LPCRITICAL_SECTION p_Var2;
  
                    /* 0xaac0  69
                       ?SfCdiInitPrintInfo@@YGJPAPAXKHPAUtPARAMETERS_PRNCFG@@P6GJPAXPAEJ@Z2@Z */
  hMem = GlobalAlloc(0x42,0xb0);
  lpCriticalSection = GlobalLock(hMem);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    return -0x7ff8fff2;
  }
  p_Var2 = lpCriticalSection;
  for (iVar1 = 0x2c; iVar1 != 0; iVar1 = iVar1 + -1) {
    p_Var2->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    p_Var2 = (LPCRITICAL_SECTION)&p_Var2->LockCount;
  }
  lpCriticalSection[4].LockCount = (LONG)param_4;
  lpCriticalSection[4].RecursionCount = (LONG)param_5;
  lpCriticalSection[4].OwningThread = param_6;
  lpCriticalSection[4].LockSemaphore = (HANDLE)param_2;
  lpCriticalSection[4].SpinCount = param_3;
  InitializeCriticalSection(lpCriticalSection);
  *param_1 = lpCriticalSection;
  return 0;
}


