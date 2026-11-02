/* Module: rv103260.dll
   Function: PNCodec_GetMediaFormats
   Address: 636a30a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNCodec_GetMediaFormats(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x30a0  2  PNCodec_GetMediaFormats */
  (**(code **)(*param_1 + 0x20))(param_2,param_3,param_4);
  return;
}


