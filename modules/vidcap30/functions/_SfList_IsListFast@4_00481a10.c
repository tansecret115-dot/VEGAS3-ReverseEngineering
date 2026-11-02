/* Module: vidcap30.exe
   Function: _SfList_IsListFast@4
   Address: 00481a10
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfList_IsListFast_4(int param_1)

{
                    /* 0x81a10  511  _SfList_IsListFast@4 */
  return *(int *)(param_1 + 0x24) == 0x54525543;
}


