/* Module: vegas30k.dll
   Function: _SfList_IsListFast@4
   Address: 010fc1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfList_IsListFast_4(int param_1)

{
                    /* 0xfc1a0  1077  _SfList_IsListFast@4 */
  return *(int *)(param_1 + 0x24) == 0x54525543;
}


