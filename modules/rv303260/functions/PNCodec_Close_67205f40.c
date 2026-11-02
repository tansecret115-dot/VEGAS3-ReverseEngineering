/* Module: rv303260.dll
   Function: PNCodec_Close
   Address: 67205f40
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNCodec_Close(int *param_1)

{
                    /* 0x5f40  1  PNCodec_Close */
  (**(code **)(*param_1 + 0xc))();
  return;
}


