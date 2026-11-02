/* Module: sfcdi.dll
   Function: FUN_5bf37b40
   Address: 5bf37b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf37b40(uint param_1)

{
  HCURSOR pHVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 0x7f00) {
    if (param_1 < 0x38) {
      if (*(int *)(&DAT_5bf76ce0 + param_1 * 4) != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_5bf76070,(LPCSTR)(param_1 & 0xffff));
      *(HCURSOR *)(&DAT_5bf76ce0 + param_1 * 4) = pHVar1;
    }
    else {
      if ((param_1 < DAT_5bf762e8) || (DAT_5bf762e8 + 0x32 <= param_1)) goto LAB_5bf37bfe;
      iVar3 = param_1 - DAT_5bf762e8;
      if (*(int *)(&DAT_5bf76dc0 + iVar3 * 4) != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_5bf762dc,(LPCSTR)(param_1 & 0xffff));
      *(HCURSOR *)(&DAT_5bf76dc0 + iVar3 * 4) = pHVar1;
    }
  }
  else {
    uVar2 = param_1 - 0x7f00;
    if ((0x7f81 < param_1) && (param_1 < 0x7f8c)) {
      uVar2 = param_1 - 0x7f7d;
    }
    if (0xe < uVar2) {
      param_1 = 0x7f00;
      uVar2 = 0;
    }
    if ((&DAT_5bf76ca8)[uVar2] != 0) {
      return;
    }
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)(param_1 & 0xffff));
    (&DAT_5bf76ca8)[uVar2] = pHVar1;
  }
  if (pHVar1 != (HCURSOR)0x0) {
    return;
  }
LAB_5bf37bfe:
  LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  return;
}


