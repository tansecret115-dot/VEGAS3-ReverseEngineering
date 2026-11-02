/* Module: mp3plug.dll
   Function: FUN_5f727260
   Address: 5f727260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f727260(void)

{
  uint uVar1;
  DWORD local_4;
  
  local_4 = 0;
  if (DAT_5f75bbac != 0) {
    return DAT_5f75bba8;
  }
  FUN_5f7272d0(&local_4);
  uVar1 = FUN_5f7265b0(local_4,0);
  DAT_5f75bba8 = FUN_5f7265f0(0,uVar1);
  DAT_5f75bbac = 1;
  return DAT_5f75bba8;
}


