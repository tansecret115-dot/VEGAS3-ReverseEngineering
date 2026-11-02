/* Module: wavplug.dll
   Function: FUN_5f39e190
   Address: 5f39e190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f39e190(uint param_1)

{
  HCURSOR pHVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 0x7f00) {
    if (param_1 < 0x38) {
      if (*(int *)(&DAT_5f3db668 + param_1 * 4) != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_5f3db378,(LPCSTR)(param_1 & 0xffff));
      *(HCURSOR *)(&DAT_5f3db668 + param_1 * 4) = pHVar1;
    }
    else {
      if ((param_1 < DAT_5f3db5f0) || (DAT_5f3db5f0 + 0x32 <= param_1)) goto LAB_5f39e24e;
      iVar3 = param_1 - DAT_5f3db5f0;
      if ((&DAT_5f3db748)[iVar3] != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_5f3db5e4,(LPCSTR)(param_1 & 0xffff));
      (&DAT_5f3db748)[iVar3] = pHVar1;
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
    if ((&DAT_5f3db630)[uVar2] != 0) {
      return;
    }
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)(param_1 & 0xffff));
    (&DAT_5f3db630)[uVar2] = pHVar1;
  }
  if (pHVar1 != (HCURSOR)0x0) {
    return;
  }
LAB_5f39e24e:
  LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  return;
}


