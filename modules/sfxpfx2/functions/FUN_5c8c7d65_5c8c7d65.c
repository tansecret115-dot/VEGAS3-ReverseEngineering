/* Module: sfxpfx2.dll
   Function: FUN_5c8c7d65
   Address: 5c8c7d65
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5c8c7d65(HMODULE param_1,int param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_2 != 1) {
      return 1;
    }
    DisableThreadLibraryCalls(param_1);
    DAT_5c8eeb94 = 1;
    _DAT_5c8eeb98 = 0x94;
    BVar1 = GetVersionExA((LPOSVERSIONINFOA)&DAT_5c8eeb98);
    if (BVar1 != 0) {
      DAT_5c8eeb94 = DAT_5c8eeba8;
    }
    DAT_5c8eeb90 = param_1;
    uVar2 = 1;
  }
  FUN_5c8c7d1b(uVar2);
  return 1;
}


