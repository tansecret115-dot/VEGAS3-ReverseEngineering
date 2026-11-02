/* Module: erv33260.dll
   Function: FUN_67078f00
   Address: 67078f00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_67078f00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(param_1 + 0x1e4) = uVar1;
  return;
}


