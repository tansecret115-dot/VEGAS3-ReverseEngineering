/* Module: erv33260.dll
   Function: FUN_67077bb0
   Address: 67077bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_67077bb0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x7c);
  if (0x1e < uVar1) {
    *(undefined4 *)(param_1 + 0x8c) = 100;
    *(undefined4 *)(param_1 + 0x84) = 1;
    *(undefined4 *)(param_1 + 0x88) = 1;
    *(undefined4 *)(param_1 + 0x90) = 8;
    *(undefined4 *)(param_1 + 0x94) = 0x10;
    return;
  }
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (uVar1 != 0) {
    *(uint *)(param_1 + 0x8c) = uVar1;
    *(undefined4 *)(param_1 + 0x90) = 0x10;
    *(undefined4 *)(param_1 + 0x94) = 0x10;
    return;
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x10;
  *(undefined4 *)(param_1 + 0x94) = 0x10;
  return;
}


