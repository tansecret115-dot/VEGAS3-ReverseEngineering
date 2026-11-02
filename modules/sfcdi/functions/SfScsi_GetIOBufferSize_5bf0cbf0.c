/* Module: sfcdi.dll
   Function: SfScsi_GetIOBufferSize
   Address: 5bf0cbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned long __stdcall SfScsi_GetIOBufferSize(struct HSFSCSIPORT__ *) */

ulong SfScsi_GetIOBufferSize(HSFSCSIPORT__ *param_1)

{
                    /* 0xcbf0  109  ?SfScsi_GetIOBufferSize@@YGKPAUHSFSCSIPORT__@@@Z */
  return *(ulong *)(param_1 + 0x10);
}


