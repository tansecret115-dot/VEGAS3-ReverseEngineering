/* Module: vegas30.exe
   Function: FUN_00508580
   Address: 00508580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00508580(undefined4 *param_1)

{
  LPCSTR lpString;
  int iVar1;
  int iVar2;
  LPCSTR pCVar3;
  
  pCVar3 = (LPCSTR)*param_1;
  lpString = (LPCSTR)_SfGetString_8(DAT_00647204,0x6e99);
  iVar1 = lstrlenA(lpString);
  FUN_0060ac30();
  FUN_0060ac30();
  lstrcpynA(&stack0xffffffe4,pCVar3,iVar1 + 1);
  (&stack0xffffffe4)[iVar1] = 0;
  (&stack0xffffffe4)[iVar1] = 0;
  lstrcpynA(&stack0xffffffe4,lpString,iVar1 + 1);
  (&stack0xffffffe4)[iVar1] = 0;
  (&stack0xffffffe4)[iVar1] = 0;
  iVar2 = lstrcmpA(&stack0xffffffe4,&stack0xffffffe4);
  if (iVar2 == 0) {
    pCVar3 = pCVar3 + iVar1;
    *param_1 = pCVar3;
    iVar1 = _ismbcspace((int)*pCVar3);
    while (iVar1 != 0) {
      pCVar3 = CharNextA(pCVar3);
      iVar1 = _ismbcspace((int)*pCVar3);
    }
    *param_1 = pCVar3;
    return 1;
  }
  return 0;
}


