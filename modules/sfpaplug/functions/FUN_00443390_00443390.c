/* Module: sfpaplug.dll
   Function: FUN_00443390
   Address: 00443390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00443390(uint param_1)

{
  HCURSOR pHVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 0x7f00) {
    if (param_1 < 0x38) {
      if (*(int *)(&DAT_004616c0 + param_1 * 4) != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_0045c378,(LPCSTR)(param_1 & 0xffff));
      *(HCURSOR *)(&DAT_004616c0 + param_1 * 4) = pHVar1;
    }
    else {
      if ((param_1 < DAT_0045c5f0) || (DAT_0045c5f0 + 0x32 <= param_1)) goto LAB_0044344e;
      iVar3 = param_1 - DAT_0045c5f0;
      if ((&DAT_004617a0)[iVar3] != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_0045c5e4,(LPCSTR)(param_1 & 0xffff));
      (&DAT_004617a0)[iVar3] = pHVar1;
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
    if ((&DAT_00461688)[uVar2] != 0) {
      return;
    }
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)(param_1 & 0xffff));
    (&DAT_00461688)[uVar2] = pHVar1;
  }
  if (pHVar1 != (HCURSOR)0x0) {
    return;
  }
LAB_0044344e:
  LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  return;
}


