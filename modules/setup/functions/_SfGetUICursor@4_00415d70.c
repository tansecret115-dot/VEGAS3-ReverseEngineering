/* Module: Setup.exe
   Function: _SfGetUICursor@4
   Address: 00415d70
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfGetUICursor_4(uint param_1)

{
  HCURSOR pHVar1;
  uint uVar2;
  int iVar3;
  
                    /* 0x15d70  181  _SfGetUICursor@4 */
  if (param_1 < 0x7f00) {
    if (param_1 < 0x38) {
      if (*(int *)(&DAT_00449898 + param_1 * 4) != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_00448df8,(LPCSTR)(param_1 & 0xffff));
      *(HCURSOR *)(&DAT_00449898 + param_1 * 4) = pHVar1;
    }
    else {
      if ((param_1 < DAT_00449070) || (DAT_00449070 + 0x32 <= param_1)) goto LAB_00415e2e;
      iVar3 = param_1 - DAT_00449070;
      if ((&DAT_00449978)[iVar3] != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_00449064,(LPCSTR)(param_1 & 0xffff));
      (&DAT_00449978)[iVar3] = pHVar1;
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
    if ((&DAT_00449860)[uVar2] != 0) {
      return;
    }
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)(param_1 & 0xffff));
    (&DAT_00449860)[uVar2] = pHVar1;
  }
  if (pHVar1 != (HCURSOR)0x0) {
    return;
  }
LAB_00415e2e:
  LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  return;
}


