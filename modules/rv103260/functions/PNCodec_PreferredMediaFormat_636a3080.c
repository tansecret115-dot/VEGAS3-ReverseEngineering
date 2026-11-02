/* Module: rv103260.dll
   Function: PNCodec_PreferredMediaFormat
   Address: 636a3080
   Source: Ghidra pseudocode (Stage 10 batch) */


void PNCodec_PreferredMediaFormat
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* 0x3080  6  PNCodec_PreferredMediaFormat */
  (**(code **)(*param_1 + 0x1c))(param_2,param_3,param_4);
  return;
}


