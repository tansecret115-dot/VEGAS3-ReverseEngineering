/* Module: sftrkfx1.dll
   Function: FUN_5cbfed20
   Address: 5cbfed20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbfed20(void)

{
  uint uVar1;
  DWORD local_4;
  
  local_4 = 0;
  if (DAT_5cc17d98 != 0) {
    return DAT_5cc17d94;
  }
  FUN_5cbfed90(&local_4);
  uVar1 = FUN_5cbfe070(local_4,0);
  DAT_5cc17d94 = FUN_5cbfe0b0(0,uVar1);
  DAT_5cc17d98 = 1;
  return DAT_5cc17d94;
}


