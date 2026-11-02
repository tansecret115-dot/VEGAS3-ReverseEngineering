/* Module: vegas30k.dll
   Function: syncoutUpdatePosition
   Address: 01180450
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall syncoutUpdatePosition,20 */

void syncoutUpdatePosition
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  
                    /* 0x180450  1449  _syncoutUpdatePosition@20 */
  if (param_1 != 0) {
    uVar1 = __alldiv(param_2,param_3,10000,0);
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    uVar1 = _SfGetMillisecEx_4(param_1 + 8);
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    uVar1 = __alldiv(param_4,param_5,10000,0);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
  }
  return;
}


