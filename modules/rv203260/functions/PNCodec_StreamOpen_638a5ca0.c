/* Module: rv203260.dll
   Function: PNCodec_StreamOpen
   Address: 638a5ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNCodec_StreamOpen(int *param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0x5ca0  8  PNCodec_StreamOpen */
  (**(code **)(*param_1 + 0x24))(param_2,param_3);
  return;
}


