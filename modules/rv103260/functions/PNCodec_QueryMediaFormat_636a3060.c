/* Module: rv103260.dll
   Function: PNCodec_QueryMediaFormat
   Address: 636a3060
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNCodec_QueryMediaFormat(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x3060  7  PNCodec_QueryMediaFormat */
  (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
  return;
}


