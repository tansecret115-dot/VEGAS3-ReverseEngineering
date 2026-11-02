/* Module: vfplugs.dll
   Function: FUN_00443ac0
   Address: 00443ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00443ac0(int param_1,RECT *param_2,int param_3,undefined4 *param_4,int param_5,RECT *param_6
                ,int param_7,undefined4 *param_8,double param_9,double param_10,int param_11)

{
  ushort uVar1;
  float10 fVar2;
  int iVar3;
  double *lpAddress;
  uint uVar4;
  double *pdVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  uint *puVar11;
  undefined1 *puVar12;
  int local_fc;
  int local_f8;
  int *local_f4;
  undefined8 local_f0;
  int local_e8;
  double *local_e4;
  undefined1 *local_e0;
  uint *local_dc;
  double local_d8;
  undefined8 local_d0;
  undefined8 local_a8;
  undefined4 local_80 [10];
  double local_58 [5];
  double local_30 [5];
  
  iVar8 = 0;
  fVar2 = (float10)log2((float10)_DAT_00487e28);
  local_f4 = (int *)0x0;
  local_d8 = (double)((float10)0.6931471805599453 * fVar2 + (float10)0.6931471805599453 * fVar2);
  local_f0 = SQRT(-(((ABS(param_9) + _DAT_0048cd88) * (ABS(param_9) + _DAT_0048cd88)) / local_d8));
  FUN_00442710((double *)&local_a8,local_80,(double *)&local_d0,local_58,(int)local_30,local_f0);
  iVar3 = FUN_00430fa0(&local_f8,&local_fc,(int *)&local_dc,(int *)&local_e0,param_1,param_2,param_3
                       ,param_4,param_5,param_6,param_7,param_8,param_11);
  if (iVar3 < 0) {
    return iVar3;
  }
  iVar3 = FUN_0043c970(&local_f4,0x20,local_f8,local_fc,(uint *)0x0,0,0);
  if (iVar3 < 0) {
    return iVar3;
  }
  iVar3 = local_fc;
  if (local_fc < local_f8) {
    iVar3 = local_f8;
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,iVar3 * 0x40 + 0x1b0,0x3000,4);
  if (lpAddress == (double *)0x0) goto LAB_00443ebe;
  iVar9 = 2;
  pdVar7 = lpAddress + 0x32;
  local_e4 = lpAddress + ((int)(iVar3 * 0x20 + (iVar3 * 0x20 >> 0x1f & 7U)) >> 3) + 0x36;
  do {
    pdVar5 = pdVar7 + -0x1e;
    iVar3 = 0;
    do {
      iVar6 = iVar3 + 8;
      *(undefined4 *)(pdVar5 + -0x14) = *(undefined4 *)((int)&local_a8 + iVar3);
      *(undefined4 *)((int)pdVar5 + -0x9c) = *(undefined4 *)((int)&local_a8 + iVar3 + 4);
      *(undefined4 *)(pdVar5 + -10) = *(undefined4 *)((int)local_80 + iVar3);
      *(undefined4 *)((int)pdVar5 + -0x4c) = *(undefined4 *)((int)local_80 + iVar3 + 4);
      *(undefined4 *)pdVar5 = *(undefined4 *)((int)&local_d0 + iVar3);
      *(undefined4 *)((int)pdVar5 + 4) = *(undefined4 *)((int)&local_d0 + iVar3 + 4);
      pdVar5[10] = *(double *)((int)&local_a8 + iVar3) - *(double *)((int)local_58 + iVar3);
      pdVar5[0x14] = *(double *)((int)&local_d0 + iVar3) - *(double *)((int)local_30 + iVar3);
      pdVar5 = pdVar5 + 2;
      iVar3 = iVar6;
    } while (iVar6 < 0x28);
    *(undefined4 *)pdVar7 = 0xffffffff;
    *(undefined4 *)((int)pdVar7 + 4) = 0x7fffffff;
    *(undefined4 *)(pdVar7 + 2) = 0x4646d497;
    *(undefined4 *)((int)pdVar7 + 0x14) = 0x3c670ef5;
    pdVar7 = pdVar7 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (local_f4[4] == 0) {
    if (((local_f4[8] != 0) || (uVar1 = *(ushort *)((int)local_f4 + 0xe), uVar1 == 0)) ||
       (8 < uVar1)) goto LAB_00443cb4;
    iVar3 = 1 << ((byte)uVar1 & 0x1f);
LAB_00443cb7:
    pfVar10 = (float *)(*local_f4 + iVar3 * 4 + (int)local_f4);
  }
  else {
    if (local_f4[4] != 3) {
LAB_00443cb4:
      iVar3 = local_f4[8];
      goto LAB_00443cb7;
    }
    pfVar10 = (float *)(local_f4 + 0xd);
  }
  uVar4 = (uint)*(ushort *)((int)local_f4 + 0xe) * local_f4[1] + 0x1f;
  iVar3 = (int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3;
  puVar11 = local_dc;
  local_e8 = iVar3;
  if (0 < local_fc) {
    do {
      if (param_11 == 4) {
        FUN_00442b80(pfVar10,puVar11,local_f8,0,4,lpAddress,(undefined4)local_f0,local_f0._4_4_,
                     lpAddress + 0x36,local_e4);
        iVar3 = local_e8;
      }
      pfVar10 = (float *)((int)pfVar10 + iVar3);
      puVar11 = (uint *)((int)puVar11 + param_7);
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_fc);
  }
  local_f0 = SQRT(-(((ABS(param_10) + _DAT_0048cd88) * (ABS(param_10) + _DAT_0048cd88)) / local_d8))
  ;
  FUN_00442710((double *)&local_a8,local_80,(double *)&local_d0,local_58,(int)local_30,local_f0);
  iVar3 = 2;
  pdVar7 = lpAddress + 0x32;
  do {
    pdVar5 = pdVar7 + -0x1e;
    iVar8 = 0;
    do {
      iVar9 = iVar8 + 8;
      *(undefined4 *)(pdVar5 + -0x14) = *(undefined4 *)((int)&local_a8 + iVar8);
      *(undefined4 *)((int)pdVar5 + -0x9c) = *(undefined4 *)((int)&local_a8 + iVar8 + 4);
      *(undefined4 *)(pdVar5 + -10) = *(undefined4 *)((int)local_80 + iVar8);
      *(undefined4 *)((int)pdVar5 + -0x4c) = *(undefined4 *)((int)local_80 + iVar8 + 4);
      *(undefined4 *)pdVar5 = *(undefined4 *)((int)&local_d0 + iVar8);
      *(undefined4 *)((int)pdVar5 + 4) = *(undefined4 *)((int)&local_d0 + iVar8 + 4);
      pdVar5[10] = *(double *)((int)&local_a8 + iVar8) - *(double *)((int)local_58 + iVar8);
      pdVar5[0x14] = *(double *)((int)&local_d0 + iVar8) - *(double *)((int)local_30 + iVar8);
      pdVar5 = pdVar5 + 2;
      iVar8 = iVar9;
    } while (iVar9 < 0x28);
    *(undefined4 *)pdVar7 = 0xffffffff;
    *(undefined4 *)((int)pdVar7 + 4) = 0x7fffffff;
    *(undefined4 *)(pdVar7 + 2) = 0x4646d497;
    *(undefined4 *)((int)pdVar7 + 0x14) = 0x3c670ef5;
    pdVar7 = pdVar7 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (local_f4[4] == 0) {
    if (((local_f4[8] != 0) || (uVar1 = *(ushort *)((int)local_f4 + 0xe), uVar1 == 0)) ||
       (8 < uVar1)) goto LAB_00443e4c;
    iVar3 = 1 << ((byte)uVar1 & 0x1f);
LAB_00443e4f:
    pfVar10 = (float *)(*local_f4 + iVar3 * 4 + (int)local_f4);
  }
  else {
    if (local_f4[4] != 3) {
LAB_00443e4c:
      iVar3 = local_f4[8];
      goto LAB_00443e4f;
    }
    pfVar10 = (float *)(local_f4 + 0xd);
  }
  iVar3 = 0;
  puVar12 = local_e0;
  if (0 < local_f8) {
    do {
      if (param_11 == 4) {
        FUN_004433d0(puVar12,param_3,pfVar10,local_e8,local_fc,4,lpAddress,(undefined4)local_f0,
                     local_f0._4_4_,lpAddress + 0x36,local_e4);
      }
      pfVar10 = pfVar10 + 4;
      puVar12 = puVar12 + param_11;
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_f8);
  }
  VirtualFree(lpAddress,0,0x8000);
LAB_00443ebe:
  if (local_f4 != (int *)0x0) {
    FUN_0043c910(local_f4,0);
  }
  return 0;
}


