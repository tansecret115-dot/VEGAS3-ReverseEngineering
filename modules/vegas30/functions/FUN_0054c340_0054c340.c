/* Module: vegas30.exe
   Function: FUN_0054c340
   Address: 0054c340
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054c340(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x56c) = param_2;
  *(undefined4 *)(param_1 + 0x570) = param_3;
  switch(param_2) {
  case 0:
  case 5:
    *(undefined4 *)(param_1 + 0x574) = 0x1a;
    return;
  case 1:
  case 2:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
    *(undefined4 *)(param_1 + 0x574) = 0;
    *(undefined4 *)(param_1 + 0x578) = param_3;
  }
  return;
}


