/* Module: rv103260.dll
   Function: PNCodec_Close
   Address: 636a3030
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNCodec_Close(int *param_1)

{
                    /* 0x3030  1  PNCodec_Close */
  (**(code **)(*param_1 + 0xc))();
  return;
}


