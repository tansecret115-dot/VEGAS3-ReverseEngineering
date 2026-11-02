/* Module: rv203260.dll
   Function: FUN_638a8d10
   Address: 638a8d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_638a8d10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_638b32d8;
  if (param_1 != (undefined4 *)0x0) {
    FUN_638a8170();
    FUN_638a5960(param_1);
    return;
  }
  FUN_638a8170();
  FUN_638a5960((undefined4 *)0x0);
  return;
}


