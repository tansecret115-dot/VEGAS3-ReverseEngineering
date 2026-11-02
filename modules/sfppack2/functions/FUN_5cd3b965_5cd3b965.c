/* Module: sfppack2.dll
   Function: FUN_5cd3b965
   Address: 5cd3b965
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cd3b965(HMODULE param_1,int param_2)

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
    DAT_5cd753dc = 1;
    _DAT_5cd753e0 = 0x94;
    BVar1 = GetVersionExA((LPOSVERSIONINFOA)&DAT_5cd753e0);
    if (BVar1 != 0) {
      DAT_5cd753dc = DAT_5cd753f0;
    }
    DAT_5cd753d8 = param_1;
    uVar2 = 1;
  }
  FUN_5cd3b91b(uVar2);
  return 1;
}


