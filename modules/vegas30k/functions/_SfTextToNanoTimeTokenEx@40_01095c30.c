/* Module: vegas30k.dll
   Function: _SfTextToNanoTimeTokenEx@40
   Address: 01095c30
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfTextToNanoTimeTokenEx_40
               (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10)

{
                    /* 0x95c30  1228  _SfTextToNanoTimeTokenEx@40 */
  _SfTextToNanoTimeToken2_40
            (param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_3 != 0 | 4,
             param_10);
  return;
}


