/* Module: vegas30k.dll
   Function: FUN_01128520
   Address: 01128520
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01128520(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_3 != 0) {
      *(int *)(param_2 + 0x45) = param_3;
    }
    if (param_5 != (undefined4 *)0x0) {
      *(undefined4 *)(param_2 + 0x49) = *param_5;
      *(undefined4 *)(param_2 + 0x4d) = param_5[1];
      *(undefined1 *)(param_2 + 0x51) = *(undefined1 *)(param_5 + 2);
      if (param_4 == 0) {
        *(undefined2 *)(param_2 + 0x16) = 1;
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10;
        return;
      }
    }
    *(short *)(param_2 + 0x16) = (short)param_4;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10;
  }
  return;
}


