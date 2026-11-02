/* Module: erv23260.dll
   Function: FUN_638089b0
   Address: 638089b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_638089b0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x90);
  if (0x1e < uVar1) {
    *(undefined4 *)(param_1 + 0xa0) = 100;
    *(undefined4 *)(param_1 + 0x98) = 1;
    *(undefined4 *)(param_1 + 0x9c) = 1;
    *(undefined4 *)(param_1 + 0xa4) = 8;
    *(undefined4 *)(param_1 + 0xa8) = 0x10;
    return;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  if (uVar1 != 0) {
    *(uint *)(param_1 + 0xa0) = uVar1;
    *(undefined4 *)(param_1 + 0xa4) = 0x10;
    *(undefined4 *)(param_1 + 0xa8) = 0x10;
    return;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0x10;
  *(undefined4 *)(param_1 + 0xa8) = 0x10;
  return;
}


