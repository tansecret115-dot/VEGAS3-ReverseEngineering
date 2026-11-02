/* Module: rv103260.dll
   Function: PNStream_SetOutputPacketSize
   Address: 636a31e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNStream_SetOutputPacketSize
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x31e0  18  PNStream_SetOutputPacketSize */
  (**(code **)(*param_1 + 0x24))(param_2,param_3,param_4);
  return;
}


