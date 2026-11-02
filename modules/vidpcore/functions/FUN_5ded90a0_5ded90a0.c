/* Module: vidpcore.dll
   Function: FUN_5ded90a0
   Address: 5ded90a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ded90a0(uint param_1)

{
  HCURSOR pHVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 0x7f00) {
    if (param_1 < 0x38) {
      if (*(int *)(&DAT_5dfc3b80 + param_1 * 4) != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_5df42ed0,(LPCSTR)(param_1 & 0xffff));
      *(HCURSOR *)(&DAT_5dfc3b80 + param_1 * 4) = pHVar1;
    }
    else {
      if ((param_1 < DAT_5df43148) || (DAT_5df43148 + 0x32 <= param_1)) goto LAB_5ded915e;
      iVar3 = param_1 - DAT_5df43148;
      if ((&DAT_5dfc3c60)[iVar3] != 0) {
        return;
      }
      pHVar1 = LoadCursorA(DAT_5df4313c,(LPCSTR)(param_1 & 0xffff));
      (&DAT_5dfc3c60)[iVar3] = pHVar1;
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
    if ((&DAT_5dfc3b48)[uVar2] != 0) {
      return;
    }
    pHVar1 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)(param_1 & 0xffff));
    (&DAT_5dfc3b48)[uVar2] = pHVar1;
  }
  if (pHVar1 != (HCURSOR)0x0) {
    return;
  }
LAB_5ded915e:
  LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  return;
}


