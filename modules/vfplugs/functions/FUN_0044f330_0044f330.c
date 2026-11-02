/* Module: vfplugs.dll
   Function: FUN_0044f330
   Address: 0044f330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044f330(uint param_1)

{
  HCURSOR pHVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 0x7f00) {
    if (param_1 < 0x38) {
      if (*(int *)(&DAT_00535718 + param_1 * 4) != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_00494a70,(LPCSTR)(param_1 & 0xffff));
      *(HCURSOR *)(&DAT_00535718 + param_1 * 4) = pHVar1;
    }
    else {
      if ((param_1 < DAT_00494ce8) || (DAT_00494ce8 + 0x32 <= param_1)) goto LAB_0044f3ee;
      iVar3 = param_1 - DAT_00494ce8;
      if ((&DAT_005357f8)[iVar3] != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_00494cdc,(LPCSTR)(param_1 & 0xffff));
      (&DAT_005357f8)[iVar3] = pHVar1;
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
    if ((&DAT_005356e0)[uVar2] != 0) {
      return;
    }
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)(param_1 & 0xffff));
    (&DAT_005356e0)[uVar2] = pHVar1;
  }
  if (pHVar1 != (HCURSOR)0x0) {
    return;
  }
LAB_0044f3ee:
  LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  return;
}


