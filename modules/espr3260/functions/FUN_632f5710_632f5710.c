/* Module: espr3260.dll
   Function: FUN_632f5710
   Address: 632f5710
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f5710(int *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  void *this;
  int iVar6;
  int *piVar7;
  int iVar8;
  float10 fVar9;
  float local_15c0 [240];
  float afStackY_1200 [30];
  undefined4 auStackY_1188 [210];
  float local_e40 [160];
  float local_bc0 [80];
  float local_a80 [80];
  float local_940 [160];
  float local_6c0 [80];
  float local_580 [34];
  float local_4f8 [64];
  float afStackY_3f8 [16];
  float local_3b8 [80];
  float local_278 [64];
  float afStackY_178 [16];
  float local_138 [17];
  undefined4 local_f4 [17];
  float local_b0 [17];
  float local_6c [14];
  undefined4 uStackY_34;
  int iVar10;
  float fVar11;
  float *pfVar12;
  int iVar13;
  
  FUN_632f9770();
  FUN_632f9710((float *)((int)this + 0x824),(float *)((int)this + 0x79c),0.5,0x10);
  FUN_632f89a0((float *)((int)this + 0x79c),0x10,(float *)((int)this + 0xbf8),local_15c0,0x1e0);
  pfVar3 = (float *)((int)this + 0x7e0);
  FUN_632f89a0(pfVar3,0x10,*(float **)((int)this + 0x137c),local_e40,0x1e);
  iVar6 = 0x11;
  do {
    *pfVar3 = pfVar3[-0x11];
    pfVar3 = pfVar3 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = 0;
  fVar2 = _DAT_632fa360;
  do {
    fVar11 = fVar2 - _DAT_632fa364;
    *(float *)(iVar6 + *(int *)((int)this + 0x1378)) =
         (_DAT_632fa360 - fVar2) * *(float *)((int)afStackY_1200 + iVar6);
    pfVar5 = (float *)((int)local_e40 + iVar6);
    pfVar3 = (float *)(iVar6 + *(int *)((int)this + 0x1378));
    iVar6 = iVar6 + 4;
    *pfVar3 = *pfVar5 * fVar2 + *pfVar3;
    fVar2 = fVar11;
  } while (iVar6 < 0x78);
  iVar6 = 0x78;
  do {
    *(undefined4 *)(iVar6 + *(int *)((int)this + 0x1378)) =
         *(undefined4 *)((int)afStackY_1200 + iVar6);
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x280);
  FUN_632f3710(this,(int)local_15c0,local_b0,0x10,(float *)0x1e0,(float *)((int)this + 0x1a08));
  FUN_632f6c10(local_b0,0x10);
  FUN_632f6c70(local_138,local_b0,(float *)0x10);
  puVar1 = (undefined4 *)((int)this + 0x71c);
  FUN_632f16a0(this,local_138,local_6c,(int)puVar1,0x10);
  FUN_632f85b0(local_6c,param_1);
  piVar7 = param_1 + 6;
  FUN_632f6780(this,(int)puVar1,local_6c,local_138,0x10);
  FUN_632f7490(local_f4,(undefined4 *)((int)this + 0x824),0x11);
  FUN_632f7490(local_6c,puVar1,0x10);
  iVar6 = 0;
  param_1 = (int *)0x0;
  do {
    pfVar3 = (float *)((int)local_138 + (int)param_1);
    FUN_632f89a0(pfVar3,0x10,(float *)(iVar6 + *(int *)((int)this + 0x1378)),
                 (float *)((int)local_940 + iVar6),(int)pfVar3);
    FUN_632f9710(pfVar3,(float *)((int)local_580 + (int)param_1),
                 (float)((int)local_580 + (int)param_1),0x10);
    FUN_632f9360(this,(int)this + 0x1944,0x10,(float *)((int)local_940 + iVar6),
                 (float *)(*(int *)((int)this + 0x1778) + iVar6),0x50,(float *)((int)this + 0x1944),
                 1);
    iVar6 = iVar6 + 0x140;
    param_1 = param_1 + 0x11;
  } while (iVar6 < 0x280);
  FUN_632f6d80(*(float **)((int)this + 0x1778),0xa0,3);
  iVar6 = FUN_632f7960(*(float **)((int)this + 0x1778),1.4013e-44,1.30321e-43,7.42688e-44);
  iVar6 = (iVar6 + -2) * 3;
  if (iVar6 < 0x1e) {
    iVar6 = 0x1e;
  }
  if (0x119 < iVar6 + 0xc) {
    iVar6 = 0x10d;
  }
  pfVar3 = local_580;
  param_1 = (int *)0x0;
  do {
    iVar8 = (int)param_1 * 4;
    FUN_632f9360(this,(int)pfVar3,0x10,local_940 + (int)param_1,local_278,0x50,
                 (float *)((int)this + 0x1904),0);
    iVar10 = 0x10;
    FUN_632f9360(this,(int)pfVar3,0x10,(float *)((int)this + 0x177c),local_3b8,0x50,
                 *(float **)((int)this + 0x18c0),0);
    FUN_632f7490(local_940 + (int)param_1,(undefined4 *)(*(int *)((int)this + 0x718) + iVar8),0x50);
    pfVar5 = local_278;
    uStackY_34 = 0x632f5a53;
    pfVar4 = (float *)FUN_632f74c0(this,(float)(*(int *)((int)this + 0x718) + iVar8),pfVar5,
                                   local_3b8,iVar6,iVar10,(int *)&stack0xffffffd4,(int)param_1,
                                   1.12104e-43);
    pfVar12 = pfVar4;
    iVar10 = FUN_632f6310((int)pfVar4,(int)pfVar5,(int *)&stack0xfffffff0,(int *)&stack0xffffffd8,
                          (int)pfVar4,0x119,(int)param_1);
    *piVar7 = iVar10;
    FUN_632f78c0((float *)(*(int *)((int)this + 0x718) + iVar8),pfVar12,(int)pfVar4,0x50);
    FUN_632f5cf0((float *)(*(int *)((int)this + 0x718) + iVar8),(int)local_3b8,local_4f8,0x50);
    fVar9 = FUN_632f65f0((int)local_278,local_4f8,0x50);
    fVar2 = (float)fVar9;
    iVar10 = FUN_632f7fd0((float *)&stack0xfffffff8);
    piVar7[1] = iVar10;
    pfVar5 = local_4f8;
    FUN_632f96e0((int)local_278,(int)local_278,pfVar5,fVar2,0x50);
    fVar11 = fVar2;
    if (_DAT_632fa360 < fVar2) {
      fVar11 = 1.0;
    }
    FUN_632f7d80((int)local_3b8,(int)pfVar5,fVar11,0x50);
    FUN_632f5f60(local_278,local_bc0,(int)local_3b8,0x50);
    iVar10 = *(int *)((int)this + 0x718);
    pfVar5 = (float *)(iVar10 + iVar8);
    iVar13 = 0x50;
    pfVar12 = local_a80;
    do {
      fVar11 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      pfVar4 = pfVar12 + 1;
      *pfVar12 = *(float *)((int)local_a80 + (0x13c - iVar10) + (int)pfVar5) - fVar2 * fVar11;
      iVar13 = iVar13 + -1;
      pfVar12 = pfVar4;
    } while (iVar13 != 0);
    pfVar5 = local_6c0;
    pfVar12 = local_3b8;
    FUN_632f3cd0(this,local_bc0,local_a80,pfVar12,(int)pfVar5,local_4f8,piVar7 + 2);
    FUN_632f7d80((int)local_6c0,(int)pfVar5,(float)pfVar12,0x50);
    fVar9 = FUN_632f65f0((int)local_278,local_4f8,0x50);
    fVar11 = (float)fVar9;
    iVar10 = FUN_632f8030(this,local_6c0,1.12104e-43,(float *)&stack0xffffffdc);
    piVar7[7] = iVar10;
    piVar7 = piVar7 + 8;
    iVar10 = 0x50;
    pfVar5 = local_6c0;
    do {
      pfVar12 = (float *)(*(int *)((int)this + 0x718) + iVar8);
      pfVar4 = (float *)(*(int *)((int)this + 0x718) + iVar8);
      iVar8 = iVar8 + 4;
      iVar10 = iVar10 + -1;
      *pfVar4 = fVar2 * *pfVar12 + fVar11 * *pfVar5;
      pfVar5 = pfVar5 + 1;
    } while (iVar10 != 0);
    iVar8 = 0;
    pfVar5 = (float *)((int)this + 0x1904);
    do {
      iVar10 = iVar8 + 4;
      *pfVar5 = *(float *)((int)afStackY_178 + iVar8) -
                *(float *)((int)afStackY_3f8 + iVar8) * fVar11;
      iVar8 = iVar10;
      pfVar5 = pfVar5 + 1;
    } while (iVar10 < 0x40);
    param_1 = param_1 + 0x14;
    pfVar3 = pfVar3 + 0x11;
  } while ((int)param_1 < 0xa0);
  FUN_632f7490((undefined4 *)((int)this + 0xb78),(undefined4 *)((int)this + 0x8f8),0x10);
  FUN_632f7490((undefined4 *)((int)this + 0xe38),(undefined4 *)((int)this + 3000),0x150);
  FUN_632f7490((undefined4 *)((int)this + 0x1458),(undefined4 *)((int)this + 0x1384),0x5d);
  FUN_632f7490((undefined4 *)((int)this + 0x288),(undefined4 *)((int)this + 8),0x124);
  return;
}


