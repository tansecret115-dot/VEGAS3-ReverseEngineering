/* Module: sfpublish.dll
   Function: FUN_00423b10
   Address: 00423b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00423b10(uint param_1)

{
  HCURSOR pHVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 0x7f00) {
    if (param_1 < 0x38) {
      if (*(int *)(&DAT_00441f58 + param_1 * 4) != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_00441c70,(LPCSTR)(param_1 & 0xffff));
      *(HCURSOR *)(&DAT_00441f58 + param_1 * 4) = pHVar1;
    }
    else {
      if ((param_1 < DAT_00441ee8) || (DAT_00441ee8 + 0x32 <= param_1)) goto LAB_00423bce;
      iVar3 = param_1 - DAT_00441ee8;
      if (*(int *)(&DAT_00442038 + iVar3 * 4) != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_00441edc,(LPCSTR)(param_1 & 0xffff));
      *(HCURSOR *)(&DAT_00442038 + iVar3 * 4) = pHVar1;
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
    if ((&DAT_00441f20)[uVar2] != 0) {
      return;
    }
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)(param_1 & 0xffff));
    (&DAT_00441f20)[uVar2] = pHVar1;
  }
  if (pHVar1 != (HCURSOR)0x0) {
    return;
  }
LAB_00423bce:
  LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  return;
}


