/* Module: sfppack3.dll
   Function: FUN_5cc6b200
   Address: 5cc6b200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc6b200(uint param_1)

{
  HCURSOR pHVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 0x7f00) {
    if (param_1 < 0x38) {
      if (*(int *)(&DAT_5cc98fd8 + param_1 * 4) != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_5cc982f8,(LPCSTR)(param_1 & 0xffff));
      *(HCURSOR *)(&DAT_5cc98fd8 + param_1 * 4) = pHVar1;
    }
    else {
      if ((param_1 < DAT_5cc98570) || (DAT_5cc98570 + 0x32 <= param_1)) goto LAB_5cc6b2be;
      iVar3 = param_1 - DAT_5cc98570;
      if ((&DAT_5cc990b8)[iVar3] != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_5cc98564,(LPCSTR)(param_1 & 0xffff));
      (&DAT_5cc990b8)[iVar3] = pHVar1;
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
    if ((&DAT_5cc98fa0)[uVar2] != 0) {
      return;
    }
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)(param_1 & 0xffff));
    (&DAT_5cc98fa0)[uVar2] = pHVar1;
  }
  if (pHVar1 != (HCURSOR)0x0) {
    return;
  }
LAB_5cc6b2be:
  LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  return;
}


