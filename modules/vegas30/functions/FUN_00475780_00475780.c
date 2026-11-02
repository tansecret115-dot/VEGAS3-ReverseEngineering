/* Module: vegas30.exe
   Function: FUN_00475780
   Address: 00475780
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00475780(LPCSTR param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uchar *_Source;
  int iVar5;
  int iVar6;
  bool bVar7;
  float10 fVar8;
  
  iVar6 = 0;
  iVar5 = 0;
  bVar7 = false;
  bVar1 = false;
  switch(param_4) {
  case 1:
  case 2:
    uVar2 = 99;
    iVar6 = *(int *)(param_3 + 0x78);
    iVar5 = *(int *)(param_3 + 0x7c);
    break;
  case 3:
  case 9:
    uVar2 = 99;
    iVar6 = *(uint *)(param_3 + 0x20) - *(uint *)(param_3 + 0x80);
    iVar5 = (*(int *)(param_3 + 0x24) - *(int *)(param_3 + 0x84)) -
            (uint)(*(uint *)(param_3 + 0x20) < *(uint *)(param_3 + 0x80));
    break;
  case 4:
    if (*(int *)(param_3 + 4) == 3) {
      iVar6 = *(int *)(param_3 + 0x78);
      iVar5 = *(int *)(param_3 + 0x7c);
      uVar2 = 0x65;
      bVar1 = true;
    }
    else {
      iVar6 = *(int *)(param_3 + 0x78);
      iVar5 = *(int *)(param_3 + 0x7c);
      uVar2 = 0x62;
      bVar7 = true;
    }
    break;
  case 5:
    bVar7 = *(int *)(param_3 + 4) != 3;
    if (bVar7) {
      uVar2 = 0x62;
    }
    else {
      uVar2 = 0x65;
    }
    bVar1 = !bVar7;
    iVar6 = *(uint *)(param_3 + 0x20) - *(uint *)(param_3 + 0x80);
    iVar5 = (*(int *)(param_3 + 0x24) - *(int *)(param_3 + 0x84)) -
            (uint)(*(uint *)(param_3 + 0x20) < *(uint *)(param_3 + 0x80));
    break;
  default:
    return 0;
  case 8:
    if (*(int *)(param_3 + 4) == 3) {
      uVar2 = 100;
      bVar1 = true;
    }
    else {
      uVar2 = 0x61;
      bVar7 = true;
    }
  }
  iVar3 = _SfLoadString_16(DAT_00647204,uVar2,param_1,param_2);
  if (param_4 != 8) {
    param_1[iVar3] = ' ';
    iVar6 = _SfNanoTimeToText_20(param_1 + iVar3 + 1,DAT_00647630 + 0x20,iVar6,iVar5,0);
    iVar3 = iVar3 + 1 + iVar6;
  }
  if (!bVar7) goto LAB_004758f7;
  param_1[iVar3] = ' ';
  iVar3 = iVar3 + 1;
  fVar8 = (float10)*(float *)(param_3 + 0x60);
  if ((float10)_DAT_006106d0 == fVar8) {
    iVar6 = 0;
LAB_004758dc:
    uVar2 = _SfGetString_8(DAT_00647204,0x3e);
    SfPrintF(param_1 + iVar3,uVar2,iVar6);
  }
  else {
    if ((float10)_DAT_00610fd8 != fVar8) {
      log2(fVar8);
      iVar6 = ftol();
      if (-600 < iVar6) goto LAB_004758dc;
    }
    _Source = (uchar *)_SfGetString_8(DAT_00647204,0x3d);
    _mbscpy((uchar *)(param_1 + iVar3),_Source);
  }
LAB_004758f7:
  if (bVar1) {
    param_1[iVar3] = ' ';
    uVar2 = ftol();
    uVar4 = _SfGetString_8(DAT_00647204,0x52);
    SfPrintF(param_1 + iVar3 + 1,uVar4,uVar2);
  }
  iVar6 = lstrlenA(param_1);
  return iVar6;
}


