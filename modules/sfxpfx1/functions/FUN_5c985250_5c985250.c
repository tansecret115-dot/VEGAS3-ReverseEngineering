/* Module: sfxpfx1.dll
   Function: FUN_5c985250
   Address: 5c985250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c985250(void)

{
  uint uVar1;
  DWORD local_4;
  
  local_4 = 0;
  if (DAT_5c99f038 != 0) {
    return DAT_5c99f034;
  }
  FUN_5c9852c0(&local_4);
  uVar1 = FUN_5c9845a0(local_4,0);
  DAT_5c99f034 = FUN_5c9845e0(0,uVar1);
  DAT_5c99f038 = 1;
  return DAT_5c99f034;
}


