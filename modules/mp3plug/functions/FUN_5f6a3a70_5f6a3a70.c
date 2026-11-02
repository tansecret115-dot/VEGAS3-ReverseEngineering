/* Module: mp3plug.dll
   Function: FUN_5f6a3a70
   Address: 5f6a3a70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5f6a3a70(undefined4 *param_1,double *param_2,uint param_3,uint *param_4,double *param_5,
            uint param_6,uint *param_7)

{
  double dVar1;
  byte bVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  double *pdVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  int iVar9;
  undefined *puVar10;
  HGLOBAL pvVar11;
  LPVOID pvVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  double *pdVar16;
  bool bVar17;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar18;
  float10 extraout_ST0_01;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  UINT UVar19;
  uint local_10;
  uint local_c;
  uint local_8;
  
  pdVar6 = param_2;
  puVar5 = param_1;
  puVar4 = (undefined4 *)param_1[2];
  local_c = 0;
  local_8 = 0;
  if ((param_1[6] == 0) && (param_1[7] == 0x3ff00000)) {
    if (param_2 == param_5) {
      local_c = param_6;
      local_8 = param_3;
      uVar15 = 0;
    }
    else {
      if ((int)param_6 < (int)param_3) {
        param_3 = param_6;
      }
      iVar9 = FUN_5f6a5f30(*param_1);
      uVar13 = iVar9 * param_1[1] * param_3;
      for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)param_2 = *(undefined4 *)param_5;
        param_5 = (double *)((int)param_5 + 4);
        param_2 = (double *)((int)param_2 + 4);
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)param_2 = *(undefined1 *)param_5;
        param_5 = (double *)((int)param_5 + 1);
        param_2 = (double *)((int)param_2 + 1);
      }
      uVar15 = 0;
      local_c = param_3;
      local_8 = param_3;
    }
    goto LAB_5f6a46f3;
  }
  if (_DAT_5f72c7c8 <= *(double *)(param_1 + 6)) {
    if ((param_2 == param_5) && (param_1[0x2e] == 0)) {
      puVar10 = FUN_5f6ae070(*param_1,*param_1);
      param_1[0x2e] = puVar10;
      iVar9 = FUN_5f6a5f30(*param_1);
      param_1[0x2d] = iVar9 * param_1[1];
    }
  }
  else {
    iVar9 = ftol();
    if ((double)iVar9 == *(double *)(param_1 + 6)) {
      param_1 = (undefined4 *)0x1;
      puVar4 = param_1;
    }
  }
  while( true ) {
    param_1 = puVar4;
    iVar9 = 0;
    for (dVar1 = *(double *)(puVar5 + 8); dVar1 <= (double)(int)param_6 - _DAT_5f72c7c8;
        dVar1 = dVar1 + *(double *)(puVar5 + 10)) {
      iVar9 = iVar9 + 1;
    }
    if ((iVar9 <= (int)param_3) || ((int)param_6 < 1)) break;
    param_6 = param_6 - 1;
    puVar4 = param_1;
  }
  if (puVar5[0x2e] != 0) {
    uVar14 = puVar5[0x2d] * param_6;
    if ((uint)puVar5[0x30] <= uVar14 && uVar14 - puVar5[0x30] != 0) {
      puVar5[0x30] = uVar14;
      if ((LPCVOID)puVar5[0x2f] == (LPCVOID)0x0) {
        pvVar11 = GlobalAlloc(2,uVar14);
      }
      else {
        pvVar11 = GlobalHandle((LPCVOID)puVar5[0x2f]);
        GlobalUnlock(pvVar11);
        UVar19 = 2;
        pvVar11 = GlobalHandle((LPCVOID)puVar5[0x2f]);
        pvVar11 = GlobalReAlloc(pvVar11,uVar14,UVar19);
      }
      pvVar12 = GlobalLock(pvVar11);
      puVar5[0x2f] = pvVar12;
      if (pvVar12 == (LPVOID)0x0) {
        uVar15 = 0x8007000e;
        goto LAB_5f6a46f3;
      }
    }
    (*(code *)puVar5[0x2e])(puVar5[0x2f],param_5,puVar5[1] * param_6,0x3f800000);
    param_5 = (double *)puVar5[0x2f];
  }
  if (puVar5[0x31] != 0) {
    uVar14 = puVar5[0x2d] * param_3;
    if ((uint)puVar5[0x33] <= uVar14 && uVar14 - puVar5[0x33] != 0) {
      puVar5[0x33] = uVar14;
      if ((LPCVOID)puVar5[0x32] == (LPCVOID)0x0) {
        pvVar11 = GlobalAlloc(2,uVar14);
      }
      else {
        pvVar11 = GlobalHandle((LPCVOID)puVar5[0x32]);
        GlobalUnlock(pvVar11);
        UVar19 = 2;
        pvVar11 = GlobalHandle((LPCVOID)puVar5[0x32]);
        pvVar11 = GlobalReAlloc(pvVar11,uVar14,UVar19);
      }
      pvVar12 = GlobalLock(pvVar11);
      puVar5[0x32] = pvVar12;
      if (pvVar12 == (LPVOID)0x0) {
        uVar15 = 0x8007000e;
        goto LAB_5f6a46f3;
      }
    }
    param_2 = (double *)puVar5[0x32];
  }
  if ((puVar5[3] != 0) && (*(double *)(puVar5 + 6) < _DAT_5f72c7c8)) {
    if (puVar5[0x2c] == 0x20) {
      FUN_5f6c4920((float *)param_5,(int)param_5,param_6,puVar5[1],(int)(puVar5 + 0x34));
    }
    else {
      FUN_5f6c4a50(param_5,(int)param_5,param_6,puVar5[1],(int)(puVar5 + 0x34));
    }
  }
  uVar15 = 0x80004001;
  if (param_1 == (undefined4 *)0x1) {
    switch(puVar5[0x2c]) {
    case 0x10:
      param_3 = 0;
      uVar14 = 0;
      if (param_6 != 0) {
        if (puVar5[1] == 2) {
          bVar2 = *(byte *)((int)param_5 + param_6 * 2 + -1);
          fVar18 = (float10)*(byte *)((int)param_5 + param_6 * 2 + -2);
          bVar17 = *(double *)(puVar5 + 8) < _DAT_5f7349d0;
          pdVar16 = param_2;
          if (bVar17) {
            uVar7 = ftol();
            *(undefined1 *)param_2 = uVar7;
            uVar7 = ftol();
            *(undefined1 *)((int)param_2 + 1) = uVar7;
            pdVar16 = (double *)((int)param_2 + 2);
            *(double *)(puVar5 + 8) = *(double *)(puVar5 + 10) + *(double *)(puVar5 + 8);
            fVar18 = extraout_ST1;
          }
          param_3 = (uint)bVar17;
          *(double *)(puVar5 + 0xc) = (double)fVar18;
          *(double *)(puVar5 + 0x14) = (double)bVar2;
          uVar14 = _controlfp(0,0);
          _controlfp(0x300,0x300);
          dVar1 = *(double *)(puVar5 + 8);
          while (dVar1 < (double)(int)(param_6 - 1)) {
            iVar9 = (int)ROUND(*(double *)(puVar5 + 8));
            if (_DAT_5f7349d0 == *(double *)(puVar5 + 8) - (double)iVar9) {
              *(undefined1 *)pdVar16 = *(undefined1 *)((int)param_5 + iVar9 * 2);
              uVar7 = *(undefined1 *)((int)param_5 + iVar9 * 2 + 1);
            }
            else {
              uVar7 = ftol();
              *(undefined1 *)pdVar16 = uVar7;
              uVar7 = ftol();
            }
            *(undefined1 *)((int)pdVar16 + 1) = uVar7;
            dVar1 = *(double *)(puVar5 + 10) + *(double *)(puVar5 + 8);
            pdVar16 = (double *)((int)pdVar16 + 2);
            param_3 = param_3 + 1;
            *(double *)(puVar5 + 8) = dVar1;
          }
LAB_5f6a408b:
          _controlfp(uVar14,0xffffffff);
        }
        else if (puVar5[1] == 1) {
          fVar18 = (float10)*(byte *)((int)param_5 + (param_6 - 1));
          pdVar16 = param_2;
          if (*(double *)(puVar5 + 8) < _DAT_5f7349d0) {
            do {
              uVar7 = ftol();
              *(undefined1 *)pdVar16 = uVar7;
              dVar1 = *(double *)(puVar5 + 8);
              pdVar16 = (double *)((int)pdVar16 + 1);
              param_3 = param_3 + 1;
              *(double *)(puVar5 + 8) = *(double *)(puVar5 + 10) + dVar1;
              fVar18 = extraout_ST0;
            } while (*(double *)(puVar5 + 10) + dVar1 < _DAT_5f7349d0);
          }
          *(double *)(puVar5 + 0xc) = (double)fVar18;
          uVar14 = _controlfp(0,0);
          _controlfp(0x300,0x300);
          dVar1 = *(double *)(puVar5 + 8);
          while (dVar1 <= (double)(int)(param_6 - 1)) {
            if (_DAT_5f7349d0 ==
                *(double *)(puVar5 + 8) - (double)(int)ROUND(*(double *)(puVar5 + 8))) {
              uVar7 = *(undefined1 *)((int)ROUND(*(double *)(puVar5 + 8)) + (int)param_5);
            }
            else {
              uVar7 = ftol();
            }
            *(undefined1 *)pdVar16 = uVar7;
            dVar1 = *(double *)(puVar5 + 10) + *(double *)(puVar5 + 8);
            pdVar16 = (double *)((int)pdVar16 + 1);
            param_3 = param_3 + 1;
            *(double *)(puVar5 + 8) = dVar1;
          }
          goto LAB_5f6a408b;
        }
        *(double *)(puVar5 + 8) = *(double *)(puVar5 + 8) - (double)(int)param_6;
        uVar14 = param_6;
      }
      local_8 = param_3;
      uVar15 = 0;
      local_c = uVar14;
      break;
    case 0x11:
      param_3 = 0;
      uVar14 = 0;
      if (param_6 != 0) {
        if (puVar5[1] == 2) {
          sVar3 = *(short *)((int)param_5 + param_6 * 4 + -2);
          fVar18 = (float10)(int)*(short *)((int)param_5 + param_6 * 4 + -4);
          bVar17 = *(double *)(puVar5 + 8) < _DAT_5f7349d0;
          pdVar16 = param_2;
          if (bVar17) {
            uVar8 = ftol();
            *(undefined2 *)param_2 = uVar8;
            uVar8 = ftol();
            *(undefined2 *)((int)param_2 + 2) = uVar8;
            pdVar16 = (double *)((int)param_2 + 4);
            *(double *)(puVar5 + 8) = *(double *)(puVar5 + 10) + *(double *)(puVar5 + 8);
            fVar18 = extraout_ST1_00;
          }
          param_3 = (uint)bVar17;
          *(double *)(puVar5 + 0xc) = (double)fVar18;
          *(double *)(puVar5 + 0x14) = (double)(int)sVar3;
          local_10 = _controlfp(0,0);
          _controlfp(0x300,0x300);
          dVar1 = *(double *)(puVar5 + 8);
          while (dVar1 < (double)(int)(param_6 - 1)) {
            iVar9 = (int)ROUND(*(double *)(puVar5 + 8));
            if (_DAT_5f7349d0 == *(double *)(puVar5 + 8) - (double)iVar9) {
              *(undefined2 *)pdVar16 = *(undefined2 *)((int)param_5 + iVar9 * 4);
              uVar8 = *(undefined2 *)((int)param_5 + iVar9 * 4 + 2);
            }
            else {
              uVar8 = ftol();
              *(undefined2 *)pdVar16 = uVar8;
              uVar8 = ftol();
            }
            *(undefined2 *)((int)pdVar16 + 2) = uVar8;
            dVar1 = *(double *)(puVar5 + 10) + *(double *)(puVar5 + 8);
            pdVar16 = (double *)((int)pdVar16 + 4);
            param_3 = param_3 + 1;
            *(double *)(puVar5 + 8) = dVar1;
          }
LAB_5f6a436e:
          _controlfp(local_10,0xffffffff);
        }
        else if (puVar5[1] == 1) {
          fVar18 = (float10)(int)*(short *)((int)param_5 + param_6 * 2 + -2);
          pdVar16 = param_2;
          if (*(double *)(puVar5 + 8) < _DAT_5f7349d0) {
            do {
              uVar8 = ftol();
              *(undefined2 *)pdVar16 = uVar8;
              dVar1 = *(double *)(puVar5 + 8);
              pdVar16 = (double *)((int)pdVar16 + 2);
              param_3 = param_3 + 1;
              *(double *)(puVar5 + 8) = *(double *)(puVar5 + 10) + dVar1;
              fVar18 = extraout_ST0_00;
            } while (*(double *)(puVar5 + 10) + dVar1 < _DAT_5f7349d0);
          }
          *(double *)(puVar5 + 0xc) = (double)fVar18;
          local_10 = _controlfp(0,0);
          _controlfp(0x300,0x300);
          dVar1 = *(double *)(puVar5 + 8);
          while (dVar1 <= (double)(int)(param_6 - 1)) {
            if (_DAT_5f7349d0 ==
                *(double *)(puVar5 + 8) - (double)(int)ROUND(*(double *)(puVar5 + 8))) {
              *(undefined2 *)pdVar16 =
                   *(undefined2 *)((int)param_5 + (int)ROUND(*(double *)(puVar5 + 8)) * 2);
            }
            else {
              uVar8 = ftol();
              *(undefined2 *)pdVar16 = uVar8;
            }
            dVar1 = *(double *)(puVar5 + 10) + *(double *)(puVar5 + 8);
            pdVar16 = (double *)((int)pdVar16 + 2);
            param_3 = param_3 + 1;
            *(double *)(puVar5 + 8) = dVar1;
          }
          goto LAB_5f6a436e;
        }
        *(double *)(puVar5 + 8) = *(double *)(puVar5 + 8) - (double)(int)param_6;
        uVar14 = param_6;
      }
      local_8 = param_3;
      uVar15 = 0;
      local_c = uVar14;
      break;
    case 0x13:
      uVar15 = FUN_5f6a4980((int)puVar5,(undefined4 *)param_2,param_3,&local_8,(int)param_5,param_6,
                            (int *)&local_c);
      break;
    case 0x20:
      uVar15 = FUN_5f6a4c50((int)puVar5,(float *)param_2,param_3,&local_8,(float *)param_5,param_6,
                            (int *)&local_c);
      break;
    case 0x21:
      uVar15 = FUN_5f6a4ed0((int)puVar5,param_2,param_3,&local_8,param_5,param_6,(int *)&local_c);
      break;
    case 0x30:
      param_3 = 0;
      uVar14 = 0;
      if (param_6 != 0) {
        if (puVar5[1] == 2) {
          fVar18 = (float10)*(int *)(param_5 + (param_6 - 1));
          iVar9 = *(int *)((int)param_5 + param_6 * 8 + -4);
          bVar17 = *(double *)(puVar5 + 8) < _DAT_5f7349d0;
          pdVar16 = param_2;
          if (bVar17) {
            uVar15 = ftol();
            *(undefined4 *)param_2 = uVar15;
            uVar15 = ftol();
            *(undefined4 *)((int)param_2 + 4) = uVar15;
            pdVar16 = param_2 + 1;
            *(double *)(puVar5 + 8) = *(double *)(puVar5 + 10) + *(double *)(puVar5 + 8);
            fVar18 = extraout_ST1_01;
          }
          param_3 = (uint)bVar17;
          *(double *)(puVar5 + 0xc) = (double)fVar18;
          *(double *)(puVar5 + 0x14) = (double)iVar9;
          local_10 = _controlfp(0,0);
          _controlfp(0x300,0x300);
          dVar1 = *(double *)(puVar5 + 8);
          while (dVar1 < (double)(int)(param_6 - 1)) {
            iVar9 = (int)ROUND(*(double *)(puVar5 + 8));
            if (_DAT_5f7349d0 == *(double *)(puVar5 + 8) - (double)iVar9) {
              *(undefined4 *)pdVar16 = *(undefined4 *)(param_5 + iVar9);
              uVar15 = *(undefined4 *)((int)param_5 + iVar9 * 8 + 4);
            }
            else {
              uVar15 = ftol();
              *(undefined4 *)pdVar16 = uVar15;
              uVar15 = ftol();
            }
            *(undefined4 *)((int)pdVar16 + 4) = uVar15;
            dVar1 = *(double *)(puVar5 + 10) + *(double *)(puVar5 + 8);
            pdVar16 = pdVar16 + 1;
            param_3 = param_3 + 1;
            *(double *)(puVar5 + 8) = dVar1;
          }
LAB_5f6a4615:
          _controlfp(local_10,0xffffffff);
        }
        else if (puVar5[1] == 1) {
          fVar18 = (float10)*(int *)((int)param_5 + param_6 * 4 + -4);
          pdVar16 = param_2;
          if (*(double *)(puVar5 + 8) < _DAT_5f7349d0) {
            do {
              uVar15 = ftol();
              *(undefined4 *)pdVar16 = uVar15;
              dVar1 = *(double *)(puVar5 + 8);
              pdVar16 = (double *)((int)pdVar16 + 4);
              param_3 = param_3 + 1;
              *(double *)(puVar5 + 8) = *(double *)(puVar5 + 10) + dVar1;
              fVar18 = extraout_ST0_01;
            } while (*(double *)(puVar5 + 10) + dVar1 < _DAT_5f7349d0);
          }
          *(double *)(puVar5 + 0xc) = (double)fVar18;
          local_10 = _controlfp(0,0);
          _controlfp(0x300,0x300);
          dVar1 = *(double *)(puVar5 + 8);
          while (dVar1 <= (double)(int)(param_6 - 1)) {
            if (_DAT_5f7349d0 ==
                *(double *)(puVar5 + 8) - (double)(int)ROUND(*(double *)(puVar5 + 8))) {
              *(undefined4 *)pdVar16 =
                   *(undefined4 *)((int)param_5 + (int)ROUND(*(double *)(puVar5 + 8)) * 4);
            }
            else {
              uVar15 = ftol();
              *(undefined4 *)pdVar16 = uVar15;
            }
            dVar1 = *(double *)(puVar5 + 10) + *(double *)(puVar5 + 8);
            pdVar16 = (double *)((int)pdVar16 + 4);
            param_3 = param_3 + 1;
            *(double *)(puVar5 + 8) = dVar1;
          }
          goto LAB_5f6a4615;
        }
        *(double *)(puVar5 + 8) = *(double *)(puVar5 + 8) - (double)(int)param_6;
        uVar14 = param_6;
      }
      local_8 = param_3;
      uVar15 = 0;
      local_c = uVar14;
    }
  }
  else if (param_1 == (undefined4 *)0x2) {
    if (puVar5[0x2c] == 0x20) {
      uVar15 = FUN_5f6a5170((int)puVar5,(int)param_2,param_3,(int *)&local_8,(int)param_5,param_6,
                            (int *)&local_c);
    }
    else if (puVar5[0x2c] == 0x21) {
      uVar15 = FUN_5f6a5460((int)puVar5,(int)param_2,param_3,(int *)&local_8,(int)param_5,param_6,
                            (int *)&local_c);
    }
  }
  else if (param_1 == (undefined4 *)0x3) {
    if (puVar5[0x2c] == 0x20) {
      uVar15 = FUN_5f6a5760((int)puVar5,(int)param_2,param_3,(int *)&local_8,(int)param_5,param_6,
                            (int *)&local_c);
    }
    else if (puVar5[0x2c] == 0x21) {
      uVar15 = FUN_5f6a5a60((int)puVar5,(int)param_2,param_3,(int *)&local_8,(int)param_5,param_6,
                            (int *)&local_c);
    }
  }
  if ((puVar5[3] != 0) && (_DAT_5f72c7c8 < *(double *)(puVar5 + 6))) {
    if (puVar5[0x2c] == 0x20) {
      FUN_5f6c4920((float *)param_2,(int)param_2,local_8,puVar5[1],(int)(puVar5 + 0x34));
    }
    else {
      FUN_5f6c4a50(param_2,(int)param_2,local_8,puVar5[1],(int)(puVar5 + 0x34));
    }
  }
  if ((code *)puVar5[0x31] != (code *)0x0) {
    (*(code *)puVar5[0x31])(pdVar6,param_2,puVar5[1] * local_8,0x3f800000);
  }
LAB_5f6a46f3:
  if (param_7 != (uint *)0x0) {
    *param_7 = local_c;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = local_8;
  }
  return uVar15;
}


