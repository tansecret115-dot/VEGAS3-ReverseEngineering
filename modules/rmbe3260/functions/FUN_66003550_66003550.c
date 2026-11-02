/* Module: rmbe3260.dll
   Function: FUN_66003550
   Address: 66003550
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66003550(int param_1)

{
  int local_10 [3];
  
  FUN_6605b650(local_10);
  FUN_6605bfd0(local_10,&DAT_6606c1c0);
  (**(code **)(**(int **)(param_1 + 0x152) + 0x11c))();
  FUN_6605b770(local_10);
  return;
}


