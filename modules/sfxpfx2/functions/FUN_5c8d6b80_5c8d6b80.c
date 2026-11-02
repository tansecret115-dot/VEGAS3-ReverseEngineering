/* Module: sfxpfx2.dll
   Function: FUN_5c8d6b80
   Address: 5c8d6b80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8d6b80(void)

{
  uint uVar1;
  DWORD local_4;
  
  local_4 = 0;
  if (DAT_5c8efc90 != 0) {
    return DAT_5c8efc8c;
  }
  FUN_5c8d6bf0(&local_4);
  uVar1 = FUN_5c8d5ed0(local_4,0);
  DAT_5c8efc8c = FUN_5c8d5f10(0,uVar1);
  DAT_5c8efc90 = 1;
  return DAT_5c8efc8c;
}


