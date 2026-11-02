/* Module: rmbe3260.dll
   Function: FUN_6604ad40
   Address: 6604ad40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6604ad40(int param_1)

{
  if (*(int *)(param_1 + 0x214) != 0) {
    FUN_6604b100(param_1);
  }
  if (*(int *)(param_1 + 0x210) != 0) {
    FUN_6604b140(param_1);
  }
  if (*(void **)(param_1 + 0x221) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x221));
  }
  return;
}


