/* Module: rv203260.dll
   Function: PNCodec_QueryMediaFormat
   Address: 638a5c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNCodec_QueryMediaFormat(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x5c40  7  PNCodec_QueryMediaFormat */
  (**(code **)(*param_1 + 0x18))(param_2,param_3,param_4);
  return;
}


