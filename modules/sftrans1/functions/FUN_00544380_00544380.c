/* Module: sftrans1.dll
   Function: FUN_00544380
   Address: 00544380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00544380(int param_1,int param_2)

{
  if (param_2 == 0x15) {
    *(undefined1 *)(param_1 + 0x78) = 0xff;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined1 *)(param_1 + 0x88) = 1;
    return 0;
  }
  if (param_2 != 0x16) {
    if (param_2 != 0x17) {
      return 5;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    return 0;
  }
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  return 0;
}


