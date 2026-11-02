/* Module: vegas30.exe
   Function: FUN_00442240
   Address: 00442240
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00442240(int param_1,LPCSTR param_2)

{
  tagSFCDPRJ_TRACK_PROJECT *ptVar1;
  byte bVar2;
  tagSFCDPRJ_TRACK_PROJECT *ptVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  HANDLE hObject;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  LPCSTR lpString;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  tSFLIST *local_2a4;
  undefined4 local_2a0;
  int local_29c;
  uint local_298;
  HANDLE local_294;
  int local_290;
  undefined8 local_28c;
  int local_284 [4];
  uint local_274;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined1 local_250;
  undefined4 local_24c;
  undefined4 uStack_248;
  undefined4 local_244;
  undefined4 uStack_240;
  double local_23c;
  uint local_234 [5];
  int local_220;
  undefined4 local_21c;
  WCHAR local_218 [259];
  undefined2 local_12;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_294 = CreateFileA(param_2,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (local_294 == (HANDLE)0xffffffff) {
    SfMsgBox(0,0x40,"Can\'t create file %s to write.",param_2);
    return -1;
  }
  iVar10 = 0;
  iVar6 = 0;
  if ((*(char *)(param_1 + 0x1e4) != '\0') &&
     (iVar6 = *(int *)(param_1 + 0x1ec), (*(byte *)(iVar6 + 0x18) & 2) != 2)) {
    bVar2 = *(byte *)(*(int *)(iVar6 + 0x10) + 0x18);
    iVar7 = *(int *)(iVar6 + 0x10);
    while ((bVar2 & 2) != 2) {
      bVar2 = *(byte *)(*(int *)(iVar7 + 0x10) + 0x18);
      iVar6 = iVar7;
      iVar7 = *(int *)(iVar7 + 0x10);
    }
  }
  while( true ) {
    if (*(char *)(param_1 + 0x1e4) == '\0') {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(param_1 + 0x1f0);
    }
    if (iVar6 == iVar7) break;
    iVar10 = iVar10 + 1;
    FUN_00436e20();
  }
  puVar8 = local_234;
  for (iVar6 = 0x8d; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_234[4] = *(undefined4 *)(param_1 + 0x7e0);
  local_234[0] = local_234[0] | 1;
  local_234[1] = 0x20000;
  local_234[2] = 2;
  local_234[3] = 0x10;
  local_21c = 1;
  local_220 = iVar10;
  MultiByteToWideChar(0,1,param_2,-1,local_218,0x104);
  local_12 = 0;
  if (iVar10 == 0) {
    local_10 = 0;
LAB_0044244a:
    iVar6 = _SfList_CreateExZ_32(&local_c,4,0xffffffff,0xffffffff,2,0,0,0);
    if ((iVar6 == 0) &&
       (iVar6 = _SfList_AllocAndInsertItem_20(local_c,0,0x14,0xffffffff,0), iVar6 == 0)) {
      ptVar3 = (tagSFCDPRJ_TRACK_PROJECT *)**(undefined4 **)(local_c + 8);
      local_28c = FUN_005b8d80(param_1);
      uVar12 = ftol();
      *(undefined4 *)ptVar3 = uVar12;
      *(undefined4 *)(ptVar3 + 4) = 2;
      *(undefined4 *)(ptVar3 + 8) = 0;
      *(undefined4 *)(ptVar3 + 0xc) = 0;
      _SfList_CreateExZ_32(&local_2a0,4,0x10,0x10,0,0,0,0);
      FUN_005b9e60(param_1,local_2a0,0,0,1);
      FUN_00441f50(ptVar3 + 0xc,local_2a0,local_10);
      _SfList_Destroy_4(local_2a0);
      ptVar1 = ptVar3 + 0x10;
      iVar6 = _SfList_CreateExZ_32(ptVar1,4,0xffffffff,0xffffffff,2,0,0,0);
      if (iVar6 == 0) {
        iVar6 = _SfList_AllocAndInsertItem_20(*(undefined4 *)ptVar1,0,0x18,0xffffffff,0);
        if (iVar6 == 0) {
          puVar4 = (undefined4 *)**(undefined4 **)(*(int *)ptVar1 + 8);
          *puVar4 = 0x14;
          puVar4[1] = 0x6e696167;
          puVar4[2] = 0;
          puVar4[3] = 0xffffffff;
          puVar4[4] = 0x3f800000;
          puVar4[5] = 0x3f800000;
          local_8 = *(undefined4 *)(param_1 + 0x1bc);
          local_4 = *(undefined4 *)(param_1 + 0x1c0);
          SfCDProject_WriteProject(param_2,local_294,(tagSFCDPRJ_PROJECT *)local_234,(ulong *)0x0);
          if (local_10 != 0) {
            _SfList_Destroy_4(local_10);
          }
          local_10 = 0;
          SfCDProject_FreeTrack(ptVar3);
          _SfList_Destroy_4(local_c);
          local_2a4 = (tSFLIST *)0x0;
          iVar6 = _SfList_CreateExZ_32(&local_2a4,4,0xffffffff,0xffffffff,2,0,0,0);
          local_28c._0_4_ = iVar6;
          puVar8 = (uint *)FUN_005b89b0(param_1);
          FUN_005b8970(param_1);
          uVar9 = 0;
          local_290 = 1;
          local_29c = 2;
          if (puVar8 == (uint *)0x0) {
            local_298 = 0;
          }
          else {
            local_298 = *puVar8;
          }
          if (local_298 != 0) {
            do {
              iVar6 = *(int *)(puVar8[2] + uVar9 * 4);
              piVar11 = local_284;
              for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
                *piVar11 = 0;
                piVar11 = piVar11 + 1;
              }
              local_284[0] = 3;
              local_23c = (double)*(longlong *)(iVar6 + 8) * _DAT_006106c8 * _DAT_00612040;
              local_244 = ftol();
              uStack_240 = 0;
              local_284[2] = ftol();
              local_24c = ftol();
              uStack_248 = 0;
              local_284[3] = ftol();
              pbVar5 = *(byte **)(iVar6 + 0x28);
              if (pbVar5 == (byte *)0x0) {
                local_29c = 2;
                local_284[1] = local_290;
                local_290 = local_290 + 1;
              }
              else {
                if ((*pbVar5 & 1) != 0) {
                  local_284[0] = 4;
                  local_284[1] = local_29c;
                  local_29c = local_29c + 1;
                }
                if ((*pbVar5 & 2) != 0) {
                  local_274 = local_274 | 1;
                }
                if ((*pbVar5 & 4) != 0) {
                  local_274 = local_274 | 2;
                }
                iVar10 = lstrlenA((LPCSTR)(pbVar5 + 4));
                if (iVar10 != 0) {
                  lstrcpynA((LPSTR)&local_25c,(LPCSTR)(pbVar5 + 4),0xd);
                  local_250 = 0;
                  local_268 = local_258;
                  local_26c = local_25c;
                  local_274 = local_274 | 8;
                  local_264 = local_254;
                }
              }
              SfPQList_InsertItem(local_2a4,-1,(cditemtag *)local_284,(char *)(iVar6 + 0x30));
              uVar9 = uVar9 + 1;
              iVar6 = (int)local_28c;
            } while (uVar9 < local_298);
          }
          hObject = local_294;
          FUN_00441d20(local_294,0,0,local_2a4,1);
          _SfList_Destroy_4(local_2a4);
          CloseHandle(hObject);
          if (iVar6 < 0) {
            SfMsgBox(0,0x40,"Error writing file %s",param_2);
          }
        }
      }
    }
  }
  else {
    iVar6 = _SfList_CreateExZ_32(&local_10,4,0xffffffff,0xffffffff,2,0,0,0);
    if (iVar6 == 0) {
      iVar10 = 0;
      if ((*(char *)(param_1 + 0x1e4) != '\0') &&
         (iVar10 = *(int *)(param_1 + 0x1ec), (*(byte *)(iVar10 + 0x18) & 2) != 2)) {
        bVar2 = *(byte *)(*(int *)(iVar10 + 0x10) + 0x18);
        iVar6 = *(int *)(iVar10 + 0x10);
        while ((bVar2 & 2) != 2) {
          bVar2 = *(byte *)(*(int *)(iVar6 + 0x10) + 0x18);
          iVar10 = iVar6;
          iVar6 = *(int *)(iVar6 + 0x10);
        }
      }
      while( true ) {
        if (*(char *)(param_1 + 0x1e4) == '\0') {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(param_1 + 0x1f0);
        }
        if (iVar10 == iVar6) goto LAB_0044244a;
        uVar13 = 0;
        lpString = (LPCSTR)(*(int *)(iVar10 + 4) + 0x170);
        uVar12 = 0xffffffff;
        iVar6 = lstrlenA(lpString);
        iVar6 = _SfList_AllocAndInsertItem_20(local_10,lpString,iVar6 + 1,uVar12,uVar13);
        if (iVar6 != 0) break;
        FUN_00436e20();
      }
    }
  }
  return iVar6;
}


