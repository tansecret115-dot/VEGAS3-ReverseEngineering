/* Module: rmme3260.dll
   Function: FUN_6623db90
   Address: 6623db90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_6623db90(int *param_1)

{
  int *this;
  char cVar1;
  int *piVar2;
  double dVar3;
  undefined4 uVar4;
  int iVar5;
  HWND pHVar6;
  void *this_00;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  HWND pHVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  HWND pHVar15;
  char local_138 [256];
  undefined4 local_38;
  undefined4 local_34;
  tagPOINT local_30;
  int local_28;
  int local_24;
  undefined *local_20;
  int local_1c;
  HWND local_18;
  int *local_14;
  uint local_10;
  undefined8 local_c;
  
  piVar2 = param_1;
  iVar5 = param_1[0x14];
  if (iVar5 != 0) {
    uVar4 = (**(code **)(*(int *)(iVar5 + 0x18) + 0xc))(iVar5 + 0x18);
    return uVar4;
  }
  iVar5 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar5 == 0) {
    pHVar6 = GetParent((HWND)piVar2[0x4b]);
    piVar2[0x5b] = (int)pHVar6;
    local_30.x = 0;
    local_30.y = 0;
    MapWindowPoints((HWND)piVar2[0x4b],pHVar6,&local_30,1);
    piVar2[0x57] = local_30.x;
    piVar2[0x58] = local_30.y;
    piVar2[0x59] = piVar2[0x25];
    piVar2[0x5a] = piVar2[0x26];
    piVar2[0x39] = 1;
    if (DAT_6627cfec == 0) {
      this_00 = operator_new(0x14);
      if (this_00 == (void *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = (undefined4 *)FUN_66242380(this_00,piVar2 + -6);
      }
      piVar2[0x1c] = (int)puVar7;
      FUN_66242450(puVar7);
      FUN_66242520((int *)piVar2[0x1c]);
      pHVar15 = *(HWND *)piVar2[0x1c];
      pHVar6 = (HWND)piVar2[0x4b];
    }
    else {
      pHVar6 = (HWND)piVar2[0x4b];
      pHVar15 = (HWND)0x0;
    }
    SetParent(pHVar6,pHVar15);
    FUN_6623f660((int)(piVar2 + -6));
    param_1 = (int *)0x0;
    local_14 = (int *)0x0;
    local_10 = 0;
    iVar5 = (*(code *)**(undefined4 **)piVar2[0x1f])
                      ((undefined4 *)piVar2[0x1f],&DAT_6626abb8,&param_1);
    if (iVar5 == 0) {
      uVar11 = 0xffffffff;
      pcVar8 = s_FullScreenData_6626fd54;
      do {
        pcVar14 = pcVar8;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar14 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar14;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      pcVar8 = pcVar14 + -uVar11;
      pcVar14 = local_138;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar14 = pcVar14 + 4;
      }
      local_14 = (int *)0x0;
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar14 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar14 = pcVar14 + 1;
      }
      uVar11 = 0xffffffff;
      pcVar8 = &DAT_6626fdc0;
      do {
        pcVar14 = pcVar8;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar14 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar14;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      iVar5 = -1;
      pcVar8 = local_138;
      do {
        pcVar13 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar13 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar13;
      } while (cVar1 != '\0');
      pcVar8 = pcVar14 + -uVar11;
      pcVar14 = pcVar13 + -1;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar14 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar14 = pcVar14 + 1;
      }
      uVar11 = 0xffffffff;
      pcVar8 = s_PostageStamp_6626fda0;
      do {
        pcVar14 = pcVar8;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar14 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar14;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      iVar5 = -1;
      pcVar8 = local_138;
      do {
        pcVar13 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar13 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar13;
      } while (cVar1 != '\0');
      pcVar8 = pcVar14 + -uVar11;
      pcVar14 = pcVar13 + -1;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar14 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar14 = pcVar14 + 1;
      }
      (**(code **)(*param_1 + 0xc))(param_1,local_138,&local_14);
      if (local_14 != (int *)0x0) {
        pcVar8 = (char *)(**(code **)(*local_14 + 0x1c))(local_14);
        iVar5 = atoi(pcVar8);
        local_10 = (uint)(iVar5 == 1);
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
    }
    if (local_10 == 0) {
      local_10 = GetSystemMetrics(0);
      local_c = (double)(int)local_10 / (double)piVar2[0x25];
      local_10 = GetSystemMetrics(1);
      dVar3 = (double)(int)local_10 / (double)piVar2[0x26];
    }
    else {
      iVar5 = GetSystemMetrics(0);
      if ((piVar2[0x25] * 2 - iVar5 == 0 || piVar2[0x25] * 2 < iVar5) &&
         (iVar5 = GetSystemMetrics(1), piVar2[0x26] * 2 - iVar5 == 0 || piVar2[0x26] * 2 < iVar5)) {
        local_c = 2.0;
        dVar3 = _DAT_6626c690;
      }
      else {
        local_c = 1.0;
        dVar3 = _DAT_6626c698;
      }
    }
    if (local_c < dVar3) {
      dVar3 = local_c;
    }
    local_c = dVar3;
    iVar5 = GetSystemMetrics(0);
    iVar9 = ftol();
    piVar2[0x5e] = (iVar5 - iVar9) / 2;
    iVar5 = GetSystemMetrics(1);
    iVar9 = ftol();
    piVar2[0x5f] = (iVar5 - iVar9) / 2;
    local_38 = ftol();
    local_34 = ftol();
    piVar2[0x38] = 1;
    iVar5 = GetSystemMetrics(0);
    local_c = (double)CONCAT44(local_c._4_4_,iVar5);
    iVar5 = GetSystemMetrics(1);
    pHVar6 = (HWND)piVar2[0x4b];
    local_c = (double)CONCAT44(iVar5,(int)local_c);
    pHVar15 = GetParent(pHVar6);
    while (pHVar15 != (HWND)0x0) {
      pHVar10 = GetParent(pHVar15);
      pHVar6 = pHVar15;
      pHVar15 = pHVar10;
    }
    local_10 = GetWindowLongA(pHVar6,-0x14);
    local_10 = local_10 & 8;
    if (local_10 != 0) {
      FUN_662410b0(piVar2 + -6,pHVar6,(HWND)0xfffffffe,0,0,0,0,3);
    }
    this = piVar2 + -6;
    (**(code **)(piVar2[-6] + 0x30))(this,local_38,local_34);
    if (DAT_6627cfec == 0) {
      FUN_66240ee0(this,(HWND)piVar2[0x4b],0,0,(int)local_c,local_c._4_4_,0);
    }
    else {
      FUN_662410b0(this,(HWND)piVar2[0x4b],(HWND)0xffffffff,0,0,(int)local_c,local_c._4_4_,0);
    }
    FUN_66250e90(0x6627cf60);
    EnumChildWindows((HWND)piVar2[0x4b],FUN_6623db40,0);
    *(undefined4 *)(piVar2[0x15] + 0xfc) = 0;
    FUN_66248fe0(piVar2[0x4a]);
    FUN_6623c580(this);
    FUN_66249210(piVar2[0x4a]);
    FUN_66249100(piVar2[0x4a]);
    if (DAT_6627cf6c != 0) {
      local_28 = -(uint)(DAT_6627cf6c != 0);
      local_20 = &DAT_6627cf60;
      local_1c = 0;
      local_18 = (HWND)0x0;
      while( true ) {
        local_24 = local_28;
        if (local_28 != 0) {
          FUN_66251190(local_20,&local_24,(int *)&local_18,&local_1c);
        }
        if (local_28 == 0) break;
        FUN_66241020(this,local_18,5);
        local_28 = local_24;
      }
      FUN_66250e90(0x6627cf60);
    }
    piVar2[0x65] = 3;
    FUN_66240340(this,2,0);
    SetFocus((HWND)piVar2[0x4b]);
    if ((int *)piVar2[0x18] != (int *)0x0) {
      FUN_66245c10((int *)piVar2[0x18]);
    }
  }
  return 0;
}


