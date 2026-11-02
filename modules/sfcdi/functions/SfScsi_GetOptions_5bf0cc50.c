/* Module: sfcdi.dll
   Function: SfScsi_GetOptions
   Address: 5bf0cc50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* unsigned long __stdcall SfScsi_GetOptions(struct HSFSCSIPORT__ *) */

ulong SfScsi_GetOptions(HSFSCSIPORT__ *param_1)

{
                    /* 0xcc50  113  ?SfScsi_GetOptions@@YGKPAUHSFSCSIPORT__@@@Z */
  if (param_1 == (HSFSCSIPORT__ *)0x0) {
    return 0;
  }
  return *(ulong *)param_1;
}


