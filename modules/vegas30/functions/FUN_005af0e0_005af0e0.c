/* Module: vegas30.exe
   Function: FUN_005af0e0
   Address: 005af0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005af0e0(int param_1,byte *param_2,float *param_3,int *param_4,undefined4 *param_5,
            undefined4 *param_6,int *param_7,uint param_8)

{
  double dVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  HGLOBAL hMem;
  A_Buffer *pAVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  int *piVar11;
  undefined4 unaff_EDI;
  undefined4 local_f38;
  undefined4 uStack_f34;
  int local_f30;
  int local_f2c;
  int local_f28;
  int local_f24;
  int local_f20;
  undefined8 local_f1c;
  undefined4 local_f14;
  tSFOVERLAY *local_f10;
  undefined4 local_f0c;
  undefined4 local_f08;
  undefined4 local_f04;
  undefined4 local_f00;
  undefined4 local_efc;
  undefined4 local_ef8;
  int local_ef4;
  int local_ef0;
  int local_eec [5];
  undefined4 local_ed8;
  int local_ed4;
  undefined4 local_ed0;
  int local_eac [2];
  int *local_ea4;
  undefined4 local_ea0;
  undefined4 local_e9c;
  undefined4 local_e1c;
  undefined4 *local_d9c;
  undefined4 local_d1c;
  undefined4 local_c9c;
  undefined4 local_c98;
  uint local_c94;
  undefined4 local_c90;
  int local_c8c;
  undefined4 local_c88;
  tSFOVERLAY *local_c84;
  SF3DPOLY local_7f0 [4];
  float local_7ec [251];
  undefined4 local_400;
  int local_3fc;
  undefined1 local_3f8 [4];
  float local_3f4 [252];
  undefined4 local_4;
  
  if (((*param_2 & 1) == 0) && (param_3 == (float *)0x0)) {
    local_f14 = *(undefined4 *)(param_2 + 0x1390);
    local_f10 = (tSFOVERLAY *)0x0;
    local_f1c = (double)CONCAT44(*(int *)(param_2 + 0x1394),0x10);
    if (*(int *)(param_2 + 0x1394) == -1) {
      local_f10 = SfOverlay_GetCompositor((_GUID *)(param_2 + 0x1398));
    }
    if ((*param_7 << 0xe == *(int *)(param_2 + 0x13cc) - *(int *)(param_2 + 0x13c4)) &&
       (param_7[1] << 0xe == *(int *)(param_2 + 0x13cc) - *(int *)(param_2 + 0x13c4))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (((param_8 & 0x2000000) == 0) && (((param_8 & 0x4000000) == 0 || (bVar2)))) {
      _SfDibComposite_40(*param_4,param_4[0x10b],param_2 + 0x13c4,param_4[0x10c],*param_6,
                         param_6[0x10b],0,param_6[0x10c],&local_f1c,param_8);
      return 0;
    }
    puVar5 = (undefined4 *)FUN_005a5bd0(param_1 + 0x108,1,param_1 + 0x9c0);
    _SfDibCopy_36(*puVar5,puVar5[0x10b],param_2 + 0x13c4,puVar5[0x10c],*param_6,param_6[0x10b],0,
                  param_6[0x10c],param_8 | 0x8000000);
    iVar9 = *(int *)(param_2 + 0x13d0);
    if (iVar9 < 0) {
      local_f20 = 0;
    }
    else {
      local_f20 = *(int *)(*param_4 + 8) * 0x4000;
      if (iVar9 <= local_f20) {
        local_f20 = iVar9;
      }
    }
    iVar9 = *(int *)(param_2 + 0x13cc);
    if (iVar9 < 0) {
      local_f30 = 0;
    }
    else {
      local_f30 = *(int *)(*param_4 + 4) * 0x4000;
      if (iVar9 <= local_f30) {
        local_f30 = iVar9;
      }
    }
    iVar9 = *(int *)(param_2 + 0x13c8);
    if (iVar9 < 0) {
      local_f28 = 0;
    }
    else {
      local_f28 = *(int *)(*param_4 + 8) * 0x4000;
      if (iVar9 <= local_f28) {
        local_f28 = iVar9;
      }
    }
    iVar9 = *(int *)(param_2 + 0x13c4);
    if (iVar9 < 0) {
      local_f2c = 0;
    }
    else {
      local_f2c = *(int *)(*param_4 + 4) * 0x4000;
      if (iVar9 <= local_f2c) {
        local_f2c = iVar9;
      }
    }
    local_f24 = local_f30;
    _SfDibComposite_40(*param_4,param_4[0x10b],&local_f2c,param_4[0x10c],*puVar5,puVar5[0x10b],
                       &local_f2c,puVar5[0x10c],&local_f1c,param_8);
    (*(code *)puVar5[0x114])(puVar5,puVar5[0x115],puVar5[0x116]);
    return 0;
  }
  if (*(int *)(param_1 + 0x468) == 0) {
    hMem = GlobalAlloc(0x40,0x136d0);
    pAVar6 = GlobalLock(hMem);
    if (pAVar6 == (A_Buffer *)0x0) {
      pAVar6 = (A_Buffer *)0x0;
    }
    else {
      *(undefined4 *)(pAVar6 + 0x126bc) = 0;
      *(undefined4 *)(pAVar6 + 0x126c0) = 0;
      *(undefined4 *)(pAVar6 + 0x126c4) = 0;
    }
    *(A_Buffer **)(param_1 + 0x468) = pAVar6;
    A_Buffer::Init(pAVar6);
  }
  pAVar6 = *(A_Buffer **)(param_1 + 0x468);
  if (pAVar6 != (A_Buffer *)0x0) {
    if (param_3 == (float *)0x0) {
      param_3 = (float *)(param_2 + 0x13d4);
    }
    piVar11 = local_eac;
    for (iVar9 = 0x1af; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar11 = 0;
      piVar11 = piVar11 + 1;
    }
    local_f2c = 0;
    local_f28 = 0;
    local_f24 = *param_5;
    local_f20 = param_5[1];
    local_ef4 = *param_7;
    local_ef0 = param_7[1];
    local_ea4 = &local_f2c;
    local_d9c = &local_efc;
    local_eac[1] = param_4[0x10b];
    local_eac[0] = *param_4;
    local_e9c = *param_6;
    local_c94 = param_8;
    local_e1c = param_6[0x10b];
    local_efc = 0;
    local_ef8 = 0;
    local_ea0 = 0;
    local_c9c = 1;
    local_d1c = 0;
    local_c98 = 2;
    local_c84 = (tSFOVERLAY *)0x0;
    local_c90 = 0x10;
    local_c8c = *(int *)(param_2 + 0x1394);
    local_c88 = *(undefined4 *)(param_2 + 0x1390);
    if (*(int *)(param_2 + 0x1394) == -1) {
      local_c84 = SfOverlay_GetCompositor((_GUID *)(param_2 + 0x1398));
    }
    iVar9 = 4;
    local_3fc = 4;
    local_400 = 0;
    local_f1c = 0.0;
    local_f14 = 0x3f800000;
    local_f10 = (tSFOVERLAY *)0x0;
    local_f0c = 0x3f800000;
    local_f08 = 0x3f800000;
    local_f04 = 0;
    local_f00 = 0x3f800000;
    pfVar8 = (float *)((int)&local_f1c + 4);
    pfVar7 = local_7ec;
    pfVar10 = param_3;
    do {
      pfVar7[-1] = *pfVar10;
      *pfVar7 = pfVar10[1];
      pfVar7[3] = pfVar8[-1];
      pfVar7[4] = *pfVar8;
      pfVar7[1] = 1.0;
      pfVar7[2] = 1.0;
      pfVar7[5] = 1.0;
      pfVar8 = pfVar8 + 2;
      pfVar7 = pfVar7 + 7;
      iVar9 = iVar9 + -1;
      pfVar10 = pfVar10 + 4;
    } while (iVar9 != 0);
    fVar3 = SQRT((param_3[5] - param_3[1]) * (param_3[5] - param_3[1]) +
                 (param_3[4] - *param_3) * (param_3[4] - *param_3));
    fVar4 = SQRT((param_3[0xd] - param_3[1]) * (param_3[0xd] - param_3[1]) +
                 (param_3[0xc] - *param_3) * (param_3[0xc] - *param_3));
    if (((float)_DAT_0061a6f0 <= fVar3) && ((float)_DAT_0061a6f0 <= fVar4)) {
      local_eec[2] = local_f24;
      local_eec[4] = local_f24;
      local_eec[0] = local_f2c;
      local_eec[1] = local_f28;
      local_eec[3] = local_f28;
      local_ed8 = local_f20;
      local_ed4 = local_f2c;
      local_ed0 = local_f20;
      local_4 = 4;
      iVar9 = 4;
      local_f1c = (double)((float)*param_7 / fVar3);
      dVar1 = (double)param_7[1] / (double)fVar4;
      pfVar8 = local_3f4;
      piVar11 = local_eec + 1;
      do {
        iVar9 = iVar9 + -1;
        pfVar8[-1] = (float)piVar11[-1];
        *pfVar8 = (float)*piVar11;
        pfVar8[1] = 1.0;
        pfVar8[2] = 1.0;
        pfVar8 = pfVar8 + 7;
        piVar11 = piVar11 + 2;
      } while (iVar9 != 0);
      FUN_005ac2d0(local_eec,local_3f8);
      FUN_005ac210(local_7f0,local_eec,4);
      if ((2 < local_3fc) &&
         (iVar9 = A_Buffer::BeginFrame(pAVar6,(tA_BUFFER_PARAM *)local_eac), iVar9 == 1)) {
        uStack_f34 = (undefined4)((ulonglong)dVar1 >> 0x20);
        local_f38 = SUB84(dVar1,0);
        A_Buffer::DrawPoly(pAVar6,local_7f0,(double)CONCAT44(local_f38,local_f1c._4_4_),
                           (double)CONCAT44(unaff_EDI,uStack_f34));
        A_Buffer::EndFrame(pAVar6);
        return 0;
      }
    }
    return 0;
  }
  return 0x8007000e;
}


