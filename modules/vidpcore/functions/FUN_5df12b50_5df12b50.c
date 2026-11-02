/* Module: vidpcore.dll
   Function: FUN_5df12b50
   Address: 5df12b50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5df12b50(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_5df12b40();
    *(undefined4 *)(param_1 + 0x10) = uVar1;
  }
  uVar1 = FUN_5df12ac0();
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}


