/* Module: wmfplug2.dll
   Function: FUN_0044b740
   Address: 0044b740
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044b740(uint param_1)

{
  HCURSOR pHVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 0x7f00) {
    if (param_1 < 0x38) {
      if (*(int *)(&DAT_0048f180 + param_1 * 4) != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_00489e28,(LPCSTR)(param_1 & 0xffff));
      *(HCURSOR *)(&DAT_0048f180 + param_1 * 4) = pHVar1;
    }
    else {
      if ((param_1 < DAT_0048a0a0) || (DAT_0048a0a0 + 0x32 <= param_1)) goto LAB_0044b7fe;
      iVar3 = param_1 - DAT_0048a0a0;
      if ((&DAT_0048f260)[iVar3] != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_0048a094,(LPCSTR)(param_1 & 0xffff));
      (&DAT_0048f260)[iVar3] = pHVar1;
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
    if ((&DAT_0048f148)[uVar2] != 0) {
      return;
    }
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)(param_1 & 0xffff));
    (&DAT_0048f148)[uVar2] = pHVar1;
  }
  if (pHVar1 != (HCURSOR)0x0) {
    return;
  }
LAB_0044b7fe:
  LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  return;
}


