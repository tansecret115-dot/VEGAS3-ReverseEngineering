/* Module: vegas30k.dll
   Function: FUN_01136300
   Address: 01136300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01136300(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_01163ac0();
  _SfQueueInsert_8(param_1 + 0x24,*(undefined4 *)(iVar1 + 8));
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + -1;
  return 0;
}


