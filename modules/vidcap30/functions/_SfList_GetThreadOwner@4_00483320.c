/* Module: vidcap30.exe
   Function: _SfList_GetThreadOwner@4
   Address: 00483320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfList_GetThreadOwner_4(int param_1)

{
                    /* 0x83320  505  _SfList_GetThreadOwner@4 */
  return *(undefined4 *)(param_1 + 0x34);
}


