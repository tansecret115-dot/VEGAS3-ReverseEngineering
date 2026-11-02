/* Module: mcplugrw.dll
   Function: FUN_0042f940
   Address: 0042f940
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042f940(uint param_1)

{
  HCURSOR pHVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 0x7f00) {
    if (param_1 < 0x38) {
      if (*(int *)(&DAT_004aa310 + param_1 * 4) != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_004a98f0,(LPCSTR)(param_1 & 0xffff));
      *(HCURSOR *)(&DAT_004aa310 + param_1 * 4) = pHVar1;
    }
    else {
      if ((param_1 < DAT_004a9b68) || (DAT_004a9b68 + 0x32 <= param_1)) goto LAB_0042f9fe;
      iVar3 = param_1 - DAT_004a9b68;
      if ((&DAT_004aa3f0)[iVar3] != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_004a9b5c,(LPCSTR)(param_1 & 0xffff));
      (&DAT_004aa3f0)[iVar3] = pHVar1;
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
    if ((&DAT_004aa2d8)[uVar2] != 0) {
      return;
    }
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)(param_1 & 0xffff));
    (&DAT_004aa2d8)[uVar2] = pHVar1;
  }
  if (pHVar1 != (HCURSOR)0x0) {
    return;
  }
LAB_0042f9fe:
  LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  return;
}


