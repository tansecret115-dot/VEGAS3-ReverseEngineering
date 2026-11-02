/* Module: rv103260.dll
   Function: PNCodec_StreamOpen
   Address: 636a30c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNCodec_StreamOpen(int *param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x30c0  8  PNCodec_StreamOpen */
  (**(code **)(*param_1 + 0x24))(param_2,param_3);
  return;
}


