/* Module: vegas30.exe
   Function: FUN_005277b0
   Address: 005277b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005277b0(int param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x104)) {
  case 0:
    uVar1 = FUN_0050a0d0(*(undefined4 *)(param_1 + 0xfc));
    *(undefined4 *)(param_1 + 0x10c) = uVar1;
    return;
  case 1:
    uVar1 = FUN_0050a130(*(undefined4 *)(param_1 + 0xfc));
    *(undefined4 *)(param_1 + 0x10c) = uVar1;
    return;
  case 2:
    uVar1 = FUN_0050a170(*(undefined4 *)(param_1 + 0xfc));
    *(undefined4 *)(param_1 + 0x10c) = uVar1;
    return;
  case 3:
  case 4:
    uVar1 = FUN_0050a190(*(undefined4 *)(param_1 + 0xfc));
    *(undefined4 *)(param_1 + 0x10c) = uVar1;
    return;
  case 5:
    uVar1 = FUN_0050a1d0(*(undefined4 *)(param_1 + 0xfc));
    *(undefined4 *)(param_1 + 0x10c) = uVar1;
    return;
  case 6:
    uVar1 = FUN_0050a210(*(undefined4 *)(param_1 + 0xfc));
    *(undefined4 *)(param_1 + 0x10c) = uVar1;
    return;
  default:
    uVar1 = FUN_00508c40(*(undefined4 *)(param_1 + 0xfc));
    *(undefined4 *)(param_1 + 0x10c) = uVar1;
    return;
  }
}


