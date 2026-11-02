/* Module: vidcap30.exe
   Function: FUN_004f3f70
   Address: 004f3f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f3f70(int param_1)

{
  int iVar1;
  LRESULT LVar2;
  uint *puVar3;
  HGLOBAL pvVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  HWND pHVar9;
  uint *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint **ppuVar14;
  uint *puStack_47c;
  int local_478;
  int local_474;
  int local_470;
  int local_46c;
  uint *local_468;
  int local_464;
  uint *local_460;
  int local_45c;
  LRESULT *local_458;
  int local_454;
  undefined1 *local_450;
  uchar *local_44c;
  undefined4 uStack_448;
  int local_444;
  uint *local_440;
  HWND local_43c;
  uint *local_438 [5];
  int iStack_424;
  undefined4 uStack_41c;
  LRESULT local_418;
  int local_414;
  undefined4 local_410 [130];
  undefined1 local_208;
  uint auStack_207 [129];
  
  pcVar8 = SendMessageA_exref;
  pHVar9 = *(HWND *)(param_1 + 0x18);
  local_43c = *(HWND *)(param_1 + 0x1c);
  local_46c = SendMessageA(pHVar9,0x110a,9,0);
  if (local_46c != 0) {
    iVar1 = FUN_004f8340(pHVar9,local_46c,&local_208);
    (&local_208)[iVar1] = 0x5c;
    local_440 = (uint *)((int)auStack_207 + iVar1);
    *(undefined1 *)local_440 = 0;
    piVar11 = &local_464;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar11 = 0;
      piVar11 = piVar11 + 1;
    }
    local_45c = FUN_004f6ec0(pHVar9,local_46c);
    pHVar9 = local_43c;
    LVar2 = SendMessageA(local_43c,0x1032,0,0);
    if (LVar2 != 0) {
      local_418 = LVar2;
      FUN_004f3e30(param_1);
      if (LVar2 == 1) {
        LVar2 = SendMessageA(pHVar9,0x100c,0xffffffff,2);
        local_458 = (LRESULT *)FUN_004f3c20(pHVar9,LVar2);
        puVar10 = *(uint **)(*(int *)(local_45c + 8) + (int)local_458 * 4);
        if ((*puVar10 & 0x80000) == 0) {
          uVar7 = puVar10[4];
          puVar3 = puVar10 + 5;
          puVar13 = local_440;
          for (uVar6 = (uint)(ushort)((ushort)uVar7 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar13 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar13 = puVar13 + 1;
          }
          for (uVar7 = (ushort)uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(char *)puVar13 = (char)*puVar3;
            puVar3 = (uint *)((int)puVar3 + 1);
            puVar13 = (uint *)((int)puVar13 + 1);
          }
          local_44c = (uchar *)local_410;
          puVar12 = local_410;
          for (iVar1 = 0x82; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
          local_450 = &local_208;
          local_464 = 2;
          local_444 = (int)local_458;
          (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),&local_464);
          local_468 = *(uint **)(param_1 + 4);
          local_458 = &local_418;
          ppuVar14 = &local_440;
          for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
            *ppuVar14 = (uint *)0x0;
            ppuVar14 = ppuVar14 + 1;
          }
          local_43c = *(HWND *)(param_1 + 0x2c);
          local_46c = 9;
          local_438[0] = (uint *)0x36;
          local_440 = local_468;
          iVar1 = lstrlenA((LPCSTR)&local_418);
          puVar3 = calloc(1,(iVar1 + 1U & 0xffff) + 0x17);
          *(short *)(puVar3 + 4) = (short)(iVar1 + 1U);
          *(undefined2 *)((int)puVar3 + 0x12) = 0;
          *puVar3 = *puVar10;
          puVar3[1] = puVar10[1];
          puVar3[2] = puVar10[2];
          puVar3[3] = puVar10[3];
          _mbscpy((uchar *)(puVar3 + 5),(uchar *)&local_418);
          iStack_424 = 1;
          local_438[3] = puVar3;
          LVar2 = SendMessageA(*(HWND *)(param_1 + 8),0x4e,*(WPARAM *)(param_1 + 0x2c),
                               (LPARAM)&local_440);
          if (LVar2 != 3) {
            if (LVar2 == 2) {
              local_450 = (undefined1 *)0x1;
            }
            iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))
                              (*(int **)(param_1 + 0x3c),&local_46c);
            if (iVar1 == 0) {
              FUN_004f93e0(param_1);
              free(puVar3);
              return;
            }
            local_438[0] = (uint *)0x37;
            SendMessageA(*(HWND *)(param_1 + 8),0x4e,*(WPARAM *)(param_1 + 0x2c),(LPARAM)&local_440)
            ;
          }
          free(puVar3);
          return;
        }
      }
      else {
        _SfList_CreateExZ_32(&local_470,4,LVar2,1,0x40000002,0,0,0);
        if (local_470 != 0) {
          pvVar4 = GlobalAlloc(0x42,LVar2 * 0x104);
          local_468 = GlobalLock(pvVar4);
          if (local_468 != (uint *)0x0) {
            local_450 = &local_208;
            local_464 = 2;
            local_478 = 0;
            _SfList_CreateExZ_32(&local_478,4,LVar2,1,0x40000002,0,0,0);
            if (local_478 != 0) {
              local_474 = 0;
              local_46c = 0;
              iVar1 = -1;
              puVar10 = local_468;
              if (0 < LVar2) {
                do {
                  local_414 = (*pcVar8)(pHVar9,0x100c,iVar1,2);
                  if (local_414 == -1) break;
                  local_444 = FUN_004f3c20(pHVar9,local_414);
                  iVar1 = local_46c;
                  puVar10 = *(uint **)(*(int *)(local_45c + 8) + local_444 * 4);
                  if ((*puVar10 & 0x80000) == 0) {
                    uVar7 = puVar10[4];
                    puVar3 = puVar10 + 5;
                    puVar13 = local_440;
                    for (uVar6 = (uint)(ushort)((ushort)uVar7 >> 2); uVar6 != 0; uVar6 = uVar6 - 1)
                    {
                      *puVar13 = *puVar3;
                      puVar3 = puVar3 + 1;
                      puVar13 = puVar13 + 1;
                    }
                    for (uVar7 = (ushort)uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                      *(char *)puVar13 = (char)*puVar3;
                      puVar3 = (uint *)((int)puVar3 + 1);
                      puVar13 = (uint *)((int)puVar13 + 1);
                    }
                    local_44c = (uchar *)((int)local_468 + local_46c);
                    local_458 = (LRESULT *)local_444;
                    (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))
                              (*(int **)(param_1 + 0x3c),&local_464);
                    iVar5 = lstrlenA((LPCSTR)local_44c);
                    local_46c = iVar1 + iVar5 + 1;
                    puStack_47c = (uint *)0x0;
                    iVar1 = _SfList_AllocItem_12(local_478,iVar5 + 0x18,&puStack_47c);
                    if (-1 < iVar1) {
                      *(short *)(puStack_47c + 4) = (short)(iVar5 + 1);
                      *(undefined2 *)((int)puStack_47c + 0x12) = 0;
                      *puStack_47c = *puVar10;
                      puStack_47c[1] = puVar10[1];
                      puStack_47c[2] = puVar10[2];
                      puStack_47c[3] = puVar10[3];
                      _mbscpy((uchar *)(puStack_47c + 5),local_44c);
                      _SfList_InsertList_16(local_478,local_474,0,0xffffffff);
                    }
                    iVar1 = local_474;
                    local_474 = local_474 + 1;
                    _SfList_AllocAndInsertItem_20(local_470,&local_444,4,iVar1,0);
                    pHVar9 = local_43c;
                    LVar2 = local_418;
                  }
                  iVar1 = local_414;
                  pcVar8 = SendMessageA_exref;
                } while (local_474 < LVar2);
                puVar10 = local_468;
                if (0 < local_474) {
                  local_460 = *(uint **)(param_1 + 4);
                  local_454 = local_470;
                  ppuVar14 = local_438;
                  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
                    *ppuVar14 = (uint *)0x0;
                    ppuVar14 = ppuVar14 + 1;
                  }
                  local_438[1] = *(uint **)(param_1 + 0x2c);
                  local_464 = 9;
                  local_458 = (LRESULT *)0xffffffff;
                  local_450 = (undefined1 *)local_468;
                  local_438[2] = (uint *)0x36;
                  iStack_424 = local_478;
                  uStack_41c = 2;
                  local_438[0] = local_460;
                  iVar1 = (*pcVar8)(*(undefined4 *)(param_1 + 8),0x4e,local_438[1],local_438);
                  if (iVar1 != 3) {
                    if (iVar1 == 2) {
                      uStack_448 = 1;
                    }
                    iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))
                                      (*(int **)(param_1 + 0x3c),&local_464);
                    if (iVar1 == 0) {
                      FUN_004f93e0(param_1);
                    }
                    else {
                      local_438[2] = (uint *)0x37;
                      (*pcVar8)(*(undefined4 *)(param_1 + 8),0x4e,*(undefined4 *)(param_1 + 0x2c),
                                local_438);
                    }
                  }
                }
              }
              pvVar4 = GlobalHandle(puVar10);
              GlobalUnlock(pvVar4);
              pvVar4 = GlobalHandle(puVar10);
              GlobalFree(pvVar4);
              _SfList_Destroy_4(local_470);
              _SfList_Destroy_4(local_478);
            }
          }
        }
      }
    }
  }
  return;
}


