/* Module: rnco3260.dll
   Function: _ConvertRGB24toXRGB@24
   Address: 636f3ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _ConvertRGB24toXRGB_24
               (uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5,
               int param_6)

{
                    /* 0x3ce0  2  _ConvertRGB24toXRGB@24 */
  FUN_63717ce0(param_2,param_5,param_6,(param_5 + 1) * 3 & 0xfffffffc,0,0,param_5,param_6,param_1,
               param_5,param_6,param_5 * 4,0,0,param_5,param_6);
  return;
}


