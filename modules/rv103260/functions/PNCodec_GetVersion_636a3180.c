/* Module: rv103260.dll
   Function: PNCodec_GetVersion
   Address: 636a3180
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNCodec_GetVersion(int *param_1,undefined4 param_2)

{
                    /* 0x3180  4  PNCodec_GetVersion
                       0x3180  14  PNStream_GetStreamHeaderSize */
  (**(code **)(*param_1 + 0x14))(param_2);
  return;
}


