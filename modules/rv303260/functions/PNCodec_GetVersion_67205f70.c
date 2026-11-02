/* Module: rv303260.dll
   Function: PNCodec_GetVersion
   Address: 67205f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNCodec_GetVersion(int *param_1,undefined4 param_2)

{
                    /* 0x5f70  4  PNCodec_GetVersion
                       0x5f70  14  PNStream_GetStreamHeaderSize */
  (**(code **)(*param_1 + 0x14))(param_2);
  return;
}


