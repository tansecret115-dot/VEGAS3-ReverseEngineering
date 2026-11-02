/* Module: vegas30.exe
   Function: FUN_004c4530
   Address: 004c4530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c4530(int param_1,int param_2,uchar *param_3)

{
  float fVar1;
  uchar *_Dest;
  int iVar2;
  undefined4 uVar3;
  uchar *_Source;
  float10 fVar4;
  long local_8 [2];
  
  _Dest = param_3;
  iVar2 = param_1;
  switch(param_2) {
  case 0:
    if (param_1 == 0) {
LAB_004c4861:
      uVar3 = 0xfffffda9;
    }
    else {
      fVar4 = (float10)*(float *)(param_1 + 0x48);
      if ((float10)_DAT_006106d0 == fVar4) {
        uVar3 = 0;
      }
      else {
        if ((float10)_DAT_00610fd8 != fVar4) {
          log2(fVar4);
          goto LAB_004c4898;
        }
        uVar3 = 0xfffffda8;
      }
    }
    break;
  case 1:
    if ((**(uint **)(*(int *)(param_1 + 0x69c) + 0x54) & 0x8000) == 0) {
      Mixer_GetOutputDeviceRange(*(ulong *)(param_1 + 0x3c),&param_1,&param_2);
      Mixer_GetOutputDeviceGain(*(ulong *)(iVar2 + 0x3c),local_8);
      ftol();
      SfPrintF(_Dest,&DAT_0061395c);
      lstrlenA((LPCSTR)_Dest);
      return;
    }
    _Source = "";
    goto LAB_004c48b0;
  case 2:
    if (param_1 != 0) {
      iVar2 = ftol();
      if (iVar2 == 0) {
        SfPrintF(_Dest);
        lstrlenA((LPCSTR)_Dest);
        return;
      }
      if (iVar2 < 1) {
        if (iVar2 < 0) {
          SfPrintF(_Dest,DAT_0063ea34);
          lstrlenA((LPCSTR)_Dest);
          return;
        }
        goto LAB_004c48ba;
      }
    }
    SfPrintF(_Dest,DAT_0063ea30);
    lstrlenA((LPCSTR)_Dest);
    return;
  case 3:
    iVar2 = ftol();
    if (iVar2 == 0) {
      SfPrintF(_Dest);
      lstrlenA((LPCSTR)_Dest);
      return;
    }
    if (0 < iVar2) {
      SfPrintF(_Dest,DAT_0063ea38);
      lstrlenA((LPCSTR)_Dest);
      return;
    }
    if (iVar2 < 0) {
      SfPrintF(_Dest,DAT_0063ea3c);
      lstrlenA((LPCSTR)_Dest);
      return;
    }
    goto LAB_004c48ba;
  case 4:
    fVar4 = (float10)*(float *)(param_1 + 0x54);
    if ((float10)_DAT_006106d0 == fVar4) {
      uVar3 = 0;
    }
    else {
LAB_004c4755:
      if ((float10)_DAT_00610fd8 == fVar4) {
        uVar3 = 0xfffffda8;
      }
      else {
LAB_004c4871:
        log2(fVar4);
LAB_004c4898:
        uVar3 = ftol();
      }
    }
    break;
  case 5:
    fVar4 = (float10)*(float *)(param_1 + 0x58);
    if ((float10)_DAT_006106d0 != fVar4) goto LAB_004c4755;
    uVar3 = 0;
    break;
  default:
    if ((param_2 < 0x200) || (0x2ff < param_2)) {
      if ((param_2 < 0x100) || (0x1ff < param_2)) goto LAB_004c48ba;
      if (param_1 == 0) goto LAB_004c4861;
      fVar1 = *(float *)(param_1 + -0x6a0 + param_2 * 8);
    }
    else {
      fVar1 = *(float *)(param_1 + -4000 + param_2 * 8);
    }
    fVar4 = (float10)fVar1;
    if ((float10)_DAT_006106d0 == fVar4) {
      uVar3 = 0;
    }
    else {
      if ((float10)_DAT_00610fd8 != fVar4) goto LAB_004c4871;
      uVar3 = 0xfffffda8;
    }
    break;
  case 0x80:
    fVar1 = _DAT_00612ab8;
    if (param_1 != 0) {
      fVar1 = *(float *)(param_1 + 0x140) * _DAT_00612ab8;
    }
    SfPrintF(param_3,"%0.1f %%",(double)fVar1);
    lstrlenA((LPCSTR)_Dest);
    return;
  case 0x81:
    SfPrintF(param_3,"%0.1f %%",(double)(*(float *)(param_1 + 0x158) * _DAT_00612ab8));
    lstrlenA((LPCSTR)_Dest);
    return;
  }
  _Source = (uchar *)_SfGetLabeledStringFixed_16(uVar3,1,0xfffffda8,&DAT_00612b14);
LAB_004c48b0:
  _mbscpy(_Dest,_Source);
LAB_004c48ba:
  lstrlenA((LPCSTR)_Dest);
  return;
}


