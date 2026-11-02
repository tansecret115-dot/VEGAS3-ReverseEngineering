/* Module: vegas30.exe
   Function: FUN_005a0d90
   Address: 005a0d90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005a0d90(undefined4 param_1,int param_2,undefined4 param_3,int param_4,
                tagBITMAPINFOHEADER *param_5,WORD *param_6,undefined4 param_7,undefined4 param_8,
                int param_9,undefined4 param_10,int param_11)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  WORD *pWVar6;
  int *piVar7;
  int *piVar8;
  int local_470;
  int local_46c;
  int local_468;
  int local_464;
  int *local_460;
  int *local_45c;
  undefined4 local_458;
  undefined4 local_454;
  float local_450;
  float local_44c;
  float local_448;
  undefined4 local_444;
  float fStack_440;
  float fStack_43c;
  float afStack_438 [4];
  int aiStack_428 [266];
  
  local_470 = -0x7fffbffb;
  if (*(int *)(param_2 + 8) == 0) {
    FUN_005ba4b0(param_1,0);
  }
  if ((param_9 != -1) || (param_11 != 0)) {
    return -0x7fffbfff;
  }
  if (param_4 < 0) goto LAB_005a11b0;
  if (*(int *)(param_2 + 0x50) == 0) {
    _SfDibFillRect_24(param_5,param_6,0,0,param_2 + 0x110,3);
    return 0;
  }
  if (*(int *)(*(int *)(param_2 + 0x50) + 0x18) == 0) {
    local_46c = 0;
  }
  else {
    local_46c = FUN_005f13f0(3);
  }
  iVar4 = local_46c;
  piVar7 = *(int **)(param_2 + 0xf4);
  local_45c = piVar7;
  if ((piVar7 == (int *)0x0) || (local_46c == 0)) {
    _SfDibFillRect_24(param_5,param_6,0,0,param_2 + 0x110,3);
    local_470 = 1;
    goto LAB_005a11b0;
  }
  local_460 = (int *)0x0;
  local_464 = 0;
  local_468 = 0;
  local_458 = 0;
  local_454 = 0x3ff00000;
  iVar2 = (**(code **)(*piVar7 + 0x54))(piVar7,&local_458);
  if (iVar2 != 0) {
    local_460 = (int *)0x0;
    local_45c = (int *)0x3ff00000;
  }
  local_470 = (**(code **)(*piVar7 + 0x3c))
                        (piVar7,param_1,param_2,&local_46c,&local_470,&local_468,0,afStack_438,
                         -(DAT_0064aec8 != 0) & 8,0);
  if (local_470 < 0) {
    if (((*(uint *)(*(int *)(iVar4 + 8) + 0x134) >> 5 & 1) != 0) ||
       ((*(uint *)(iVar4 + 0x8c) & 1) != 0)) {
      local_470 = 1;
      goto LAB_005a11b0;
    }
  }
  else {
    if (local_470 == 1) goto LAB_005a11b0;
    if (local_468 < 0) {
      local_464 = local_464 - (local_460[2] + -1) * local_468;
    }
    if (((*(int *)(local_46c + 0x44) != 0) && (1 < local_460[2])) &&
       (_DAT_006106d0 == (double)CONCAT44(local_454,local_458))) {
      if (local_460[4] == 3) {
        iVar4 = 0xc;
      }
      else {
        iVar4 = local_460[8] << 2;
      }
      iVar2 = *local_460;
      piVar7 = local_460;
      piVar8 = aiStack_428;
      for (uVar5 = (uint)(iVar4 + iVar2) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
      for (uVar5 = iVar4 + iVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)piVar8 = (char)*piVar7;
        piVar7 = (int *)((int)piVar7 + 1);
        piVar8 = (int *)((int)piVar8 + 1);
      }
      aiStack_428[2] = aiStack_428[2] / 2;
      if (local_468 == 0) {
        uVar5 = (uint)*(ushort *)((int)local_460 + 0xe) * local_460[1] + 0x1f;
        local_468 = (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3;
      }
      local_468 = local_468 * 2;
      local_460 = aiStack_428;
      piVar7 = local_45c;
    }
    _SfDibCopy_36(param_5,param_6,0,0,local_460,local_464,param_7,local_468,param_10);
    iVar4 = _SfGetPixelType_4(param_5);
    if ((((iVar4 == 0x1c) || (iVar4 == 0x1d)) || ((iVar4 == 0x1f || (iVar4 == 0x20)))) &&
       ((iVar2 = *(int *)(local_46c + 0x60), iVar2 != 0 && (iVar2 != -1)))) {
      uVar1 = param_5->biBitCount;
      uVar5 = param_5->biWidth * (uint)uVar1 + 0x1f;
      iVar3 = (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3;
      pWVar6 = param_6;
      if (param_6 == (WORD *)0x0) {
        if (param_5->biCompression == 0) {
          if (((param_5->biClrUsed != 0) || (uVar1 == 0)) || (8 < uVar1)) goto LAB_005a107d;
          pWVar6 = (WORD *)((int)&param_5->biSize +
                           param_5->biSize + (1 << ((byte)uVar1 & 0x1f)) * 4);
        }
        else if (param_5->biCompression == 3) {
          pWVar6 = &param_5[1].biPlanes;
        }
        else {
LAB_005a107d:
          pWVar6 = (WORD *)((int)&param_5->biSize + param_5->biSize + param_5->biClrUsed * 4);
        }
      }
      _SfDibPrepAlpha_32((WORD *)((param_5->biHeight + -1) * iVar3 + (int)pWVar6),param_5->biWidth,
                         param_5->biHeight,-iVar3,0,iVar2,local_46c + 0x68,
                         (-(uint)(iVar4 != 0x20) & 0xfffffff4) + 0x10);
      local_444 = 0x3f800000;
      local_450 = (float)(DAT_0064aa64 & 0xff) * _DAT_00610f1c;
      afStack_438[1] = 1.0;
      local_44c = (float)(DAT_0064aa64 >> 8 & 0xff) * _DAT_00610f1c;
      local_448 = (float)(DAT_0064aa64 >> 0x10 & 0xff) * _DAT_00610f1c;
      fStack_440 = (float)(DAT_0064aa68 & 0xff) * _DAT_00610f1c;
      fStack_43c = (float)(DAT_0064aa68 >> 8 & 0xff) * _DAT_00610f1c;
      afStack_438[0] = (float)(DAT_0064aa68 >> 0x10 & 0xff) * _DAT_00610f1c;
      SfDibAlphaToCheckers
                (param_5,(void *)0x0,(tagRECT *)0x0,0,(tagBITMAPINFOHEADER *)0x0,(void *)0x0,0,8,8,
                 (tSFDIBPIXEL *)&local_450,(tSFDIBPIXEL *)&fStack_440);
      piVar7 = local_45c;
    }
    (**(code **)(*piVar7 + 0x40))(piVar7,local_464);
  }
  if ((-1 < local_470) && (local_470 != 1)) {
    return local_470;
  }
LAB_005a11b0:
  local_450 = DAT_00648564;
  local_44c = (float)DAT_00648560;
  local_448 = (float)DAT_0064855c;
  local_444 = 0;
  _SfDibFillRect_24(param_5,param_6,0,0,&local_450,3);
  return local_470;
}


