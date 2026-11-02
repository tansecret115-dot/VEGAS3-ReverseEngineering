/* Module: vegas30k.dll
   Function: FUN_01157d60
   Address: 01157d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01157d60(int param_1,int param_2,undefined4 param_3)

{
  FUN_01157db0(param_1,(byte *)(param_1 + 0x114));
  if (((*(byte *)(param_1 + 0x114) & 0x20) == 0) &&
     (FUN_01155fe0(param_1,"unknown critical chunk"), param_2 == 0)) {
    return;
  }
  if ((*(uint *)(param_1 + 0x60) & 4) != 0) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 8;
  }
  FUN_011561f0(param_1,param_3);
  return;
}


