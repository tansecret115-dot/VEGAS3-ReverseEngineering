/* Module: sfcdi.dll
   Function: SfCDBurn_CancelWriteNG
   Address: 5bf04dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfCDBurn_CancelWriteNG(struct HSFBURN__ *) */

long SfCDBurn_CancelWriteNG(HSFBURN__ *param_1)

{
                    /* 0x4dd0  22  ?SfCDBurn_CancelWriteNG@@YGJPAUHSFBURN__@@@Z */
  if (param_1 != (HSFBURN__ *)0x0) {
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  return 0;
}


