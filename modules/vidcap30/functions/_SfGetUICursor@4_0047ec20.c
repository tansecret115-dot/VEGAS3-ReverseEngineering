/* Module: vidcap30.exe
   Function: _SfGetUICursor@4
   Address: 0047ec20
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfGetUICursor_4(uint param_1)

{
  HCURSOR pHVar1;
  uint uVar2;
  int iVar3;
  
                    /* 0x7ec20  439  _SfGetUICursor@4 */
  if (param_1 < 0x7f00) {
    if (param_1 < 0x38) {
      if (*(int *)(&DAT_005c14d8 + param_1 * 4) != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_005c16d0,(LPCSTR)(param_1 & 0xffff));
      *(HCURSOR *)(&DAT_005c14d8 + param_1 * 4) = pHVar1;
    }
    else {
      if ((param_1 < DAT_005c1948) || (DAT_005c1948 + 0x32 <= param_1)) goto LAB_0047ecde;
      iVar3 = param_1 - DAT_005c1948;
      if ((&DAT_005c15b8)[iVar3] != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_005c193c,(LPCSTR)(param_1 & 0xffff));
      (&DAT_005c15b8)[iVar3] = pHVar1;
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
    if ((&DAT_005c14a0)[uVar2] != 0) {
      return;
    }
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)(param_1 & 0xffff));
    (&DAT_005c14a0)[uVar2] = pHVar1;
  }
  if (pHVar1 != (HCURSOR)0x0) {
    return;
  }
LAB_0047ecde:
  LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  return;
}


