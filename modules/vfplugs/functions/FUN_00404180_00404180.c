/* Module: vfplugs.dll
   Function: FUN_00404180
   Address: 00404180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00404180(void *this,undefined4 *param_1,int param_2,double param_3)

{
  LPCVOID pMem;
  float fVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  FUN_0040be00(this);
  pMem = *(LPCVOID *)((int)this + 700);
  puVar10 = param_1;
  puVar11 = this;
  for (iVar5 = 0xae; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  uVar7 = param_1[0xae];
  if (pMem != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)((int)this + 700));
    GlobalFree(pvVar2);
    *(undefined4 *)((int)this + 0x2b8) = 0;
    *(undefined4 *)((int)this + 700) = 0;
  }
  if (0 < (int)uVar7) {
    pvVar2 = GlobalAlloc(2,uVar7 * 2);
    pvVar3 = GlobalLock(pvVar2);
    *(LPVOID *)((int)this + 700) = pvVar3;
  }
  *(uint *)((int)this + 0x2b8) = uVar7;
  if ((0 < (int)uVar7) && (*(undefined4 **)((int)this + 700) != (undefined4 *)0x0)) {
    puVar10 = (undefined4 *)param_1[0xaf];
    puVar11 = *(undefined4 **)((int)this + 700);
    for (uVar6 = (uVar7 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar7 = uVar7 * 2 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
  }
  fVar1 = (float)param_3;
  *(float *)((int)this + 100) =
       (*(float *)(param_2 + 100) - (float)param_1[0x19]) * fVar1 + (float)param_1[0x19];
  *(float *)((int)this + 0x68) =
       (*(float *)(param_2 + 0x68) - (float)param_1[0x1a]) * fVar1 + (float)param_1[0x1a];
  *(float *)((int)this + 0x44) =
       (*(float *)(param_2 + 0x44) - (float)param_1[0x11]) * fVar1 + (float)param_1[0x11];
  *(float *)((int)this + 0x48) =
       (*(float *)(param_2 + 0x48) - (float)param_1[0x12]) * fVar1 + (float)param_1[0x12];
  *(float *)((int)this + 0x4c) =
       (*(float *)(param_2 + 0x4c) - (float)param_1[0x13]) * fVar1 + (float)param_1[0x13];
  *(float *)((int)this + 0x50) =
       (*(float *)(param_2 + 0x50) - (float)param_1[0x14]) * fVar1 + (float)param_1[0x14];
  *(float *)((int)this + 0x54) =
       (*(float *)(param_2 + 0x54) - (float)param_1[0x15]) * fVar1 + (float)param_1[0x15];
  *(float *)((int)this + 0x58) =
       (*(float *)(param_2 + 0x58) - (float)param_1[0x16]) * fVar1 + (float)param_1[0x16];
  *(float *)((int)this + 0x5c) =
       (*(float *)(param_2 + 0x5c) - (float)param_1[0x17]) * fVar1 + (float)param_1[0x17];
  *(float *)((int)this + 0x60) =
       (*(float *)(param_2 + 0x60) - (float)param_1[0x18]) * fVar1 + (float)param_1[0x18];
  pfVar9 = (float *)(param_2 + 0xac);
  pfVar8 = (float *)((int)this + 0xa4);
  pfVar4 = (float *)(param_1 + 0x2a);
  iVar5 = 7;
  do {
    if (*(int *)((int)pfVar4 + ((int)this - (int)param_1) + -0x3c) != 0) {
      *(float *)((int)pfVar4 + ((int)this - (int)param_1)) =
           (*(float *)((int)pfVar4 + (param_2 - (int)param_1)) - *pfVar4) * fVar1 + *pfVar4;
      *pfVar8 = (*(float *)((int)pfVar8 + (param_2 - (int)this)) - pfVar4[-1]) * fVar1 + pfVar4[-1];
      pfVar8[-1] = (pfVar9[-3] - pfVar4[-2]) * fVar1 + pfVar4[-2];
      pfVar8[2] = (*pfVar9 - pfVar4[1]) * fVar1 + pfVar4[1];
      pfVar8[-3] = (pfVar9[-5] - pfVar4[-4]) * fVar1 + pfVar4[-4];
      pfVar8[-2] = (pfVar9[-4] - pfVar4[-3]) * fVar1 + pfVar4[-3];
      pfVar8[3] = (pfVar9[1] - pfVar4[2]) * fVar1 + pfVar4[2];
      pfVar8[4] = (pfVar9[2] - pfVar4[3]) * fVar1 + pfVar4[3];
      pfVar8[-9] = (pfVar9[-0xb] - pfVar4[-10]) * fVar1 + pfVar4[-10];
      pfVar8[-10] = (pfVar9[-0xc] - pfVar4[-0xb]) * fVar1 + pfVar4[-0xb];
      pfVar8[-0xb] = (pfVar9[-0xd] - pfVar4[-0xc]) * fVar1 + pfVar4[-0xc];
      pfVar8[-8] = (pfVar9[-10] - pfVar4[-9]) * fVar1 + pfVar4[-9];
      pfVar8[-0xd] = (pfVar9[-0xf] - pfVar4[-0xe]) * fVar1 + pfVar4[-0xe];
      pfVar8[-0xc] = (pfVar9[-0xe] - pfVar4[-0xd]) * fVar1 + pfVar4[-0xd];
      pfVar8[-7] = (pfVar9[-9] - pfVar4[-8]) * fVar1 + pfVar4[-8];
      pfVar8[-6] = (pfVar9[-8] - pfVar4[-7]) * fVar1 + pfVar4[-7];
    }
    pfVar4 = pfVar4 + 0x15;
    pfVar9 = pfVar9 + 0x15;
    pfVar8 = pfVar8 + 0x15;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return 0;
}


