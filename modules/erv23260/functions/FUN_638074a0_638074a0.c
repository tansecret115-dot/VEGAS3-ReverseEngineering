/* Module: erv23260.dll
   Function: FUN_638074a0
   Address: 638074a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_638074a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 1:
    *(undefined4 *)(param_1 + 0x8cc) = 5;
    return uVar1;
  case 2:
    *(undefined4 *)(param_1 + 0x8cc) = 4;
    return uVar1;
  case 3:
    *(undefined4 *)(param_1 + 0x8cc) = 3;
    return uVar1;
  default:
    return 8;
  case 7:
    *(undefined4 *)(param_1 + 0x8cc) = 2;
    return uVar1;
  case 8:
    *(undefined4 *)(param_1 + 0x8cc) = 1;
    return uVar1;
  case 10:
    *(undefined4 *)(param_1 + 0x8cc) = 6;
    return uVar1;
  case 0xb:
  case 0xc:
    *(undefined4 *)(param_1 + 0x8cc) = 8;
    return uVar1;
  case 0xe:
    *(undefined4 *)(param_1 + 0x8cc) = 7;
    return uVar1;
  }
}


