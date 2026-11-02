/* Module: sfcd.cdd
   Function: FUN_0041cc40
   Address: 0041cc40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041cc40(HSFCD__ *param_1,uint *param_2,uint param_3)

{
  if ((param_3 & 0x10) != 0) {
    FUN_0041cb70(param_1,param_2);
    return;
  }
  FUN_0041add0(param_1,param_2,param_3);
  return;
}


