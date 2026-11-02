/* Module: vidcap30.exe
   Function: FUN_00517620
   Address: 00517620
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00517620(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    return 1;
  case 1:
    return (uint)(*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 200));
  case 2:
    return (uint)(*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xd0));
  case 3:
    return (uint)(*(int *)(param_1 + 0xac) != *(int *)(param_1 + 0xcc));
  case 4:
    return (uint)(*(int *)(param_1 + 0xb4) != *(int *)(param_1 + 0xd4));
  case 5:
    return (uint)(*(int *)(param_1 + 0x48) != *(int *)(param_1 + 200));
  case 6:
    return (uint)(*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0xd0));
  case 7:
    return (uint)(*(int *)(param_1 + 0x4c) != *(int *)(param_1 + 0xcc));
  case 8:
    return (uint)(*(int *)(param_1 + 0x54) != *(int *)(param_1 + 0xd4));
  case 9:
    return *(uint *)(param_1 + 0x98) & 1;
  case 10:
    return *(uint *)(param_1 + 0x98) & 4;
  default:
    return *(uint *)(param_1 + 0x98) & 0x40;
  case 0xc:
    return *(uint *)(param_1 + 0x98) & 0x10;
  }
}


