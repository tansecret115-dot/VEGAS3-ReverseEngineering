/* Module: vegas30k.dll
   Function: _SfGetUICursor@4
   Address: 010c3140
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfGetUICursor_4(uint param_1)

{
  HCURSOR pHVar1;
  uint uVar2;
  int iVar3;
  
                    /* 0xc3140  991  _SfGetUICursor@4 */
  if (param_1 < 0x7f00) {
    if (param_1 < 0x38) {
      if (*(int *)(&DAT_0128e988 + param_1 * 4) != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_0120e5c0,(LPCSTR)(param_1 & 0xffff));
      *(HCURSOR *)(&DAT_0128e988 + param_1 * 4) = pHVar1;
    }
    else {
      if ((param_1 < DAT_0120e838) || (DAT_0120e838 + 0x32 <= param_1)) goto LAB_010c31fe;
      iVar3 = param_1 - DAT_0120e838;
      if ((&DAT_0128ea68)[iVar3] != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_0120e82c,(LPCSTR)(param_1 & 0xffff));
      (&DAT_0128ea68)[iVar3] = pHVar1;
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
    if ((&DAT_0128e950)[uVar2] != 0) {
      return;
    }
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)(param_1 & 0xffff));
    (&DAT_0128e950)[uVar2] = pHVar1;
  }
  if (pHVar1 != (HCURSOR)0x0) {
    return;
  }
LAB_010c31fe:
  LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  return;
}


