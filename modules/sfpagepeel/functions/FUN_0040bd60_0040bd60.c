/* Module: sfpagepeel.dll
   Function: FUN_0040bd60
   Address: 0040bd60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_0040bd60(void *this,int param_1)

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
  int *piStack_394;
  int *piStack_390;
  int *piStack_38c;
  int *piVar12;
  int *piVar13;
  int *this_00;
  byte *pbVar14;
  int **ppiVar15;
  int iStack_36c;
  int *piStack_368;
  uint *puStack_364;
  int *piVar16;
  int iStack_35c;
  int *piStack_358;
  int iStack_354;
  LPCVOID pvStack_350;
  LPVOID pvVar17;
  int local_338 [2];
  LPCRITICAL_SECTION local_330 [3];
  double dStack_324;
  byte *apbStack_30c [2];
  undefined1 auStack_304 [8];
  int iStack_2fc;
  int iStack_2f4;
  uint auStack_2f0 [2];
  undefined4 uStack_2e8;
  LPCVOID pvStack_2e0;
  int iStack_2dc;
  int aiStack_2d0 [3];
  int iStack_2c4;
  int iStack_2c0;
  int *piStack_2bc;
  int *piStack_2b8;
  int iStack_2b4;
  undefined1 auStack_2b0 [8];
  int iStack_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 auStack_28c [5];
  uint uStack_278;
  LPCVOID pvStack_270;
  int iStack_26c;
  LPVOID pvStack_268;
  int iStack_264;
  int aiStack_260 [5];
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined1 auStack_240 [4];
  int aiStack_23c [4];
  int aiStack_22c [4];
  int *piStack_21c;
  undefined4 uStack_218;
  tagRECT tStack_214;
  undefined4 uStack_204;
  uint uStack_1c4;
  LPCVOID pvStack_1bc;
  int iStack_1b8;
  undefined1 auStack_1b0 [12];
  int *piStack_1a4;
  undefined4 uStack_1a0;
  undefined1 auStack_18c [8];
  undefined1 auStack_184 [8];
  undefined4 auStack_17c [2];
  undefined4 auStack_174 [12];
  undefined4 auStack_144 [4];
  int aiStack_134 [8];
  undefined8 uStack_114;
  undefined8 uStack_f4;
  double dStack_ec;
  undefined1 uStack_e3;
  undefined8 uStack_bc;
  
  local_338[0] = 0;
  local_330[0] = (LPCRITICAL_SECTION)((int)this + 0x1d4);
  pvStack_350 = (LPCVOID)0x40bd8e;
  EnterCriticalSection(local_330[0]);
  if (*(int *)((int)this + 0x148) == 0) {
    pvVar17 = (LPVOID)((int)this + 0x1f0);
    pvStack_350 = (LPCVOID)((int)this + 0x228);
    iStack_354 = 0x40bdcb;
    (**(code **)(*(int *)((int)this + 0xf0) + 0x24))();
  }
  else {
    pvVar17 = *(LPVOID *)((int)this + 0x154);
    pvStack_350 = *(LPCVOID *)((int)this + 0x150);
    iStack_354 = (int)this + 400;
    piStack_358 = (int *)((int)this + 0x158);
    iStack_35c = (int)this + 0x228;
    (**(code **)(*(int *)((int)this + 0xf0) + 0x28))();
  }
  puStack_364 = (uint *)0x40bdd6;
  LeaveCriticalSection(unaff_ESI);
  fVar1 = *(float *)((int)this + 0x9c);
  piVar12 = *(int **)(*(int *)((int)this + 0xa0) + 4);
  auStack_2f0[0] = 0;
  uStack_2e8 = 0;
  piVar16 = (int *)0x0;
  ppvVar8 = &pvStack_2e0;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppvVar8 = (LPCVOID)0x0;
    ppvVar8 = ppvVar8 + 1;
  }
  puStack_364 = auStack_2f0;
  iStack_2a0 = 0;
  piStack_368 = &DAT_0046f670;
  iStack_36c = 0;
  uStack_29c = 0;
  uStack_298 = 0;
  iVar5 = 0;
  dStack_324 = (double)fVar1;
  piStack_368 = (int *)(**(code **)(*piVar12 + 0x28))();
  piVar13 = piStack_358;
  if (-1 < (int)piStack_368) {
    FUN_0040a3e0(piStack_358,(int)auStack_304,0);
    piStack_368 = (int *)(**(code **)(*piVar13 + 0x18))();
    if (-1 < (int)piStack_368) {
      if (piVar16 == (int *)0x60001) {
        ppiVar15 = &piStack_358;
        (**(code **)(*(int *)apbStack_30c[0] + 0x10))();
        piStack_2bc = piStack_358;
        iStack_2c4 = iStack_35c;
        pbVar14 = apbStack_30c[0];
      }
      else {
        iStack_2b4 = FUN_0040ada0((int)auStack_304);
        iStack_2b4 = iStack_2b4 << 2;
        iVar2 = FUN_0040ada0((int)auStack_304);
        iVar6 = FUN_0040adb0((int)auStack_304);
        pvVar4 = GlobalAlloc(0x40,iVar2 * iVar6 * 4);
        piStack_2bc = GlobalLock(pvVar4);
        if (piStack_2bc == (int *)0x0) {
          piStack_2bc = (int *)0x0;
          piVar13 = piVar16;
        }
        else {
          piStack_38c = (int *)0x40beee;
          FUN_00408cb0(piStack_2bc,4,iVar2 * iVar6,&LAB_0040af00);
          piVar13 = piVar16;
        }
        if (piStack_2bc == (int *)0x0) {
          piStack_368 = (int *)0x8007000e;
          piStack_2bc = (LPCVOID)0x0;
          goto LAB_0040c073;
        }
        piStack_2b8 = (int *)0x1;
        uStack_218 = 1;
        piStack_21c = piStack_2bc;
        FUN_0040aee0(auStack_304,&tStack_214.left);
        OffsetRect(&tStack_214,-iStack_2fc,-iStack_2f4);
        ppiVar15 = &piStack_21c;
        uStack_204 = 0;
        (**(code **)(*(int *)apbStack_30c[0] + 0x2c))();
        pbVar14 = apbStack_30c[0];
      }
      piStack_38c = (int *)0x40bf84;
      FUN_0040a540(piVar13,&iStack_2b4,pbVar14,ppiVar15,piVar12,iVar5);
      iVar2 = param_1 + 8;
      piVar16 = *(int **)(*(int *)((int)this + 0xa0) + 0x1c);
      uStack_29c = 0;
      uStack_294 = 0;
      piVar13 = (int *)0x0;
      puVar9 = auStack_28c;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      uStack_24c = 0;
      piStack_38c = &DAT_0046f670;
      piStack_390 = (int *)0x0;
      uStack_248 = 0;
      uStack_244 = 0;
      piStack_394 = (int *)0x0;
      piStack_368 = piVar16;
      piStack_38c = (int *)(**(code **)(*piVar16 + 0x28))();
      if (-1 < (int)piStack_38c) {
        iVar6 = param_1 + 8;
        this_00 = piVar13;
        FUN_0040a3e0(piVar13,(int)auStack_2b0,iVar6);
        piStack_38c = (int *)(**(code **)(*piVar13 + 0x18))(piVar13,auStack_240,&stack0xfffffc80);
        if (-1 < (int)piStack_38c) {
          if (pbVar14 == (byte *)0x60001) {
            puVar11 = &stack0xfffffcb4;
            piVar10 = piStack_2b8;
            (**(code **)(*piStack_2b8 + 0x10))();
            pvStack_270 = pvStack_350;
            pvStack_268 = pvVar17;
          }
          else {
            aiStack_260[0] = FUN_0040ada0((int)auStack_2b0);
            aiStack_260[0] = aiStack_260[0] << 2;
            iVar3 = FUN_0040ada0((int)auStack_2b0);
            iVar7 = FUN_0040adb0((int)auStack_2b0);
            pvVar4 = GlobalAlloc(0x40,iVar3 * iVar7 * 4);
            pvStack_268 = GlobalLock(pvVar4);
            if (pvStack_268 == (LPVOID)0x0) {
              pvStack_268 = (LPVOID)0x0;
            }
            else {
              FUN_00408cb0(pvStack_268,4,iVar3 * iVar7,&LAB_0040af00);
            }
            if (pvStack_268 == (LPVOID)0x0) {
              piStack_38c = (int *)0x8007000e;
              pvStack_268 = (LPCVOID)0x0;
              goto LAB_0040c26e;
            }
            iStack_264 = 1;
            FUN_0040aee0(auStack_2b0,(undefined4 *)&stack0xfffffcbc);
            OffsetRect((LPRECT)&stack0xfffffcbc,-iStack_2a8,-iStack_2a0);
            puVar11 = &stack0xfffffcb4;
            local_338[1] = 0;
            piVar10 = piStack_2b8;
            (**(code **)(*piStack_2b8 + 0x2c))();
            piVar13 = piStack_38c;
          }
          FUN_0040a540(piVar13,aiStack_260,piVar10,puVar11,piVar16,iVar2);
          piStack_394 = (int *)0x0;
          FUN_0040a5e0(&tStack_214.right,&piStack_394,*(int **)((int)this + 0xa8),param_1 + 0x50);
          if ((int)piStack_394 < 0) {
            piStack_390 = piStack_394;
            if (iStack_1b8 != 0) {
              (**(code **)(*(int *)tStack_214.right + 0x38))(tStack_214.right,auStack_1b0);
              pvVar4 = GlobalHandle(pvStack_1bc);
              GlobalUnlock(pvVar4);
              pvVar4 = GlobalHandle(pvStack_1bc);
              GlobalFree(pvVar4);
            }
            FUN_0040add0(&tStack_214.right);
            pMem = pvStack_270;
            if (iStack_26c != 0) {
              pvVar4 = GlobalHandle(pvStack_270);
              GlobalUnlock(pvVar4);
              pvVar4 = GlobalHandle(pMem);
              GlobalFree(pvVar4);
            }
            FUN_0040adc0(&iStack_2c0);
            FUN_0040a5a0(local_338);
            return piStack_390;
          }
          piStack_38c = (int *)uStack_2e8;
          FUN_0040aee0((void *)(param_1 + 0x50),aiStack_22c);
          FUN_0040aee0(this_00,&piStack_21c);
          iVar3 = *(int *)((int)this + 0xa0);
          auStack_17c[0] = 0;
          puVar9 = auStack_174;
          for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          piVar13 = *(int **)(iVar3 + 4);
          (**(code **)(*piVar13 + 0x1c))(piVar13,auStack_17c);
          FUN_0040aee0(auStack_184,&iStack_36c);
          piVar13 = *(int **)(*(int *)((int)this + 0xa0) + 0x1c);
          (**(code **)(*piVar13 + 0x1c))(piVar13,auStack_184);
          FUN_0040aee0(auStack_18c,auStack_144);
          FUN_0040c790(aiStack_134,iVar6,piVar12);
          uStack_e3 = ftol();
          uStack_114 = *(undefined8 *)((int)this + 0x230);
          uStack_bc = *(undefined8 *)((int)this + 0x238);
          piStack_390 = (int *)uStack_1a0;
          piStack_394 = piStack_1a4;
          FUN_0040c8e0(aiStack_134,SUB84((double)(iStack_36c - iVar5),0),
                       (int)((ulonglong)(double)(iStack_36c - iVar5) >> 0x20),
                       SUB84((double)((int)piStack_368 - (int)pvStack_1bc),0),
                       (int)((ulonglong)(double)((int)piStack_368 - (int)pvStack_1bc) >> 0x20),
                       piStack_1a4,uStack_1a0);
          uStack_f4 = *(undefined8 *)((int)this + 0x228);
          dStack_ec = *(double *)((int)this + 0x248) * _DAT_00470828;
          FUN_0040c910((int)aiStack_134);
          FUN_0040ce90((int)aiStack_134);
          FUN_0040ded0(aiStack_134,pbVar14,aiStack_23c,uStack_1c4 >> 2,(int)piVar16,
                       (int *)&stack0xfffffc8c,aiStack_22c,auStack_2f0[0] >> 2,iVar2,uStack_278 >> 2
                       ,*(double *)((int)this + 0x228),
                       (uint)(_DAT_00470820 < *(double *)((int)this + 0x138)),piStack_394,
                       piStack_390);
          FUN_0040c8d0(aiStack_134);
          FUN_0040a800((int *)&piStack_21c);
          FUN_0040a5a0(aiStack_2d0);
          FUN_0040a5a0((int *)&stack0xfffffcb8);
          return piVar10;
        }
      }
LAB_0040c26e:
      pvVar17 = pvStack_268;
      piVar12 = piStack_38c;
      if (iStack_264 != 0) {
        pvVar4 = GlobalHandle(pvStack_268);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(pvVar17);
        GlobalFree(pvVar4);
      }
      FUN_0040adc0((int *)&piStack_2b8);
      if (iStack_2dc != 0) {
        pvVar4 = GlobalHandle(pvStack_2e0);
        GlobalUnlock(pvVar4);
        pvVar4 = GlobalHandle(pvStack_2e0);
        GlobalFree(pvVar4);
      }
      FUN_0040adc0((int *)local_330);
      return piVar12;
    }
  }
LAB_0040c073:
  piVar16 = piStack_2bc;
  piVar12 = piStack_368;
  if (piStack_2b8 != (int *)0x0) {
    pvVar4 = GlobalHandle(piStack_2bc);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(piVar16);
    GlobalFree(pvVar4);
  }
  FUN_0040adc0((int *)apbStack_30c);
  return piVar12;
}


