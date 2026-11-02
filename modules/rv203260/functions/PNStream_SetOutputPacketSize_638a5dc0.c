/* Module: rv203260.dll
   Function: PNStream_SetOutputPacketSize
   Address: 638a5dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNStream_SetOutputPacketSize
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x5dc0  18  PNStream_SetOutputPacketSize */
  (**(code **)(*param_1 + 0x24))(param_2,param_3,param_4);
  return;
}


