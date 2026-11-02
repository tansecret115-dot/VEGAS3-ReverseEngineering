/* Module: erv23260.dll
   Function: FUN_63809310
   Address: 63809310
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63809310(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x6f0);
  *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(param_1 + 0x6f8);
  *(undefined4 *)(param_1 + 0x6f8) = uVar1;
  return;
}


