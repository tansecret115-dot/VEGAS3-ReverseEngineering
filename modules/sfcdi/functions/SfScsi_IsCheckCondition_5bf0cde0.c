/* Module: sfcdi.dll
   Function: SfScsi_IsCheckCondition
   Address: 5bf0cde0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfScsi_IsCheckCondition(unsigned long) */

int SfScsi_IsCheckCondition(ulong param_1)

{
                    /* 0xcde0  119  ?SfScsi_IsCheckCondition@@YGHK@Z */
  if ((param_1 & 0x200) != 0) {
    return 1;
  }
  if ((param_1 >> 0x10 & 2) != 0) {
    return 1;
  }
  return (param_1 & 0xff) >> 1 & 1;
}


