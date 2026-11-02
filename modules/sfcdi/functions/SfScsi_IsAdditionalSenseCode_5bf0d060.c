/* Module: sfcdi.dll
   Function: SfScsi_IsAdditionalSenseCode
   Address: 5bf0d060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfScsi_IsAdditionalSenseCode(int) */

int SfScsi_IsAdditionalSenseCode(int param_1)

{
                    /* 0xd060  117  ?SfScsi_IsAdditionalSenseCode@@YGHH@Z */
  return (uint)(99 < param_1);
}


