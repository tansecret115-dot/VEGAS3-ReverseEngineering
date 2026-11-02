/* Module: sfxpfx1.dll
   Function: FUN_5c976435
   Address: 5c976435
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5c976435(HMODULE param_1,int param_2)

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
    DAT_5c99df3c = 1;
    _DAT_5c99df40 = 0x94;
    BVar1 = GetVersionExA((LPOSVERSIONINFOA)&DAT_5c99df40);
    if (BVar1 != 0) {
      DAT_5c99df3c = DAT_5c99df50;
    }
    DAT_5c99df38 = param_1;
    uVar2 = 1;
  }
  FUN_5c9763eb(uVar2);
  return 1;
}


