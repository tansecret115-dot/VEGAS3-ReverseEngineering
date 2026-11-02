/* Module: sfcdi.dll
   Function: SfScsi_IsBusy
   Address: 5bf0ce20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfScsi_IsBusy(unsigned long) */

int SfScsi_IsBusy(ulong param_1)

{
                    /* 0xce20  118  ?SfScsi_IsBusy@@YGHK@Z */
  if ((param_1 & 0x800) != 0) {
    return 1;
  }
  if ((param_1 >> 0x10 & 8) != 0) {
    return 1;
  }
  return (param_1 & 0xff) >> 3 & 1;
}


