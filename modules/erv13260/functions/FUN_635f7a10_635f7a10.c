/* Module: erv13260.dll
   Function: FUN_635f7a10
   Address: 635f7a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_635f7a10(int param_1,char *param_2)

{
  switch(*param_2) {
  case '\x02':
    *param_2 = (-(param_1 != 0) & 2U) + 1;
    return 1;
  default:
    return 0;
  case '\x04':
    *param_2 = (-(param_1 != 0) & 4U) + 2;
    return 1;
  case '\x06':
    *param_2 = (-(param_1 != 0) & 2U) + 5;
    return 1;
  case '\b':
    *param_2 = (-(param_1 != 0) & 8U) + 4;
    return 1;
  case '\n':
    *param_2 = (-(param_1 != 0) & 2U) + 9;
    return 1;
  case '\f':
    *param_2 = (-(param_1 != 0) & 4U) + 10;
    return 1;
  case '\x0e':
    *param_2 = (-(param_1 != 0) & 2U) + 0xd;
    return 1;
  case '\x10':
    *param_2 = (-(param_1 != 0) & 0x10U) + 8;
    return 1;
  case '\x12':
    *param_2 = (-(param_1 != 0) & 2U) + 0x11;
    return 1;
  case '\x14':
    *param_2 = (-(param_1 != 0) & 4U) + 0x12;
    return 1;
  case '\x16':
    *param_2 = (-(param_1 != 0) & 2U) + 0x15;
    return 1;
  case '\x18':
    *param_2 = (-(param_1 != 0) & 8U) + 0x14;
    return 1;
  case '\x1a':
    *param_2 = (-(param_1 != 0) & 2U) + 0x19;
    return 1;
  case '\x1c':
    *param_2 = (-(param_1 != 0) & 4U) + 0x1a;
    return 1;
  case '\x1e':
    *param_2 = (-(param_1 != 0) & 2U) + 0x1d;
    return 1;
  }
}


