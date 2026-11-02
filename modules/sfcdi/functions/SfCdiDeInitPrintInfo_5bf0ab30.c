/* Module: sfcdi.dll
   Function: SfCdiDeInitPrintInfo
   Address: 5bf0ab30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiDeInitPrintInfo(void *) */

long SfCdiDeInitPrintInfo(void *param_1)

{
  HGLOBAL pvVar1;
  
                    /* 0xab30  67  ?SfCdiDeInitPrintInfo@@YGJPAX@Z */
  if (param_1 != (void *)0x0) {
    DeleteCriticalSection(param_1);
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return 0;
  }
  return -0x7ff8ffa9;
}


