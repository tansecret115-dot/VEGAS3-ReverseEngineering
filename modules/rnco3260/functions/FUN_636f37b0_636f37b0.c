/* Module: rnco3260.dll
   Function: FUN_636f37b0
   Address: 636f37b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_636f37b0(undefined4 param_1,int param_2)

{
  switch(param_1) {
  case 0:
    return (-(uint)(param_2 != 0) & 6) + 0x10;
  case 1:
    return (-(uint)(param_2 != 0) & 5) + 0x11;
  case 2:
    return (-(uint)(param_2 != 0) & 4) + 0x12;
  case 3:
    return (param_2 != 0) + 0x13;
  case 4:
    return (param_2 != 0) + 0x15;
  case 5:
    return (-(uint)(param_2 != 0) & 0xfffffffc) + 5;
  case 6:
    return (-(uint)(param_2 != 0) & 0xfffffffc) + 4;
  default:
    return 0x16;
  case 8:
    return (-(uint)(param_2 != 0) & 0xfffffffc) + 6;
  case 9:
    return (-(uint)(param_2 != 0) & 0xfffffffc) + 7;
  }
}


