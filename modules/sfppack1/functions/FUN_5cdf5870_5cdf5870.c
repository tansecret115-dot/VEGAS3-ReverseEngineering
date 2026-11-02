/* Module: sfppack1.dll
   Function: FUN_5cdf5870
   Address: 5cdf5870
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdf5870(uint param_1)

{
  HCURSOR pHVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 0x7f00) {
    if (param_1 < 0x38) {
      if (*(int *)(&DAT_5ce24500 + param_1 * 4) != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_5ce23820,(LPCSTR)(param_1 & 0xffff));
      *(HCURSOR *)(&DAT_5ce24500 + param_1 * 4) = pHVar1;
    }
    else {
      if ((param_1 < DAT_5ce23a98) || (DAT_5ce23a98 + 0x32 <= param_1)) goto LAB_5cdf592e;
      iVar3 = param_1 - DAT_5ce23a98;
      if ((&DAT_5ce245e0)[iVar3] != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_5ce23a8c,(LPCSTR)(param_1 & 0xffff));
      (&DAT_5ce245e0)[iVar3] = pHVar1;
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
    if ((&DAT_5ce244c8)[uVar2] != 0) {
      return;
    }
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)(param_1 & 0xffff));
    (&DAT_5ce244c8)[uVar2] = pHVar1;
  }
  if (pHVar1 != (HCURSOR)0x0) {
    return;
  }
LAB_5cdf592e:
  LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  return;
}


