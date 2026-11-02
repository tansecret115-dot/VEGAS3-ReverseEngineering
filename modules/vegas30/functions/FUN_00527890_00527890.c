/* Module: vegas30.exe
   Function: FUN_00527890
   Address: 00527890
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00527890(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x104)) {
  case 0:
    FUN_0050a0f0(*(undefined4 *)(param_1 + 0xfc));
    return;
  case 1:
    FUN_0050a130(*(undefined4 *)(param_1 + 0xfc));
    return;
  case 2:
    FUN_0050a170(*(undefined4 *)(param_1 + 0xfc));
    return;
  case 3:
  case 4:
    FUN_0050a190(*(undefined4 *)(param_1 + 0xfc));
    return;
  case 5:
    FUN_0050a1d0(*(undefined4 *)(param_1 + 0xfc));
    return;
  case 6:
    FUN_0050a210(*(undefined4 *)(param_1 + 0xfc));
    return;
  default:
    FUN_00508c40(*(undefined4 *)(param_1 + 0xfc));
    return;
  }
}


