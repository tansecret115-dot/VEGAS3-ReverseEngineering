/* Module: sfcdi.dll
   Function: SfCDBurn_WriteDiscNG
   Address: 5bf04d90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDBurn_WriteDiscNG(struct HSFBURN__ *) */

long SfCDBurn_WriteDiscNG(HSFBURN__ *param_1)

{
  HANDLE pvVar1;
  long lVar2;
  
                    /* 0x4d90  30  ?SfCDBurn_WriteDiscNG@@YGJPAUHSFBURN__@@@Z */
  lVar2 = 0;
  if (param_1 == (HSFBURN__ *)0x0) {
    return -0x7ff8ffa9;
  }
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_5bf047b0,param_1,0
                        ,(LPDWORD)(param_1 + 0x60));
  *(HANDLE *)(param_1 + 0x5c) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    lVar2 = -0x7ff8fff2;
  }
  return lVar2;
}


