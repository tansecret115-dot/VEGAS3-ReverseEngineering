/* Module: sftrans1.dll
   Function: FUN_00505b00
   Address: 00505b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00505b00(uint param_1)

{
  HCURSOR pHVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 0x7f00) {
    if (param_1 < 0x38) {
      if (*(int *)(&DAT_005fc4f0 + param_1 * 4) != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_0057b880,(LPCSTR)(param_1 & 0xffff));
      *(HCURSOR *)(&DAT_005fc4f0 + param_1 * 4) = pHVar1;
    }
    else {
      if ((param_1 < DAT_0057baf8) || (DAT_0057baf8 + 0x32 <= param_1)) goto LAB_00505bbe;
      iVar3 = param_1 - DAT_0057baf8;
      if ((&DAT_005fc5d0)[iVar3] != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_0057baec,(LPCSTR)(param_1 & 0xffff));
      (&DAT_005fc5d0)[iVar3] = pHVar1;
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
    if ((&DAT_005fc4b8)[uVar2] != 0) {
      return;
    }
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)(param_1 & 0xffff));
    (&DAT_005fc4b8)[uVar2] = pHVar1;
  }
  if (pHVar1 != (HCURSOR)0x0) {
    return;
  }
LAB_00505bbe:
  LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  return;
}


