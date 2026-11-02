/* Module: vegas30k.dll
   Function: FUN_01180040
   Address: 01180040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01180040(int param_1,undefined4 *param_2)

{
  if (param_1 != 0) {
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x3c);
    *(undefined1 *)((int)param_2 + 5) = *(undefined1 *)(param_1 + 0x40);
    *(undefined1 *)((int)param_2 + 6) = *(undefined1 *)(param_1 + 0x44);
    *(undefined1 *)((int)param_2 + 7) = *(undefined1 *)(param_1 + 0x48);
    switch(*(undefined4 *)(param_1 + 0x38)) {
    case 1:
      *(undefined1 *)(param_2 + 2) = 0x1e;
      break;
    case 2:
      *(undefined1 *)(param_2 + 2) = 0x1d;
      *param_2 = 8;
      return 1;
    case 3:
      *(undefined1 *)(param_2 + 2) = 0x19;
      *param_2 = 8;
      return 1;
    case 4:
      *(undefined1 *)(param_2 + 2) = 0x18;
      *param_2 = 8;
      return 1;
    }
    *param_2 = 8;
    return 1;
  }
  return 0;
}


