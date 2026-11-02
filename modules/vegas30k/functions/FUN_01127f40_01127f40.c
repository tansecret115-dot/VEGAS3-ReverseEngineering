/* Module: vegas30k.dll
   Function: FUN_01127f40
   Address: 01127f40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01127f40(int param_1,int param_2,undefined4 *param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_2 + 0x52) = *param_3;
    *(undefined4 *)(param_2 + 0x56) = param_3[1];
    *(undefined1 *)(param_2 + 0x5a) = *(undefined1 *)(param_3 + 2);
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
  }
  return;
}


