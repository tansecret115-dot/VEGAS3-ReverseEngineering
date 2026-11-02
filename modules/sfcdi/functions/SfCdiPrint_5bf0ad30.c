/* Module: sfcdi.dll
   Function: SfCdiPrint
   Address: 5bf0ad30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCdiPrint(void *) */

long SfCdiPrint(void *param_1)

{
  HANDLE pvVar1;
  long lVar2;
  
                    /* 0xad30  70  ?SfCdiPrint@@YGJPAX@Z */
  lVar2 = 0;
  if (param_1 == (void *)0x0) {
    return -0x7ff8ffa9;
  }
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_5bf0ab70,param_1,0
                        ,(LPDWORD)((int)param_1 + 0x60));
  *(HANDLE *)((int)param_1 + 0x5c) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    lVar2 = -0x7ff8fff2;
  }
  return lVar2;
}


