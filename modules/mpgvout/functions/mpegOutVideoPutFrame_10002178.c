/* Module: mpgvout.dll
   Function: mpegOutVideoPutFrame
   Address: 10002178
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
mpegOutVideoPutFrame
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
                    /* 0x2178  7  mpegOutVideoPutFrame */
  (*DAT_10003038)(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


