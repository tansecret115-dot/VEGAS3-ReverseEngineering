/* Module: rv203260.dll
   Function: FUN_638a9190
   Address: 638a9190
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_638a9190(void *this,undefined4 param_1,float *param_2)

{
  char cVar1;
  float fVar2;
  FILE *pFVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  float *pfVar11;
  undefined4 *puVar12;
  
  bVar4 = false;
  switch(param_1) {
  case 0x10002:
    fVar2 = *param_2;
    *(float *)(*(int *)((int)this + 0xd6) + 0xfe) = fVar2;
    pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x366);
    if ((pFVar3 != (FILE *)0x0) && (fVar2 == 1.4013e-45)) {
      fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_638b4ab0,*(undefined4 *)((int)this + 0xde),
              *(undefined4 *)((int)this + 0xfa));
    }
    break;
  case 0x10003:
    *(float *)((int)this + 0xfa) = *param_2;
    break;
  case 0x10005:
    *(float *)((int)this + 0x1a2) = *param_2;
    break;
  case 0x10010:
    fVar2 = *param_2;
    *(double *)((int)this + 0x1a6) = (double)fVar2;
    if ((float)*(double *)((int)this + 0xf2) < fVar2) {
      *(undefined4 *)((int)this + 0x1a6) = *(undefined4 *)((int)this + 0xf2);
      *(undefined4 *)((int)this + 0x1aa) = *(undefined4 *)((int)this + 0xf6);
    }
    break;
  case 0x10012:
    fVar2 = *param_2;
    if (((fVar2 == 5.60519e-45) || (fVar2 == 7.00649e-45)) || (fVar2 == 8.40779e-45)) {
      *(float *)((int)this + 0xee) = fVar2;
    }
    else {
      if (((fVar2 != 0.0) && (fVar2 != 2.8026e-45)) && (fVar2 != 4.2039e-45)) {
        iVar9 = -0x7fffbffb;
        goto LAB_638a91eb;
      }
      *(float *)((int)this + 0xea) = fVar2;
    }
    break;
  case 0x10013:
    if (*param_2 == 3.753059e+15) {
      *(undefined4 *)((int)this + 0xc6) = 0x59555632;
    }
    break;
  case 0x10017:
    FUN_638a1a00(*(void **)((int)this + 0xd6),(uint)*param_2);
    break;
  case 0x1001f:
    iVar9 = 0;
    bVar4 = true;
    goto LAB_638a91eb;
  case 0x10020:
    if (*param_2 != 0.0) {
      pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x366);
      if (pFVar3 != (FILE *)0x0) {
        fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_638b4a70,*(undefined4 *)((int)this + 0xde)
                ,*(undefined4 *)((int)this + 0xfa));
      }
      FUN_638a9950(this,1);
    }
    break;
  case 0x10021:
    iVar9 = 0;
    fVar2 = *param_2;
    *(float *)((int)this + 0x25b) = fVar2;
    if (((fVar2 != 0.0) && (*(int *)((int)this + 0x231) != 0)) && (*(int *)((int)this + 0x10a) == 1)
       ) {
      *(undefined4 *)((int)this + 0x25b) = 0;
    }
    if (*(int *)((int)this + 0x25b) != 0) {
      *(undefined4 *)((int)this + 0x25f) = 5;
    }
    pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x366);
    if (pFVar3 != (FILE *)0x0) {
      fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_638b4a3c,*(undefined4 *)((int)this + 0xde),
              *(undefined4 *)((int)this + 0xfa),*(undefined4 *)((int)this + 0x25b));
    }
    goto LAB_638a91eb;
  case 0x10022:
    iVar9 = 0;
    fVar2 = *param_2;
    if (fVar2 == 0.0) {
      *(undefined4 *)(*(int *)((int)this + 0xd6) + 0xb4) = 0;
      *(undefined4 *)(*(int *)((int)this + 0xd6) + 0xbc) = 0;
      pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x366);
      if (pFVar3 != (FILE *)0x0) {
        fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_638b4a00,*(undefined4 *)((int)this + 0xde)
                ,*(undefined4 *)((int)this + 0xfa));
      }
    }
    else if (fVar2 == 1.4013e-45) {
      *(undefined4 *)(*(int *)((int)this + 0xd6) + 0xb4) = 0;
      *(undefined4 *)(*(int *)((int)this + 0xd6) + 0xbc) = 1;
      pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x366);
      if (pFVar3 != (FILE *)0x0) {
        fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_638b49c0,*(undefined4 *)((int)this + 0xde)
                ,*(undefined4 *)((int)this + 0xfa));
      }
    }
    else if (fVar2 == 2.8026e-45) {
      *(undefined4 *)(*(int *)((int)this + 0xd6) + 0xb4) = 1;
      *(undefined4 *)(*(int *)((int)this + 0xd6) + 0xbc) = 0;
      pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x366);
      if (pFVar3 != (FILE *)0x0) {
        fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_638b4980,*(undefined4 *)((int)this + 0xde)
                ,*(undefined4 *)((int)this + 0xfa));
      }
    }
    else {
      iVar9 = -0x7fffbffb;
    }
    goto LAB_638a91eb;
  case 0x10023:
    uVar7 = 0xffffffff;
    do {
      pfVar11 = param_2;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pfVar11 = (float *)((int)param_2 + 1);
      cVar1 = *(char *)param_2;
      param_2 = pfVar11;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    puVar10 = (undefined4 *)((int)pfVar11 - uVar7);
    puVar12 = (undefined4 *)(*(int *)((int)this + 0xd6) + 0x1ca);
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    break;
  case 0x10024:
    if (*(int *)((int)this + 0xfe) == 0) {
      *(float *)((int)this + 0xfe) = *param_2;
    }
    break;
  case 0x10025:
    iVar9 = 0;
    fVar2 = *param_2;
    *(undefined4 *)((int)this + 0x186) = 1;
    *(float *)((int)this + 0x182) = fVar2;
    pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x366);
    if (pFVar3 != (FILE *)0x0) {
      fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_638b4948,*(undefined4 *)((int)this + 0xde),
              *(undefined4 *)((int)this + 0xfa),fVar2);
    }
    goto LAB_638a91eb;
  case 0x10026:
    iVar9 = 0;
    fVar2 = *param_2;
    *(float *)((int)this + 0x24b) = fVar2;
    if (3 < (uint)fVar2) {
      *(undefined4 *)((int)this + 0x24b) = 3;
    }
    if (((*(int *)((int)this + 0x24b) != 0) && (*(int *)((int)this + 0x231) != 0)) &&
       (*(int *)((int)this + 0x10a) == 1)) {
      *(undefined4 *)((int)this + 0x24b) = 0;
    }
    pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x366);
    if (pFVar3 != (FILE *)0x0) {
      fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_638b4908,*(undefined4 *)((int)this + 0xde),
              *(undefined4 *)((int)this + 0xfa),*(undefined4 *)((int)this + 0x24b));
    }
    goto LAB_638a91eb;
  case 0x10027:
    iVar9 = 0;
    iVar5 = ftol();
    *(int *)((int)this + 0x24f) = 0x10 - iVar5;
    goto LAB_638a91eb;
  case 0x10028:
    iVar9 = 0;
    fVar2 = *param_2;
    *(float *)((int)this + 0x102) = fVar2;
    if ((uint)fVar2 < 1000) {
      *(undefined4 *)((int)this + 0x102) = 1000;
    }
    pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x366);
    if (pFVar3 != (FILE *)0x0) {
      fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_638b48d0,*(undefined4 *)((int)this + 0xde),
              *(undefined4 *)((int)this + 0xfa),*(undefined4 *)((int)this + 0x102));
    }
    goto LAB_638a91eb;
  case 0x10029:
    if (*param_2 != 0.0) {
      *(undefined4 *)(*(int *)((int)this + 0xd6) + 0x35e) = 3;
      iVar9 = *(int *)((int)this + 0xd6);
      if (*(int *)(iVar9 + 0x1ba) == 0) {
        pvVar6 = malloc((uint)(*(int *)(iVar9 + 0xfa) * *(int *)(iVar9 + 0xf6) * 3) >> 1);
        *(void **)(*(int *)((int)this + 0xd6) + 0x1ba) = pvVar6;
      }
      pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x366);
      if (pFVar3 != (FILE *)0x0) {
        fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_638b4888,*(undefined4 *)((int)this + 0xde)
                ,*(undefined4 *)((int)this + 0xfa));
      }
    }
    break;
  case 0x1002a:
    *(float *)(*(int *)((int)this + 0xd6) + 0x356) = *param_2;
    iVar9 = *(int *)((int)this + 0xd6);
    if (*(int *)(iVar9 + 0x356) != 0) {
      if (*(int *)(iVar9 + 0x1ba) == 0) {
        pvVar6 = malloc((uint)(*(int *)(iVar9 + 0xfa) * *(int *)(iVar9 + 0xf6) * 3) >> 1);
        *(void **)(*(int *)((int)this + 0xd6) + 0x1ba) = pvVar6;
      }
      pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x366);
      if (pFVar3 != (FILE *)0x0) {
        fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_638b4848,*(undefined4 *)((int)this + 0xde)
                ,*(undefined4 *)((int)this + 0xfa));
      }
    }
    break;
  case 0x1002c:
    *(float *)(*(int *)((int)this + 0xd6) + 0x362) = *param_2;
    pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x366);
    if ((pFVar3 != (FILE *)0x0) && (*(int *)(*(int *)((int)this + 0xd6) + 0x362) == 1)) {
      fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_638b4808,*(undefined4 *)((int)this + 0xde),
              *(undefined4 *)((int)this + 0xfa));
    }
  }
  iVar9 = 0;
LAB_638a91eb:
  if ((iVar9 == 0) && (bVar4)) {
    iVar9 = FUN_638a9b00(this);
  }
  return iVar9;
}


