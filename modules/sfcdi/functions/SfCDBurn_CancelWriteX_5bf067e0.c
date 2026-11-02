/* Module: sfcdi.dll
   Function: SfCDBurn_CancelWriteX
   Address: 5bf067e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDBurn_CancelWriteX(struct HSFBURN__ *) */

long SfCDBurn_CancelWriteX(HSFBURN__ *param_1)

{
                    /* 0x67e0  23  ?SfCDBurn_CancelWriteX@@YGJPAUHSFBURN__@@@Z */
  if (param_1 != (HSFBURN__ *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return 0;
}


