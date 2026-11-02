/* Module: vfplugs.dll
   Function: FUN_00443ee0
   Address: 00443ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00443ee0(int param_1,RECT *param_2,int param_3,undefined4 *param_4,int param_5,RECT *param_6
                ,int param_7,undefined4 *param_8,double param_9,double param_10,int param_11)

{
  ushort uVar1;
  float10 fVar2;
  int iVar3;
  HGLOBAL pvVar4;
  LPVOID pMem;
  double *pdVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  float *pfVar9;
  undefined1 *puVar10;
  int local_100;
  int local_fc;
  int local_f8;
  int *local_f4;
  undefined8 local_f0;
  LPVOID local_e8;
  double *local_e4;
  undefined1 *local_e0;
  int local_dc;
  double local_d8;
  double local_d0 [5];
  double local_a8 [5];
  double local_80 [5];
  undefined1 local_58 [40];
  double local_30 [5];
  
  local_f4 = (int *)0x0;
  fVar2 = (float10)log2((float10)_DAT_00487e28);
  local_d8 = (double)((float10)0.6931471805599453 * fVar2 + (float10)0.6931471805599453 * fVar2);
  local_f0 = SQRT(-(((ABS(param_9) + _DAT_0048cd88) * (ABS(param_9) + _DAT_0048cd88)) / local_d8));
  FUN_00442710(local_30,(undefined4 *)local_80,local_a8,local_d0,(int)local_58,local_f0);
  iVar3 = FUN_00430fa0(&local_100,&local_fc,&local_dc,(int *)&local_e0,param_1,param_2,param_3,
                       param_4,param_5,param_6,param_7,param_8,param_11);
  if (iVar3 < 0) {
    return iVar3;
  }
  iVar3 = FUN_0043c970(&local_f4,0x20,local_100,local_fc,(uint *)0x0,0,0);
  if (iVar3 < 0) {
    return iVar3;
  }
  iVar3 = local_100;
  if (local_100 <= local_fc) {
    iVar3 = local_fc;
  }
  pvVar4 = GlobalAlloc(2,iVar3 << 5);
  pMem = GlobalLock(pvVar4);
  iVar3 = local_100;
  if (local_100 <= local_fc) {
    iVar3 = local_fc;
  }
  local_e8 = pMem;
  pvVar4 = GlobalAlloc(2,iVar3 << 5);
  pdVar5 = GlobalLock(pvVar4);
  pcVar8 = GlobalHandle_exref;
  local_e4 = pdVar5;
  if (pMem == (LPVOID)0x0) goto LAB_0044421c;
  if (pdVar5 != (double *)0x0) {
    if (local_f4[4] == 0) {
      if (((local_f4[8] != 0) || (uVar1 = *(ushort *)((int)local_f4 + 0xe), uVar1 == 0)) ||
         (8 < uVar1)) goto LAB_00444051;
      iVar3 = 1 << ((byte)uVar1 & 0x1f);
LAB_00444054:
      pfVar9 = (float *)(*local_f4 + iVar3 * 4 + (int)local_f4);
    }
    else {
      if (local_f4[4] != 3) {
LAB_00444051:
        iVar3 = local_f4[8];
        goto LAB_00444054;
      }
      pfVar9 = (float *)(local_f4 + 0xd);
    }
    local_f8 = 0;
    uVar6 = (uint)*(ushort *)((int)local_f4 + 0xe) * local_f4[1] + 0x1f;
    iVar7 = (int)((uVar6 & 0xffffffe0) + ((int)uVar6 >> 0x1f & 7U)) >> 3;
    iVar3 = local_dc;
    if (0 < local_fc) {
      do {
        if (param_11 == 4) {
          FUN_00442f10(pfVar9,iVar3,local_100,0,4,(int)local_30,local_80,(int)local_a8,(int)local_d0
                       ,(int)local_58,(undefined4)local_f0,local_f0._4_4_,(int)local_e8,local_e4);
        }
        iVar3 = iVar3 + param_7;
        pfVar9 = (float *)((int)pfVar9 + iVar7);
        local_f8 = local_f8 + 1;
      } while (local_f8 < local_fc);
    }
    local_f0 = SQRT(-(((ABS(param_10) + _DAT_0048cd88) * (ABS(param_10) + _DAT_0048cd88)) / local_d8
                     ));
    FUN_00442710(local_30,(undefined4 *)local_80,local_a8,local_d0,(int)local_58,local_f0);
    if (local_f4[4] == 0) {
      if (((local_f4[8] != 0) || (uVar1 = *(ushort *)((int)local_f4 + 0xe), uVar1 == 0)) ||
         (8 < uVar1)) goto LAB_00444170;
      iVar3 = 1 << ((byte)uVar1 & 0x1f);
LAB_00444173:
      pfVar9 = (float *)(*local_f4 + iVar3 * 4 + (int)local_f4);
    }
    else {
      if (local_f4[4] != 3) {
LAB_00444170:
        iVar3 = local_f4[8];
        goto LAB_00444173;
      }
      pfVar9 = (float *)(local_f4 + 0xd);
    }
    local_f8 = 0;
    pMem = local_e8;
    puVar10 = local_e0;
    if (0 < local_100) {
      do {
        if (param_11 == 4) {
          FUN_00443790(puVar10,param_3,pfVar9,iVar7,local_fc,4,(int)local_30,local_80,(int)local_a8,
                       (int)local_d0,(int)local_58,(undefined4)local_f0,local_f0._4_4_,(int)local_e8
                       ,local_e4);
        }
        puVar10 = puVar10 + param_11;
        pfVar9 = pfVar9 + 4;
        local_f8 = local_f8 + 1;
        pMem = local_e8;
      } while (local_f8 < local_100);
    }
  }
  pdVar5 = local_e4;
  pcVar8 = GlobalHandle_exref;
  pvVar4 = GlobalHandle(pMem);
  GlobalUnlock(pvVar4);
  pvVar4 = GlobalHandle(pMem);
  GlobalFree(pvVar4);
LAB_0044421c:
  if (pdVar5 != (double *)0x0) {
    pvVar4 = (HGLOBAL)(*pcVar8)(pdVar5);
    GlobalUnlock(pvVar4);
    pvVar4 = (HGLOBAL)(*pcVar8)(pdVar5);
    GlobalFree(pvVar4);
  }
  if (local_f4 != (int *)0x0) {
    FUN_0043c910(local_f4,0);
  }
  return 0;
}


