/* Module: g2plug.dll
   Function: FUN_5f83fd80
   Address: 5f83fd80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f83fd80(uint param_1)

{
  HCURSOR pHVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 0x7f00) {
    if (param_1 < 0x38) {
      if (*(int *)(&DAT_5f877f60 + param_1 * 4) != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_5f877518,(LPCSTR)(param_1 & 0xffff));
      *(HCURSOR *)(&DAT_5f877f60 + param_1 * 4) = pHVar1;
    }
    else {
      if ((param_1 < DAT_5f877790) || (DAT_5f877790 + 0x32 <= param_1)) goto LAB_5f83fe3e;
      iVar3 = param_1 - DAT_5f877790;
      if ((&DAT_5f878040)[iVar3] != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_5f877784,(LPCSTR)(param_1 & 0xffff));
      (&DAT_5f878040)[iVar3] = pHVar1;
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
    if ((&DAT_5f877f28)[uVar2] != 0) {
      return;
    }
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)(param_1 & 0xffff));
    (&DAT_5f877f28)[uVar2] = pHVar1;
  }
  if (pHVar1 != (HCURSOR)0x0) {
    return;
  }
LAB_5f83fe3e:
  LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  return;
}


