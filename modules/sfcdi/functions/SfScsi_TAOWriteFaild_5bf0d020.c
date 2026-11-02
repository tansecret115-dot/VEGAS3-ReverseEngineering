/* Module: sfcdi.dll
   Function: SfScsi_TAOWriteFaild
   Address: 5bf0d020
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall SfScsi_TAOWriteFaild(unsigned int,struct _SENSE_DATA *) */

int SfScsi_TAOWriteFaild(uint param_1,_SENSE_DATA *param_2)

{
                    /* 0xd020  125  ?SfScsi_TAOWriteFaild@@YGHIPAU_SENSE_DATA@@@Z */
  if ((((param_1 == 10) || (param_1 == 0x2a)) || (param_1 == 0xaa)) &&
     (((byte)param_2[2] & 0xf) == 5)) {
    return 1;
  }
  return 0;
}


