/* Module: rv303260.dll
   Function: FUN_672091b0
   Address: 672091b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_672091b0(void *this,undefined4 param_1,float *param_2)

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
  
  iVar9 = -0x7ff8ffa9;
  bVar4 = false;
  switch(param_1) {
  case 0x10001:
  case 0x1001b:
    goto switchD_672091dc_caseD_10001;
  case 0x10002:
    fVar2 = *param_2;
    *(float *)(*(int *)((int)this + 0xd6) + 0xfe) = fVar2;
    pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x372);
    if ((pFVar3 != (FILE *)0x0) && (fVar2 == 1.4013e-45)) {
      fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_67214b68,*(undefined4 *)((int)this + 0xde),
              *(undefined4 *)((int)this + 0xfa));
      iVar9 = 0;
      break;
    }
    goto switchD_672091dc_caseD_10001;
  case 0x10003:
    iVar9 = 0;
    *(float *)((int)this + 0xfa) = *param_2;
    break;
  case 0x10005:
    fVar2 = *param_2;
    *(float *)((int)this + 0x19a) = fVar2;
    if ((uint)fVar2 < 0x33) {
      if ((uint)fVar2 < 0x32) {
        iVar9 = 0;
        *(undefined4 *)(*(int *)((int)this + 0xd6) + 0x36e) = 0x7fffffff;
      }
      else {
        iVar9 = 0;
        *(undefined4 *)(*(int *)((int)this + 0xd6) + 0x36e) = 0x32000;
      }
    }
    else {
      iVar9 = 0;
      *(undefined4 *)(*(int *)((int)this + 0xd6) + 0x36e) = 0x25800;
    }
    break;
  case 0x10010:
    fVar2 = *param_2;
    *(double *)((int)this + 0x19e) = (double)fVar2;
    if ((float)*(double *)((int)this + 0xf2) < fVar2) {
      *(undefined4 *)((int)this + 0x19e) = *(undefined4 *)((int)this + 0xf2);
      *(undefined4 *)((int)this + 0x1a2) = *(undefined4 *)((int)this + 0xf6);
      iVar9 = 0;
      break;
    }
    goto switchD_672091dc_caseD_10001;
  case 0x10012:
    fVar2 = *param_2;
    if (((fVar2 == 5.60519e-45) || (fVar2 == 7.00649e-45)) || (fVar2 == 8.40779e-45)) {
      *(float *)((int)this + 0xee) = fVar2;
      iVar9 = 0;
    }
    else if (((fVar2 == 0.0) || (fVar2 == 2.8026e-45)) || (fVar2 == 4.2039e-45)) {
      *(float *)((int)this + 0xea) = fVar2;
      iVar9 = 0;
    }
    else {
      iVar9 = -0x7fffbffb;
    }
    break;
  case 0x10013:
    if (*param_2 == 3.753059e+15) {
      *(undefined4 *)((int)this + 0xc6) = 0x59555632;
      iVar9 = 0;
      break;
    }
    goto switchD_672091dc_caseD_10001;
  case 0x10017:
    FUN_67201850(*(void **)((int)this + 0xd6),(uint)*param_2);
    iVar9 = 0;
    break;
  case 0x1001f:
    iVar9 = 0;
    bVar4 = true;
    break;
  case 0x10021:
    iVar9 = 0;
    fVar2 = *param_2;
    *(float *)((int)this + 0x253) = fVar2;
    if (fVar2 != 0.0) {
      *(undefined4 *)((int)this + 599) = 5;
    }
    pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x372);
    if (pFVar3 != (FILE *)0x0) {
      fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_67214b34,*(undefined4 *)((int)this + 0xde),
              *(undefined4 *)((int)this + 0xfa),*(undefined4 *)((int)this + 0x253));
    }
    break;
  case 0x10022:
    iVar9 = 0;
    fVar2 = *param_2;
    if (fVar2 == 0.0) {
      *(undefined4 *)(*(int *)((int)this + 0xd6) + 0xb4) = 0;
      *(undefined4 *)(*(int *)((int)this + 0xd6) + 0xbc) = 0;
      pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x372);
      if (pFVar3 != (FILE *)0x0) {
        fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_67214af8,*(undefined4 *)((int)this + 0xde)
                ,*(undefined4 *)((int)this + 0xfa));
      }
    }
    else if (fVar2 == 1.4013e-45) {
      *(undefined4 *)(*(int *)((int)this + 0xd6) + 0xb4) = 0;
      *(undefined4 *)(*(int *)((int)this + 0xd6) + 0xbc) = 1;
      pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x372);
      if (pFVar3 != (FILE *)0x0) {
        fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_67214ab8,*(undefined4 *)((int)this + 0xde)
                ,*(undefined4 *)((int)this + 0xfa));
      }
    }
    else if (fVar2 == 2.8026e-45) {
      *(undefined4 *)(*(int *)((int)this + 0xd6) + 0xb4) = 1;
      *(undefined4 *)(*(int *)((int)this + 0xd6) + 0xbc) = 0;
      pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x372);
      if (pFVar3 != (FILE *)0x0) {
        fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_67214a78,*(undefined4 *)((int)this + 0xde)
                ,*(undefined4 *)((int)this + 0xfa));
      }
    }
    else {
      iVar9 = -0x7fffbffb;
    }
    break;
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
    puVar12 = (undefined4 *)(*(int *)((int)this + 0xd6) + 0x1d2);
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
    iVar9 = 0;
    break;
  case 0x10024:
    if (*(int *)((int)this + 0xfe) == 0) {
      iVar9 = 0;
      *(float *)((int)this + 0xfe) = *param_2;
      break;
    }
    goto switchD_672091dc_caseD_10001;
  case 0x10025:
    iVar9 = 0;
    fVar2 = *param_2;
    *(undefined4 *)((int)this + 0x17e) = 1;
    *(float *)((int)this + 0x17a) = fVar2;
    pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x372);
    if (pFVar3 != (FILE *)0x0) {
      fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_67214a40,*(undefined4 *)((int)this + 0xde),
              *(undefined4 *)((int)this + 0xfa),fVar2);
    }
    break;
  case 0x10026:
    iVar9 = 0;
    fVar2 = *param_2;
    *(float *)((int)this + 0x243) = fVar2;
    if (3 < (uint)fVar2) {
      *(undefined4 *)((int)this + 0x243) = 3;
    }
    pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x372);
    if (pFVar3 != (FILE *)0x0) {
      fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_67214a00,*(undefined4 *)((int)this + 0xde),
              *(undefined4 *)((int)this + 0xfa),*(undefined4 *)((int)this + 0x243));
    }
    break;
  case 0x10027:
    iVar9 = 0;
    iVar5 = ftol();
    *(int *)((int)this + 0x247) = 0x10 - iVar5;
    break;
  case 0x10028:
    iVar9 = 0;
    fVar2 = *param_2;
    *(float *)((int)this + 0x102) = fVar2;
    if ((uint)fVar2 < 1000) {
      *(undefined4 *)((int)this + 0x102) = 1000;
    }
    pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x372);
    if (pFVar3 != (FILE *)0x0) {
      fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_672149c8,*(undefined4 *)((int)this + 0xde),
              *(undefined4 *)((int)this + 0xfa),*(undefined4 *)((int)this + 0x102));
    }
    break;
  case 0x10029:
    if (*param_2 != 0.0) {
      *(undefined4 *)(*(int *)((int)this + 0xd6) + 0x366) = 3;
      iVar9 = *(int *)((int)this + 0xd6);
      if (*(int *)(iVar9 + 0x1c2) == 0) {
        pvVar6 = malloc((uint)(*(int *)(iVar9 + 0xfa) * *(int *)(iVar9 + 0xf6) * 3) >> 1);
        *(void **)(*(int *)((int)this + 0xd6) + 0x1c2) = pvVar6;
      }
      pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x372);
      if (pFVar3 != (FILE *)0x0) {
        fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_67214980,*(undefined4 *)((int)this + 0xde)
                ,*(undefined4 *)((int)this + 0xfa));
        iVar9 = 0;
        break;
      }
    }
    goto switchD_672091dc_caseD_10001;
  case 0x1002a:
    *(float *)(*(int *)((int)this + 0xd6) + 0x35e) = *param_2;
    iVar9 = *(int *)((int)this + 0xd6);
    if (*(int *)(iVar9 + 0x35e) != 0) {
      if (*(int *)(iVar9 + 0x1c2) == 0) {
        pvVar6 = malloc((uint)(*(int *)(iVar9 + 0xfa) * *(int *)(iVar9 + 0xf6) * 3) >> 1);
        *(void **)(*(int *)((int)this + 0xd6) + 0x1c2) = pvVar6;
      }
      pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x372);
      if (pFVar3 != (FILE *)0x0) {
        fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_67214940,*(undefined4 *)((int)this + 0xde)
                ,*(undefined4 *)((int)this + 0xfa));
        iVar9 = 0;
        break;
      }
    }
    goto switchD_672091dc_caseD_10001;
  case 0x1002c:
    *(float *)(*(int *)((int)this + 0xd6) + 0x36a) = *param_2;
    pFVar3 = *(FILE **)(*(int *)((int)this + 0xd6) + 0x372);
    if ((pFVar3 != (FILE *)0x0) && (*(int *)(*(int *)((int)this + 0xd6) + 0x36a) == 1)) {
      fprintf(pFVar3,s_CODEC_DEBUG_SUMMARY____d___d_bps_67214900,*(undefined4 *)((int)this + 0xde),
              *(undefined4 *)((int)this + 0xfa));
    }
switchD_672091dc_caseD_10001:
    iVar9 = 0;
  }
  if ((iVar9 == 0) && (bVar4)) {
    iVar9 = FUN_67209940((int)this);
  }
  return iVar9;
}


