/* Module: encn3260.dll
   Function: FUN_664d1c90
   Address: 664d1c90
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_664d1c90(LPCSTR param_1,char param_2)

{
  int iVar1;
  LPCSTR pCVar2;
  
  if (param_1 != (LPCSTR)0x0) {
    iVar1 = FUN_664d1c40();
    if (iVar1 == 0) {
      return *param_1 == param_2;
    }
    pCVar2 = FUN_664d1c60(param_1);
    if (((pCVar2 == (LPCSTR)0x0) || ((int)pCVar2 - (int)param_1 == 1)) && (*param_1 == param_2)) {
      return true;
    }
  }
  return false;
}


