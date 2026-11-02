/* Module: sfppack3.dll
   Function: FUN_5cc72475
   Address: 5cc72475
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cc72475(HMODULE param_1,int param_2)

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
    DAT_5cc9da9c = 1;
    _DAT_5cc9daa0 = 0x94;
    BVar1 = GetVersionExA((LPOSVERSIONINFOA)&DAT_5cc9daa0);
    if (BVar1 != 0) {
      DAT_5cc9da9c = DAT_5cc9dab0;
    }
    DAT_5cc9da98 = param_1;
    uVar2 = 1;
  }
  FUN_5cc7242b(uVar2);
  return 1;
}


