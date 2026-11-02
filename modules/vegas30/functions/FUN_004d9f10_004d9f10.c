/* Module: vegas30.exe
   Function: FUN_004d9f10
   Address: 004d9f10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d9f10(int param_1,int param_2,uchar *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uchar *_Source;
  float10 fVar3;
  
  if (param_2 == 0) {
    fVar3 = (float10)*(float *)(param_1 + 0x48);
    if ((float10)_DAT_006106d0 == fVar3) {
      uVar1 = 0;
    }
    else {
LAB_004da0e6:
      if ((float10)_DAT_00610fd8 == fVar3) {
        uVar1 = 0xfffffda8;
      }
      else {
        log2(fVar3);
        uVar1 = ftol();
      }
    }
  }
  else {
    if (param_2 == 1) {
      fVar3 = (float10)*(float *)(param_1 + 0x4c);
      if (fVar3 <= (float10)_DAT_00610fd8) {
        if ((float10)_DAT_00610fd8 <= fVar3) goto LAB_004da06c;
        log2(((float10)_DAT_00610fe0 - fVar3) * (float10)_DAT_00610fe0);
      }
      else {
        log2((float10)_DAT_006106d0 - fVar3);
      }
      iVar2 = ftol();
      if (iVar2 == 0) {
LAB_004da06c:
        uVar1 = _SfGetString_8(DAT_00647204,0x43);
        SfPrintF(param_3,uVar1);
        lstrlenA((LPCSTR)param_3);
        return;
      }
      if (iVar2 < 1) {
        if (-1 < iVar2) goto LAB_004da147;
        iVar2 = -iVar2;
        uVar1 = 0x42;
      }
      else {
        uVar1 = 0x44;
      }
LAB_004da09a:
      uVar1 = _SfGetString_8(DAT_00647204,uVar1);
      SfPrintF(param_3,uVar1,iVar2);
      lstrlenA((LPCSTR)param_3);
      return;
    }
    if (param_2 == 2) {
      fVar3 = (float10)*(float *)(param_1 + 0x50);
      if (fVar3 <= (float10)_DAT_00610fd8) {
        if ((float10)_DAT_00610fd8 <= fVar3) goto LAB_004d9fb2;
        log2(((float10)_DAT_00610fe0 - fVar3) * (float10)_DAT_00610fe0);
      }
      else {
        log2((float10)_DAT_006106d0 - fVar3);
      }
      iVar2 = ftol();
      if (iVar2 == 0) {
LAB_004d9fb2:
        uVar1 = _SfGetString_8(DAT_00647204,0x43);
        SfPrintF(param_3,uVar1);
        lstrlenA((LPCSTR)param_3);
        return;
      }
      if (0 < iVar2) {
        uVar1 = _SfGetString_8(DAT_00647204,0x44);
        SfPrintF(param_3,uVar1,iVar2);
        lstrlenA((LPCSTR)param_3);
        return;
      }
      if (iVar2 < 0) {
        iVar2 = -iVar2;
        uVar1 = 0x42;
        goto LAB_004da09a;
      }
      goto LAB_004da147;
    }
    fVar3 = (float10)*(float *)(param_1 + 0x40 + param_2 * 8);
    if ((float10)_DAT_006106d0 != fVar3) goto LAB_004da0e6;
    uVar1 = 0;
  }
  _Source = (uchar *)_SfGetLabeledStringFixed_16(uVar1,1,0xfffffda8,&DAT_00612b14);
  _mbscpy(param_3,_Source);
LAB_004da147:
  lstrlenA((LPCSTR)param_3);
  return;
}


