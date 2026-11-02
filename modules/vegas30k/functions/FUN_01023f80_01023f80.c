/* Module: vegas30k.dll
   Function: FUN_01023f80
   Address: 01023f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01023f80(int param_1,undefined4 *param_2)

{
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    switch(*param_2) {
    case 2:
      *(undefined4 *)(param_1 + 0x10) = 2;
      break;
    default:
      *(undefined4 *)(param_1 + 0x10) = 0;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x10) = 5;
      break;
    case 10:
      *(undefined4 *)(param_1 + 0x10) = 0xc;
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x10) = 0xb;
    }
    *(undefined4 *)(param_1 + 0x14) = param_2[5];
    *(undefined4 *)(param_1 + 0x18) = param_2[4];
    *(undefined4 *)(param_1 + 0x1c) = param_2[6];
    *(undefined4 *)(param_1 + 0x20) = param_2[2];
    *(undefined4 *)(param_1 + 0x24) = param_2[3];
    return 0;
  }
  return 0x80004003;
}


