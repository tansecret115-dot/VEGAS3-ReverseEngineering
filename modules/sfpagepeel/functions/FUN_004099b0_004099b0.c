/* Module: sfpagepeel.dll
   Function: FUN_004099b0
   Address: 004099b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_004099b0(void *this,int param_1)

{
  float fVar1;
  LPCVOID pMem;
  int iVar2;
  int iVar3;
  HGLOBAL pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LPCRITICAL_SECTION unaff_ESI;
  LPCVOID *ppvVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined1 *puVar11;
  int *piStack_37c;
  int *piStack_378;
  int *piStack_374;
  int *piVar12;
  int *piVar13;
  int *this_00;
  byte *pbVar14;
  int **ppiVar15;
  int iStack_354;
  int *piStack_350;
  uint *puStack_34c;
  int *piVar16;
  int iStack_344;
  int *piStack_340;
  int iStack_33c;
  LPCVOID pvStack_338;
  LPVOID pvVar17;
  int local_320 [2];
  LPCRITICAL_SECTION local_318 [3];
  double dStack_30c;
  byte *apbStack_2f4 [2];
  undefined1 auStack_2ec [8];
  int iStack_2e4;
  int iStack_2dc;
  uint auStack_2d8 [2];
  undefined4 uStack_2d0;
  LPCVOID pvStack_2c8;
  int iStack_2c4;
  int aiStack_2b8 [3];
  int iStack_2ac;
  int iStack_2a8;
  int *piStack_2a4;
  int *piStack_2a0;
  int iStack_29c;
  undefined1 auStack_298 [8];
  int iStack_290;
  int iStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 auStack_274 [5];
  uint uStack_260;
  LPCVOID pvStack_258;
  int iStack_254;
  LPVOID pvStack_250;
  int iStack_24c;
  int aiStack_248 [5];
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 auStack_228 [4];
  int aiStack_224 [4];
  int aiStack_214 [4];
  int *piStack_204;
  undefined4 uStack_200;
  tagRECT tStack_1fc;
  undefined4 uStack_1ec;
  uint uStack_1ac;
  LPCVOID pvStack_1a4;
  int iStack_1a0;
  undefined1 auStack_198 [12];
  int *piStack_18c;
  undefined4 uStack_188;
  undefined1 auStack_174 [8];
  undefined1 auStack_16c [8];
  undefined4 auStack_164 [2];
  undefined4 auStack_15c [12];
  int aiStack_12c [8];
  undefined8 uStack_10c;
  undefined8 uStack_ec;
  double dStack_e4;
  undefined1 uStack_db;
  undefined8 uStack_c4;
  undefined4 auStack_84 [32];
  
  local_320[0] = 0;
  local_318[0] = (LPCRITICAL_SECTION)((int)this + 0x1d4);
  pvStack_338 = (LPCVOID)0x4099de;
  EnterCriticalSection(local_318[0]);
  if (*(int *)((int)this + 0x148) == 0) {
    pvVar17 = (LPVOID)((int)this + 0x1f0);
    pvStack_338 = (LPCVOID)((int)this + 0x228);
    iStack_33c = 0x409a1b;
    (**(code **)(*(int *)((int)this + 0xf0) + 0x24))();
  }
  else {
    pvVar17 = *(LPVOID *)((int)this + 0x154);
    pvStack_338 = *(LPCVOID *)((int)this + 0x150);
    iStack_33c = (int)this + 400;
    piStack_340 = (int *)((int)this + 0x158);
    iStack_344 = (int)this + 0x228;
    (**(code **)(*(int *)((int)this + 0xf0) + 0x28))();
  }
  puStack_34c = (uint *)0x409a26;
  LeaveCriticalSection(unaff_ESI);
  fVar1 = *(float *)((int)this + 0x9c);
  piVar12 = *(int **)(*(int *)((int)this + 0xa0) + 4);
  auStack_2d8[0] = 0;
  uStack_2d0 = 0;
  piVar16 = (int *)0x0;
  ppvVar8 = &pvStack_2c8;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppvVar8 = (LPCVOID)0x0;
    ppvVar8 = ppvVar8 + 1;
  }
  puStack_34c = auStack_2d8;
  iStack_288 = 0;
  piStack_350 = &DAT_0046f670;
  iStack_354 = 0;
  uStack_284 = 0;
  uStack_280 = 0;
  iVar5 = 0;
  dStack_30c = (double)fVar1;
  piStack_350 = (int *)(**(code **)(*piVar12 + 0x28))();
  piVar13 = piStack_340;
  if (-1 < (int)piStack_350) {
    FUN_0040a3e0(piStack_340,(int)auStack_2ec,0);
    piStack_350 = (int *)(**(code **)(*piVar13 + 0x18))();
    if (-1 < (int)piStack_350) {
      if (piVar16 == (int *)0x60001) {
        ppiVar15 = &piStack_340;
        (**(code **)(*(int *)apbStack_2f4[0] + 0x10))();
        piStack_2a4 = piStack_340;
        iStack_2ac = iStack_344;
        pbVar14 = apbStack_2f4[0];
      }
      else {
        iStack_29c = FUN_0040ada0((int)auStack_2ec);
        iStack_29c = iStack_29c << 2;
        iVar2 = FUN_0040ada0((int)auStack_2ec);
        iVar6 = FUN_0040adb0((int)auStack_2ec);
        pvVar4 = GlobalAlloc(0x40,iVar2 * iVar6 * 4);
        piStack_2a4 = GlobalLock(pvVar4);
        if (piStack_2a4 == (int *)0x0) {
          piStack_2a4 = (int *)0x0;
          piVar13 = piVar16;
        }
        else {
          piStack_374 = (int *)0x409b3e;
          FUN_00408cb0(piStack_2a4,4,iVar2 * iVar6,&LAB_0040af00);
          piVar13 = piVar16;
        }
        if (piStack_2a4 == (int *)0x0) {
          piStack_350 = (int *)0x8007000e;
          piStack_2a4 = (LPCVOID)0x0;
          goto LAB_00409cc3;
        }
        piStack_2a0 = (int *)0x1;
        uStack_200 = 1;
        piStack_204 = piStack_2a4;
        FUN_0040aee0(auStack_2ec,&tStack_1fc.left);
        OffsetRect(&tStack_1fc,-iStack_2e4,-iStack_2dc);
        ppiVar15 = &piStack_204;
        uStack_1ec = 0;
        (**(code **)(*(int *)apbStack_2f4[0] + 0x2c))();
        pbVar14 = apbStack_2f4[0];
      }
      piStack_374 = (int *)0x409bd4;
      FUN_0040a540(piVar13,&iStack_29c,pbVar14,ppiVar15,piVar12,iVar5);
      iVar2 = param_1 + 8;
      piVar16 = *(int **)(*(int *)((int)this + 0xa0) + 0x1c);
      uStack_284 = 0;
      uStack_27c = 0;
      piVar13 = (int *)0x0;
      puVar9 = auStack_274;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      uStack_234 = 0;
      piStack_374 = &DAT_0046f670;
      piStack_378 = (int *)0x0;
      uStack_230 = 0;
      uStack_22c = 0;
      piStack_37c = (int *)0x0;
      piStack_350 = piVar16;
      piStack_374 = (int *)(**(code **)(*piVar16 + 0x28))();
      if (-1 < (int)piStack_374) {
        iVar6 = param_1 + 8;
        this_00 = piVar13;
        FUN_0040a3e0(piVar13,(int)auStack_298,iVar6);
        piStack_374 = (int *)(**(code **)(*piVar13 + 0x18))(piVar13,auStack_228,&stack0xfffffc98);
        if (-1 < (int)piStack_374) {
          if (pbVar14 == (byte *)0x60001) {
            puVar11 = &stack0xfffffccc;
            piVar10 = piStack_2a0;
            (**(code **)(*piStack_2a0 + 0x10))();
            pvStack_258 = pvStack_338;
            pvStack_250 = pvVar17;
          }
          else {
            aiStack_248[0] = FUN_0040ada0((int)auStack_298);
            aiStack_248[0] = aiStack_248[0] << 2;
            iVar3 = FUN_0040ada0((int)auStack_298);
            iVar7 = FUN_0040adb0((int)auStack_298);
            pvVar4 = GlobalAlloc(0x40,iVar3 * iVar7 * 4);
            pvStack_250 = GlobalLock(pvVar4);
            if (pvStack_250 == (LPVOID)0x0) {
              pvStack_250 = (LPVOID)0x0;
            }
            else {
              FUN_00408cb0(pvStack_250,4,iVar3 * iVar7,&LAB_0040af00);
            }
            if (pvStack_250 == (LPVOID)0x0) {
              piStack_374 = (int *)0x8007000e;
              pvStack_250 = (LPCVOID)0x0;
              goto LAB_00409ebe;
            }
            iStack_24c = 1;
            FUN_0040aee0(auStack_298,(undefined4 *)&stack0xfffffcd4);
            OffsetRect((LPRECT)&stack0xfffffcd4,-iStack_290,-iStack_288);
            puVar11 = &stack0xfffffccc;
            local_320[1] = 0;
            piVar10 = piStack_2a0;
            (**(code **)(*piStack_2a0 + 0x2c))();
            piVar13 = piStack_374;
          }
          FUN_0040a540(piVar13,aiStack_248,piVar10,puVar11,piVar16,iVar2);
          piStack_37c = (int *)0x0;
          FUN_0040a5e0(&tStack_1fc.right,&piStack_37c,*(int **)((int)this + 0xa8),param_1 + 0x50);
          if ((int)piStack_37c < 0) {
            piStack_378 = piStack_37c;
            if (iStack_1a0 != 0) {
              (**(code **)(*(int *)tStack_1fc.right + 0x38))(tStack_1fc.right,auStack_198);
              pvVar4 = GlobalHandle(pvStack_1a4);
              GlobalUnlock(pvVar4);
              pvVar4 = GlobalHandle(pvStack_1a4);
              GlobalFree(pvVar4);
            }
            FUN_0040add0(&tStack_1fc.right);
            pMem = pvStack_258;
            if (iStack_254 != 0) {
              pvVar4 = GlobalHandle(pvStack_258);
              GlobalUnlock(pvVar4);
              pvVar4 = GlobalHandle(pMem);
              GlobalFree(pvVar4);
            }
            FUN_0040adc0(&iStack_2a8);
            FUN_0040a5a0(local_320);
            return piStack_378;
          }
          piStack_374 = (int *)uStack_2d0;
          FUN_0040aee0((void *)(param_1 + 0x50),aiStack_214);
          FUN_0040aee0(this_00,&piStack_204);
          iVar3 = *(int *)((int)this + 0xa0);
          auStack_164[0] = 0;
          puVar9 = auStack_15c;
          for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          piVar13 = *(int **)(iVar3 + 4);
          (**(code **)(*piVar13 + 0x1c))(piVar13,auStack_164);
          FUN_0040aee0(auStack_16c,&iStack_354);
          piVar13 = *(int **)(*(int *)((int)this + 0xa0) + 0x1c);
          (**(code **)(*piVar13 + 0x1c))(piVar13,auStack_16c);
          FUN_0040aee0(auStack_174,auStack_84);
          FUN_0040a850(aiStack_12c,iVar6,piVar12);
          uStack_db = ftol();
          uStack_10c = *(undefined8 *)((int)this + 0x230);
          uStack_c4 = *(undefined8 *)((int)this + 0x238);
          piStack_378 = (int *)uStack_188;
          piStack_37c = piStack_18c;
          FUN_0040a9f0(aiStack_12c,SUB84((double)(iStack_354 - iVar5),0),
                       (int)((ulonglong)(double)(iStack_354 - iVar5) >> 0x20),
                       SUB84((double)((int)piStack_350 - (int)pvStack_1a4),0),
                       (int)((ulonglong)(double)((int)piStack_350 - (int)pvStack_1a4) >> 0x20),
                       piStack_18c,uStack_188);
          uStack_ec = *(undefined8 *)((int)this + 0x228);
          dStack_e4 = *(double *)((int)this + 0x248) * _DAT_00470828;
          FUN_0040aa20((int)aiStack_12c);
          FUN_0040abf0((int)aiStack_12c);
          FUN_0040ded0(aiStack_12c,pbVar14,aiStack_224,uStack_1ac >> 2,(int)piVar16,
                       (int *)&stack0xfffffca4,aiStack_214,auStack_2d8[0] >> 2,iVar2,uStack_260 >> 2
                       ,*(double *)((int)this + 0x228),
                       (uint)(_DAT_00470820 < *(double *)((int)this + 0x138)),piStack_37c,
                       piStack_378);
          FUN_0040a960(aiStack_12c);
          FUN_0040a800((int *)&piStack_204);
          FUN_0040a5a0(aiStack_2b8);
          FUN_0040a5a0((int *)&stack0xfffffcd0);
          return piVar10;
        }
      }
LAB_00409ebe:
      pvVar17 = pvStack_250;
      piVar12 = piStack_374;
      if (iStack_24c != 0) {
        pvVar4 = GlobalHandle(pvStack_250);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(pvVar17);
        GlobalFree(pvVar4);
      }
      FUN_0040adc0((int *)&piStack_2a0);
      if (iStack_2c4 != 0) {
        pvVar4 = GlobalHandle(pvStack_2c8);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(pvStack_2c8);
        GlobalFree(pvVar4);
      }
      FUN_0040adc0((int *)local_318);
      return piVar12;
    }
  }
LAB_00409cc3:
  piVar16 = piStack_2a4;
  piVar12 = piStack_350;
  if (piStack_2a0 != (int *)0x0) {
    pvVar4 = GlobalHandle(piStack_2a4);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(piVar16);
    GlobalFree(pvVar4);
  }
  FUN_0040adc0((int *)apbStack_2f4);
  return piVar12;
}


