/* Module: pncrt.dll
   Function: thunk_FUN_7801e440
   Address: 78024c80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint thunk_FUN_7801e440(void)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_78040938 != 0xffffffff) {
    uVar1 = DAT_78040938 & 0xff;
    DAT_78040938 = 0xffffffff;
    return uVar1;
  }
  uVar1 = FUN_7801e330();
  if (uVar1 != 0xffffffff) {
    uVar2 = FUN_7801f090(uVar1);
    if (uVar2 != 0xffffffff) {
      return uVar1;
    }
  }
  return 0xffffffff;
}


