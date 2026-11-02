/* Module: sfppack1.dll
   Function: FUN_5cdfcae5
   Address: 5cdfcae5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cdfcae5(HMODULE param_1,int param_2)

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
    DAT_5ce28fc4 = 1;
    _DAT_5ce28fc8 = 0x94;
    BVar1 = GetVersionExA((LPOSVERSIONINFOA)&DAT_5ce28fc8);
    if (BVar1 != 0) {
      DAT_5ce28fc4 = DAT_5ce28fd8;
    }
    DAT_5ce28fc0 = param_1;
    uVar2 = 1;
  }
  FUN_5cdfca9b(uVar2);
  return 1;
}


