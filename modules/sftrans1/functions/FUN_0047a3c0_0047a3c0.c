/* Module: sftrans1.dll
   Function: FUN_0047a3c0
   Address: 0047a3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0047a3c0(int *param_1,double *param_2)

{
  double dVar1;
  undefined4 uVar2;
  HGLOBAL hMem;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  double *pdVar8;
  bool bVar9;
  bool bVar10;
  int local_380;
  int local_37c;
  undefined8 local_378;
  int iStack_370;
  int iStack_36c;
  undefined8 local_368;
  int iStack_360;
  int iStack_35c;
  int *local_354;
  double dStack_350;
  double dStack_348;
  double dStack_340;
  double dStack_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  int iStack_328;
  int iStack_324;
  double dStack_320;
  double dStack_318;
  double dStack_310;
  double dStack_308;
  undefined1 auStack_300 [16];
  undefined1 auStack_2f0 [16];
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined8 *local_2d8;
  undefined1 *local_2d4;
  int *local_1bc;
  int *local_1b8;
  double local_1b0;
  double local_1a8;
  int *local_1a0;
  undefined8 *local_19c;
  byte abStack_128 [80];
  undefined1 local_d8 [212];
  
  if (param_2 == (double *)0x0) {
    return 0x80004005;
  }
  local_354 = *(int **)((int)param_2 + 0x124);
  if (local_354 == (int *)0x0) {
    local_354 = param_1 + 0x18e;
    if ((*(byte *)(param_1 + 0x1e6) & 1) != 0) {
      local_2d4 = local_d8;
      local_2d8 = &local_378;
      local_378 = (double)(ulonglong)(uint)param_1[-0xe];
      local_1b8 = param_1 + 0x203;
      local_1b0 = (double)(longlong)local_378;
      local_1a0 = &local_380;
      local_378 = (double)(ulonglong)(uint)param_1[-0xf];
      local_1a8 = (double)(longlong)local_378;
      local_19c = &local_368;
      local_380 = 0;
      local_37c = 0;
      local_368 = 0.0;
      local_2e0 = 0;
      local_2dc = 0x3ff00000;
      local_1bc = local_354;
      (**(code **)(*param_1 + 0x34))(param_1,&local_2e0);
      param_1[0x1fc] = local_380;
      param_1[0x1fe] = (int)local_368;
      param_1[0x1fd] = local_37c;
      param_1[0x1ff] = local_368._4_4_;
    }
    if ((param_1[0x1e6] & 2U) == 0) {
      if ((param_1[0x1e6] & 4U) == 0) goto LAB_0047a643;
    }
    else {
      local_378 = (double)(ulonglong)(uint)param_1[-0xe];
      dVar1 = (double)(longlong)local_378;
      local_378 = (double)(ulonglong)(uint)param_1[-0xf];
      iVar4 = param_1[0x1ea];
      local_378 = (double)param_1[0x1ed] / (double)(longlong)local_378;
      if (iVar4 == 1) {
        dVar1 = ((double)(param_1[0x1e5] << 1) * _DAT_0055d670 + (double)param_1[0x1ec] / dVar1) -
                _DAT_00555908;
LAB_0047a58e:
        *(double *)(param_1 + 0x1ee) = dVar1;
      }
      else if (iVar4 == 2) {
        param_1[0x1ee] = 0;
        param_1[0x1ef] = 0;
      }
      else if (iVar4 == 3) {
        dVar1 = (_DAT_00555908 - (double)(param_1[0x1e5] << 1) * _DAT_0055d670) -
                (double)param_1[0x1ec] / dVar1;
        goto LAB_0047a58e;
      }
      iVar4 = param_1[0x1eb];
      if (iVar4 == 1) {
        *(double *)(param_1 + 0x1f0) =
             ((double)(param_1[0x1e5] << 1) * _DAT_0055d670 + local_378) - _DAT_00555908;
      }
      else if (iVar4 == 2) {
        param_1[0x1f0] = 0;
        param_1[0x1f1] = 0;
      }
      else if (iVar4 == 3) {
        *(double *)(param_1 + 0x1f0) =
             (_DAT_00555908 - (double)(param_1[0x1e5] << 1) * _DAT_0055d670) - local_378;
      }
    }
    *(double *)(param_1 + 0x1fc) =
         (*(double *)(param_1 + 0x1ee) - *(double *)(param_1 + 0x1fc)) *
         *(double *)(param_1 + 0x1e8) + *(double *)(param_1 + 0x1fc);
    *(double *)(param_1 + 0x1fe) =
         (*(double *)(param_1 + 0x1f0) - *(double *)(param_1 + 0x1fe)) *
         *(double *)(param_1 + 0x1e8) + *(double *)(param_1 + 0x1fe);
  }
LAB_0047a643:
  **(undefined4 **)((int)param_2 + 0xc) = *(undefined4 *)(param_2 + 1);
  *(int *)**(undefined4 **)((int)param_2 + 0xc) = local_354[0x73];
  *(int *)(**(int **)((int)param_2 + 0xc) + 4) = local_354[0x72];
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 4) = 0;
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0x6c) = 1;
  *(int *)(param_2 + 0xe) = local_354[4];
  param_2[0xc] = *(double *)(local_354 + 0x1a) * _DAT_00563048;
  piVar6 = local_354 + 6;
  pdVar8 = param_2 + 2;
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(int *)pdVar8 = *piVar6;
    piVar6 = piVar6 + 1;
    pdVar8 = (double *)((int)pdVar8 + 4);
  }
  if (local_354[3] == 0) {
    *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0x44) = 0x40;
  }
  else if (local_354[3] == 1) {
    *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0x44) = 0x80;
  }
  else {
    *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0x44) = 0x100;
  }
  if (*(int *)((int)param_2 + 0x124) == 0) {
    *(uint *)(*(int *)((int)param_2 + 0xc) + 0x44) =
         *(uint *)(*(int *)((int)param_2 + 0xc) + 0x44) | 0x10;
    iVar4 = *(int *)((int)param_2 + 0xc);
    *(int *)(iVar4 + 0x48) = local_354[0x6e];
    *(int *)(iVar4 + 0x4c) = local_354[0x6f];
    iVar5 = *(int *)((int)param_2 + 0xc);
LAB_0047a6f0:
    *(uint *)(iVar5 + 0x44) = *(uint *)(iVar5 + 0x44) | 0x202;
    iVar4 = *(int *)((int)param_2 + 0xc);
    *(int *)(iVar4 + 0x50) = local_354[0x70];
    *(int *)(iVar4 + 0x54) = local_354[0x71];
  }
  else {
    iVar4 = local_354[0x68];
    if (iVar4 == 1) {
      *(uint *)(*(int *)((int)param_2 + 0xc) + 0x44) =
           *(uint *)(*(int *)((int)param_2 + 0xc) + 0x44) | 8;
      dVar1 = (double)(local_354[0x57] << 1) * _DAT_0055d670 - _DAT_00555908;
LAB_0047a7ae:
      *(double *)(*(int *)((int)param_2 + 0xc) + 0x48) = dVar1;
    }
    else if (iVar4 == 2) {
      *(uint *)(*(int *)((int)param_2 + 0xc) + 0x44) =
           *(uint *)(*(int *)((int)param_2 + 0xc) + 0x44) | 0x10;
      iVar4 = *(int *)((int)param_2 + 0xc);
      *(undefined4 *)(iVar4 + 0x48) = 0;
      *(undefined4 *)(iVar4 + 0x4c) = 0;
    }
    else {
      iVar5 = *(int *)((int)param_2 + 0xc);
      if (iVar4 == 3) {
        *(uint *)(iVar5 + 0x44) = *(uint *)(iVar5 + 0x44) | 0x20;
        dVar1 = _DAT_00555908 - (double)(local_354[0x57] << 1) * _DAT_0055d670;
        goto LAB_0047a7ae;
      }
      *(uint *)(iVar5 + 0x44) = *(uint *)(iVar5 + 0x44) | 0x10;
      iVar4 = *(int *)((int)param_2 + 0xc);
      *(int *)(iVar4 + 0x48) = local_354[0x6e];
      *(int *)(iVar4 + 0x4c) = local_354[0x6f];
    }
    iVar4 = local_354[0x69];
    if (iVar4 == 1) {
      *(uint *)(*(int *)((int)param_2 + 0xc) + 0x44) =
           *(uint *)(*(int *)((int)param_2 + 0xc) + 0x44) | 0x201;
      dVar1 = (double)(local_354[0x57] << 1) * _DAT_0055d670 - _DAT_00555908;
    }
    else {
      if (iVar4 == 2) {
        *(uint *)(*(int *)((int)param_2 + 0xc) + 0x44) =
             *(uint *)(*(int *)((int)param_2 + 0xc) + 0x44) | 0x202;
        iVar4 = *(int *)((int)param_2 + 0xc);
        *(undefined4 *)(iVar4 + 0x50) = 0;
        *(undefined4 *)(iVar4 + 0x54) = 0;
        goto LAB_0047a83f;
      }
      iVar5 = *(int *)((int)param_2 + 0xc);
      if (iVar4 != 3) goto LAB_0047a6f0;
      *(uint *)(iVar5 + 0x44) = *(uint *)(iVar5 + 0x44) | 0x204;
      dVar1 = _DAT_00555908 - (double)(local_354[0x57] << 1) * _DAT_0055d670;
    }
    *(double *)(*(int *)((int)param_2 + 0xc) + 0x50) = dVar1;
  }
LAB_0047a83f:
  piVar6 = local_354 + 0x2c;
  pdVar8 = param_2 + 0xf;
  for (iVar4 = 0x2a; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(int *)pdVar8 = *piVar6;
    piVar6 = piVar6 + 1;
    pdVar8 = (double *)((int)pdVar8 + 4);
  }
  if ((*(int *)(param_2 + 0xf) == 0) && (*(int *)((int)param_2 + 0xcc) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)((int)param_2 + 0x74) = uVar2;
  *(int *)((int)param_2 + 0xac) = local_354[0x39];
  *(int *)(param_2 + 0x16) = local_354[0x3a];
  *(int *)((int)param_2 + 0xb4) = local_354[0x3b];
  *(int *)(param_2 + 0x17) = local_354[0x3c];
  *(int *)(param_2 + 0x1b) = local_354[0x44];
  *(int *)((int)param_2 + 0xdc) = local_354[0x45];
  *(int *)(param_2 + 0x1c) = local_354[0x46];
  *(int *)((int)param_2 + 0xe4) = local_354[0x47];
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0x70) = 1;
  iVar4 = *(int *)((int)param_2 + 0xc);
  *(int *)(iVar4 + 0x78) = local_354[0x28];
  *(int *)(iVar4 + 0x7c) = local_354[0x29];
  iVar4 = *(int *)((int)param_2 + 0xc);
  *(int *)(iVar4 + 0x80) = local_354[100];
  *(int *)(iVar4 + 0x84) = local_354[0x65];
  *(int *)(iVar4 + 0x88) = local_354[0x66];
  *(int *)(iVar4 + 0x8c) = local_354[0x67];
  iVar4 = *(int *)((int)param_2 + 0xc);
  *(int *)(iVar4 + 0x90) = local_354[0x1e];
  *(int *)(iVar4 + 0x94) = local_354[0x1f];
  *(int *)(iVar4 + 0x98) = local_354[0x20];
  *(int *)(iVar4 + 0x9c) = local_354[0x21];
  iVar4 = *(int *)((int)param_2 + 0xc);
  *(int *)(iVar4 + 0x10) = local_354[0x22];
  *(int *)(iVar4 + 0x14) = local_354[0x23];
  iVar4 = *(int *)((int)param_2 + 0xc);
  *(undefined4 *)(iVar4 + 0x18) = 0;
  *(undefined4 *)(iVar4 + 0x1c) = 0x3ff80000;
  iVar4 = *(int *)((int)param_2 + 0xc);
  *(int *)(iVar4 + 0x20) = local_354[0x24];
  *(int *)(iVar4 + 0x24) = local_354[0x25];
  if ((*(byte *)(local_354 + 0x58) & 1) == 0) {
    iVar4 = *(int *)((int)param_2 + 0xc);
    *(int *)(iVar4 + 0x28) = local_354[0x26];
    *(int *)(iVar4 + 0x2c) = local_354[0x27];
    local_378 = (double)(ulonglong)(uint)param_1[-0xf];
    *(double *)(*(int *)((int)param_2 + 0xc) + 0x30) = (double)(longlong)local_378 * _DAT_00563040;
  }
  else {
    iVar4 = *(int *)((int)param_2 + 0xc);
    *(undefined4 *)(iVar4 + 0x28) = 0;
    *(undefined4 *)(iVar4 + 0x2c) = 0x3ff00000;
    iVar4 = *(int *)((int)param_2 + 0xc);
    *(undefined4 *)(iVar4 + 0x30) = 0;
    *(undefined4 *)(iVar4 + 0x34) = 0x3ff00000;
  }
  *(int *)(*(int *)((int)param_2 + 0xc) + 0x38) = local_354[0x2a];
  *(int *)(*(int *)((int)param_2 + 0xc) + 0x3c) = local_354[0x2b];
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0x40) = 0x14;
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0xac) = 0;
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0xa8) = 0;
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0xa4) = 0;
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0xb0) = 0;
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0xbc) = 0x3f800000;
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0xb8) = 0x3f800000;
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0xb4) = 0x3f800000;
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0xc0) = 0x3f800000;
  if (*param_2 < _DAT_005610c8) {
    if (*param_2 < _DAT_0055f620) {
      *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0x58) = 0;
      *(undefined4 *)(param_2 + 0xd) = 0;
      *(undefined4 *)(param_2 + 0x24) = 0;
      *(undefined4 *)((int)param_2 + 0x6c) = 0;
      *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0xa0) = 0;
    }
    else {
      *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0x58) = 1;
      *(undefined4 *)(param_2 + 0xd) = 0x33333333;
      *(undefined4 *)(param_2 + 0x24) = 1;
      *(undefined4 *)((int)param_2 + 0x6c) = 0x3fe33333;
      *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0xa0) = 1;
    }
  }
  else {
    *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0x58) = 2;
    *(undefined4 *)(param_2 + 0x24) = 2;
    *(undefined4 *)(param_2 + 0xd) = 0x33333333;
    *(undefined4 *)((int)param_2 + 0x6c) = 0x3feb3333;
    *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0xa0) = 1;
  }
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0xc4) = 0;
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0x5c) = 0;
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0x60) = 0;
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 100) = 0;
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0x68) = 0;
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 200) = 0;
  *(int *)(*(int *)((int)param_2 + 0xc) + 8) = param_1[-0xe];
  *(int *)(*(int *)((int)param_2 + 0xc) + 0xc) = param_1[-0xf];
  if (*(int *)((int)param_2 + 0x124) == 0) {
    return 0;
  }
  local_380 = 0;
  if (local_354[0x68] == 0) {
    piVar6 = *(int **)(param_2 + 0x28);
    *piVar6 = local_354[0x6e];
    piVar6[1] = local_354[0x6f];
    piVar6 = *(int **)((int)param_2 + 0x144);
    *piVar6 = local_354[0x70];
    piVar6[1] = local_354[0x71];
  }
  else {
    if (*(int **)(param_2 + 0x25) == (int *)0x0) {
      return 0x80004005;
    }
    if (**(int **)(param_2 + 0x25) == 0) {
      hMem = GlobalAlloc(0x40,0x170);
      pvVar3 = GlobalLock(hMem);
      if (pvVar3 == (LPVOID)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0053af90();
      }
      **(undefined4 **)(param_2 + 0x25) = uVar2;
      if (**(int **)(param_2 + 0x25) == 0) {
        return 0x8007000e;
      }
    }
    local_380 = FUN_0053f9e0(*(undefined4 *)((int)param_2 + 0xc),&local_378,
                             *(undefined4 *)(param_2 + 0x28),*(undefined4 *)((int)param_2 + 0x144),
                             &dStack_320);
    pbVar7 = abStack_128;
    for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
      pbVar7[0] = 0;
      pbVar7[1] = 0;
      pbVar7[2] = 0;
      pbVar7[3] = 0;
      pbVar7 = pbVar7 + 4;
    }
    if ((*(int *)(param_2 + 0xe) != 0) && (_DAT_00555910 != param_2[0xc])) {
      iVar5 = 0x50;
      bVar9 = false;
      iVar4 = 0;
      bVar10 = true;
      pbVar7 = abStack_128;
      pdVar8 = param_2 + 2;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar9 = *pbVar7 < *(byte *)pdVar8;
        bVar10 = *pbVar7 == *(byte *)pdVar8;
        pbVar7 = pbVar7 + 1;
        pdVar8 = (double *)((int)pdVar8 + 1);
      } while (bVar10);
      if (!bVar10) {
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      }
      if (iVar4 != 0) {
        FUN_00482a10();
        iStack_328 = iStack_370 - (int)local_378;
        iStack_324 = iStack_36c - local_378._4_4_;
        uStack_330 = 0;
        uStack_32c = 0;
        FUN_004834e0(&local_378,&uStack_330,param_2 + 2,*(undefined4 *)(param_2 + 0xc),
                     *(undefined4 *)((int)param_2 + 100),*(undefined4 *)(param_2 + 0xd),
                     *(undefined4 *)((int)param_2 + 0x6c));
        iStack_360 = *(int *)(*(int *)((int)param_2 + 0xc) + 8) + -(int)local_378;
        local_368 = (double)CONCAT44(-local_378._4_4_,-(int)local_378);
        iStack_35c = *(int *)(*(int *)((int)param_2 + 0xc) + 0xc) + -local_378._4_4_;
        FUN_00482a30(&local_368,auStack_2f0,auStack_300,1,0,0);
        dStack_350 = dStack_320 - (double)(int)local_378;
        dStack_340 = dStack_310 - (double)(int)local_378;
        dStack_348 = dStack_318 - (double)local_378._4_4_;
        dStack_338 = dStack_308 - (double)local_378._4_4_;
        FUN_00482a30(&local_368,auStack_2f0,auStack_300,1,0,&dStack_350);
        dStack_350 = (double)(int)local_378 + dStack_350;
        iVar4 = local_354[0x68];
        dStack_340 = (double)(int)local_378 + dStack_340;
        dStack_348 = (double)local_378._4_4_ + dStack_348;
        dStack_338 = (double)local_378._4_4_ + dStack_338;
        if (iVar4 == 1) {
          dVar1 = *(double *)(*(int *)((int)param_2 + 0xc) + 0x48) -
                  ((dStack_350 + dStack_350) / (double)*(int *)(*(int *)((int)param_2 + 0xc) + 8) -
                  _DAT_00555908);
        }
        else if (iVar4 == 2) {
          dVar1 = (double)*(int *)(*(int *)((int)param_2 + 0xc) + 8);
          dVar1 = *(double *)(*(int *)((int)param_2 + 0xc) + 0x48) -
                  ((dStack_340 + dStack_350 + dStack_340 + dStack_350) / (dVar1 + dVar1) -
                  _DAT_00555908);
        }
        else {
          dVar1 = local_378;
          if (iVar4 == 3) {
            dVar1 = *(double *)(*(int *)((int)param_2 + 0xc) + 0x48) -
                    ((dStack_340 + dStack_340) / (double)*(int *)(*(int *)((int)param_2 + 0xc) + 8)
                    - _DAT_00555908);
          }
        }
        **(double **)(param_2 + 0x28) = dVar1 + **(double **)(param_2 + 0x28);
        *(double *)(*(int *)((int)param_2 + 0xc) + 0x48) =
             dVar1 + *(double *)(*(int *)((int)param_2 + 0xc) + 0x48);
        iVar4 = local_354[0x69];
        if (iVar4 == 1) {
          dVar1 = *(double *)(*(int *)((int)param_2 + 0xc) + 0x50) -
                  ((dStack_348 + dStack_348) / (double)*(int *)(*(int *)((int)param_2 + 0xc) + 0xc)
                  - _DAT_00555908);
        }
        else if (iVar4 == 2) {
          dVar1 = (double)*(int *)(*(int *)((int)param_2 + 0xc) + 0xc);
          dVar1 = *(double *)(*(int *)((int)param_2 + 0xc) + 0x50) -
                  ((dStack_338 + dStack_348 + dStack_338 + dStack_348) / (dVar1 + dVar1) -
                  _DAT_00555908);
        }
        else {
          dVar1 = local_378;
          if (iVar4 == 3) {
            dVar1 = *(double *)(*(int *)((int)param_2 + 0xc) + 0x50) -
                    ((dStack_338 + dStack_338) /
                     (double)*(int *)(*(int *)((int)param_2 + 0xc) + 0xc) - _DAT_00555908);
          }
        }
        **(double **)((int)param_2 + 0x144) = dVar1 + **(double **)((int)param_2 + 0x144);
        *(double *)(*(int *)((int)param_2 + 0xc) + 0x50) =
             dVar1 + *(double *)(*(int *)((int)param_2 + 0xc) + 0x50);
        FUN_00482a20();
      }
    }
  }
  local_368 = param_2[0x26] / param_2[0x27];
  local_378 = (double)(ulonglong)(uint)param_1[-0xe];
  dVar1 = (double)(longlong)local_378;
  local_378 = (double)(ulonglong)(uint)param_1[-0xf];
  local_378 = dVar1 / (double)(longlong)local_378;
  if (local_368 - local_378 <= _DAT_00555910) {
    if (local_368 - local_378 < _DAT_00555910) {
      param_2[0x27] = (local_368 * param_2[0x27]) / local_378;
    }
  }
  else {
    param_2[0x26] = (local_378 * param_2[0x26]) / local_368;
  }
  uVar2 = ftol();
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 8) = uVar2;
  uVar2 = ftol();
  *(undefined4 *)(*(int *)((int)param_2 + 0xc) + 0xc) = uVar2;
  iVar4 = *(int *)((int)param_2 + 0xc);
  local_378 = (double)(ulonglong)(uint)param_1[-0xf];
  *(double *)(iVar4 + 0x30) =
       ((double)*(int *)(iVar4 + 0xc) / (double)(longlong)local_378) * *(double *)(iVar4 + 0x30);
  return local_380;
}


