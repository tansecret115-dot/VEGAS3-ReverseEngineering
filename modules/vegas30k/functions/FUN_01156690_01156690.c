/* Module: vegas30k.dll
   Function: FUN_01156690
   Address: 01156690
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01156690(int param_1,int param_2,int param_3)

{
  if ((((*(uint *)(param_1 + 0x60) & 1) == 0) || ((*(uint *)(param_1 + 0x60) & 4) == 0)) &&
     (FUN_01155f80(param_1,"No image in file"), param_2 == 0)) {
    return;
  }
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x18;
  if (param_3 != 0) {
    FUN_01155fb0(param_1,"Incorrect IEND chunk length");
  }
  FUN_011561f0(param_1,param_3);
  return;
}


