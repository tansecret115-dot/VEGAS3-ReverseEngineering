/* Module: rv203260.dll
   Function: PNCodec_GetVersion
   Address: 638a5d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNCodec_GetVersion(int *param_1,undefined4 param_2)

{
                    /* 0x5d60  4  PNCodec_GetVersion
                       0x5d60  14  PNStream_GetStreamHeaderSize */
  (**(code **)(*param_1 + 0x14))(param_2);
  return;
}


