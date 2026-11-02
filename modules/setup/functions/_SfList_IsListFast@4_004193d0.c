/* Module: Setup.exe
   Function: _SfList_IsListFast@4
   Address: 004193d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfList_IsListFast_4(int param_1)

{
                    /* 0x193d0  240  _SfList_IsListFast@4 */
  return *(int *)(param_1 + 0x24) == 0x54525543;
}


