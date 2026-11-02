/* Module: vegas30.exe
   Function: FUN_005e1c00
   Address: 005e1c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005e1c00(HANDLE param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  DWORD dwNumberOfBytesToMap;
  undefined4 uVar2;
  LPSTR lpsz;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  int *piVar17;
  int local_174;
  int *local_170;
  int local_16c;
  int local_168;
  undefined4 local_164;
  char *local_160;
  void *local_15c;
  char *local_158;
  HANDLE local_154;
  char *local_150;
  void *local_14c;
  int local_148;
  void *local_144;
  undefined4 local_140;
  undefined4 local_13c [6];
  undefined4 local_124 [6];
  undefined4 local_10c [65];
  int local_8;
  undefined4 local_4;
  
  local_158 = (char *)0x0;
  local_154 = (HANDLE)0x0;
  local_174 = 0;
  local_148 = 0;
  local_140 = 0;
  local_14c = calloc(1,0x104);
  local_15c = calloc(1,0x104);
  local_144 = calloc(1,0x104);
  puVar15 = local_13c;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  puVar15 = local_124;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  FUN_005b83b0(param_2,1);
  puVar15 = local_10c;
  for (iVar5 = 0x43; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  local_8 = *(int *)(param_3 + 0x138);
  _SfList_CreateExZ_32(&local_4,0x220,0xffffffff,0xffffffff,4,0,0,0);
  _SfList_CreateExZ_32(&local_170,0xb0,0xffffffff,0xffffffff,4,0,0,0);
  dwNumberOfBytesToMap = GetFileSize(param_1,(LPDWORD)0x0);
  if (dwNumberOfBytesToMap == 0) {
    local_164 = 1;
    pcVar11 = lstrcmpA_exref;
  }
  else {
    local_154 = CreateFileMappingA(param_1,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCSTR)0x0);
    local_158 = MapViewOfFile(local_154,4,0,0,dwNumberOfBytesToMap);
    if (local_158 == (char *)0x0) {
      local_164 = 0x8007000e;
      pcVar11 = lstrcmpA_exref;
    }
    else {
      cVar1 = *local_158;
      pcVar8 = local_158;
      for (; (cVar1 == '\0' && (dwNumberOfBytesToMap != 0));
          dwNumberOfBytesToMap = dwNumberOfBytesToMap - 1) {
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 1;
      }
      local_16c = FUN_005e3d70(pcVar8,dwNumberOfBytesToMap);
      uVar2 = _SfGetFileNamePtrA_4(param_3 + 0x30);
      FUN_004e9f70(param_2,0x224,uVar2);
      local_148 = 1;
      FUN_004eb0f0(param_2,0x26,0);
      local_164 = FUN_005df010(param_2);
      pcVar11 = lstrcmpA_exref;
      local_160 = pcVar8;
      local_150 = pcVar8;
      if (dwNumberOfBytesToMap != 0) {
        do {
          local_160 = local_150;
          lpsz = (LPSTR)FUN_005dee80(&local_160,local_16c);
          if (lpsz == (LPSTR)0x0) {
            local_160 = local_160 + 1;
          }
          else {
            local_174 = local_174 + 1;
            if (*lpsz != '\0') {
              CharUpperA(lpsz);
              if ((local_8 == 0xb) || (local_8 == 0xc)) {
                iVar5 = FUN_005e1260(lpsz,local_10c,&local_140,local_13c,local_124);
LAB_005e1e20:
                if (iVar5 != 0) {
                  free(lpsz);
                  goto LAB_005e1e3d;
                }
              }
              else if ((local_8 == 0xd) || (local_8 == 0xe)) {
                iVar5 = FUN_005e0710(lpsz,local_10c,&local_14c,&local_15c,&local_144);
                goto LAB_005e1e20;
              }
              if (lpsz != (LPSTR)0x0) {
                free(lpsz);
              }
              uVar2 = FUN_005dee80(&local_150,local_16c);
              uVar3 = _SfGetString_8(DAT_00647204,0x5262);
              SfErrorHandler_DetailsAddString(0x8004e00b,uVar3,local_174,uVar2);
              local_164 = 0x4e000;
              pcVar11 = lstrcmpA_exref;
              break;
            }
            dwNumberOfBytesToMap = dwNumberOfBytesToMap - 1;
            free(lpsz);
          }
LAB_005e1e3d:
          pcVar11 = lstrcmpA_exref;
          local_150 = local_160;
        } while ((uint)((int)local_160 - (int)pcVar8) < dwNumberOfBytesToMap);
      }
    }
  }
  do {
    free(local_14c);
    free(local_15c);
    free(local_144);
    FUN_005e0220(param_2,local_10c,local_170);
    local_168 = 0;
    iVar5 = *local_170;
    piVar4 = local_170;
    local_16c = iVar5;
    if (0 < iVar5) {
      do {
        iVar12 = piVar4[1] * local_168 + piVar4[2];
        local_174 = 0;
        if (0 < iVar5) {
          do {
            iVar16 = piVar4[1] * local_174 + piVar4[2];
            iVar5 = (*pcVar11)(*(undefined4 *)(iVar12 + 0xc),*(undefined4 *)(iVar16 + 0xc));
            if (((iVar5 == 0) ||
                (iVar5 = (*pcVar11)(*(undefined4 *)(iVar16 + 0xc),&DAT_0062aa90), iVar5 == 0)) &&
               (*(int *)(iVar12 + 8) == *(int *)(iVar16 + 8))) {
              uVar6 = *(uint *)(iVar16 + 0x28) - *(uint *)(iVar12 + 0x28);
              uVar7 = uVar6 - *(uint *)(iVar12 + 0x30);
              uVar6 = (((*(int *)(iVar16 + 0x2c) - *(int *)(iVar12 + 0x2c)) -
                       (uint)(*(uint *)(iVar16 + 0x28) < *(uint *)(iVar12 + 0x28))) -
                      *(int *)(iVar12 + 0x34)) - (uint)(uVar6 < *(uint *)(iVar12 + 0x30));
              uVar9 = *(uint *)(iVar16 + 0x38) - *(uint *)(iVar12 + 0x38);
              uVar10 = uVar9 - *(uint *)(iVar12 + 0x40);
              uVar9 = (((*(int *)(iVar16 + 0x3c) - *(int *)(iVar12 + 0x3c)) -
                       (uint)(*(uint *)(iVar16 + 0x38) < *(uint *)(iVar12 + 0x38))) -
                      *(int *)(iVar12 + 0x44)) - (uint)(uVar9 < *(uint *)(iVar12 + 0x40));
              pcVar11 = lstrcmpA_exref;
              if (((-2 < (int)uVar6) && ((uVar6 < 0x80000000 || (0xfffffffd < uVar7)))) &&
                 (((int)uVar6 < 1 &&
                  ((((int)uVar6 < 0 || (uVar7 < 3)) &&
                   ((-2 < (int)uVar9 &&
                    ((((uVar9 < 0x80000000 || (0xfffffffd < uVar10)) && ((int)uVar9 < 1)) &&
                     (((int)uVar9 < 0 || (uVar10 < 3)))))))))))) {
                uVar6 = *(uint *)(iVar16 + 0x30);
                uVar7 = *(uint *)(iVar12 + 0x30);
                iVar5 = *(int *)(iVar16 + 0x34);
                uVar9 = *(uint *)(iVar12 + 0x40);
                *(uint *)(iVar12 + 0x30) = uVar6 + uVar7;
                *(uint *)(iVar12 + 0x34) =
                     iVar5 + *(int *)(iVar12 + 0x34) + (uint)CARRY4(uVar6,uVar7);
                uVar6 = *(uint *)(iVar16 + 0x40);
                iVar5 = *(int *)(iVar16 + 0x44);
                *(uint *)(iVar12 + 0x40) = uVar6 + uVar9;
                *(uint *)(iVar12 + 0x44) =
                     iVar5 + *(int *)(iVar12 + 0x44) + (uint)CARRY4(uVar6,uVar9);
                _SfList_DeleteList_16(local_170,local_174,1,0);
                local_174 = local_174 + -1;
                local_16c = *local_170;
                pcVar11 = lstrcmpA_exref;
              }
            }
            local_174 = local_174 + 1;
            piVar4 = local_170;
            iVar5 = local_16c;
          } while (local_174 < local_16c);
        }
        local_168 = local_168 + 1;
      } while (local_168 < iVar5);
    }
    local_16c = *piVar4;
    local_174 = 0;
    local_168 = 0;
    if (0 < local_16c) {
      do {
        iVar12 = local_168;
        iVar5 = *(int *)(piVar4[1] * local_168 + 8 + piVar4[2]);
        piVar17 = (int *)(piVar4[1] * local_168 + piVar4[2]);
        piVar17[0x24] = 0;
        if (iVar5 == 3) {
          iVar5 = (*pcVar11)(piVar17[5],&DAT_0062aa8c);
          if (iVar5 != 0) {
            (*pcVar11)(piVar17[5],&DAT_0062aa88);
          }
          if (piVar17[2] != 3) goto LAB_005e207f;
          *piVar17 = 1;
          piVar4 = local_170;
          local_168 = iVar12;
          iVar16 = local_174;
        }
        else {
LAB_005e207f:
          *piVar17 = local_174;
          piVar4 = local_170;
          iVar5 = local_168;
          local_168 = iVar12;
          do {
            iVar16 = local_174 + 1;
            if (iVar12 < 1) goto LAB_005e210b;
            iVar12 = iVar12 + -1;
            piVar13 = (int *)(piVar4[1] * iVar12 + piVar4[2]);
            local_168 = iVar5;
          } while ((piVar13[2] != 2) ||
                  (iVar14 = (*pcVar11)("MASTER",piVar13[3]), piVar4 = local_170, iVar5 = local_168,
                  iVar14 == 0));
          iVar5 = piVar13[0xd] + piVar13[0xb] + (uint)CARRY4(piVar13[0xc],piVar13[10]);
          if ((iVar5 < piVar17[0xb]) ||
             (((iVar5 <= piVar17[0xb] && ((uint)(piVar13[0xc] + piVar13[10]) <= (uint)piVar17[10]))
              || (iVar5 = (*pcVar11)(&DAT_0062aa8c,piVar17[5]), piVar4 = local_170, iVar5 != 0)))) {
            *piVar17 = *piVar13;
            piVar4 = local_170;
            iVar16 = local_174;
          }
        }
LAB_005e210b:
        local_174 = iVar16;
        local_168 = local_168 + 1;
      } while (local_168 < local_16c);
    }
    iVar12 = 0;
    iVar5 = 0;
    while( true ) {
      if (local_16c <= iVar12) {
        _SfList_Destroy_4(local_4);
        _SfList_Destroy_4(local_170);
        uVar2 = DAT_00647788;
        DAT_00647788 = 1;
        FUN_005b8da0(param_2,1,1);
        DAT_00647788 = uVar2;
        if (local_148 != 0) {
          FUN_004eb2b0(param_2);
          FUN_004ea040(param_2,0);
        }
        if (local_158 != (char *)0x0) {
          UnmapViewOfFile(local_158);
        }
        if (local_154 != (HANDLE)0x0) {
          CloseHandle(local_154);
        }
        FUN_004a4560(DAT_00647630);
        FUN_004692e0(DAT_00647630);
        FUN_005b84d0(param_2,1);
        return local_164;
      }
      iVar14 = piVar4[1] * iVar12 + piVar4[2];
      iVar16 = (*pcVar11)(*(undefined4 *)(piVar4[1] * iVar12 + 0x14 + piVar4[2]),&DAT_0062aa88);
      if (((iVar16 != 0) &&
          (iVar16 = (*pcVar11)(*(undefined4 *)(iVar14 + 0xc),&DAT_0062aa90), iVar16 != 0)) &&
         (iVar16 = (*pcVar11)(*(undefined4 *)(iVar14 + 0xc),"MASTER"), iVar16 != 0)) {
        iVar16 = (*pcVar11)(*(undefined4 *)(iVar14 + 0x10),&DAT_0060f98c);
        if (iVar16 == 0) {
          _mbscpy(*(uchar **)(iVar14 + 0x10),*(uchar **)(iVar14 + 0xc));
        }
        FUN_005df570(param_2,iVar14);
      }
      if ((*(byte *)(param_3 + 0x1c) & 1) != 0) break;
      FUN_004e7320(param_3,iVar5 / local_16c);
      iVar12 = iVar12 + 1;
      iVar5 = iVar5 + 100;
      piVar4 = local_170;
    }
    local_164 = 0x8004e00c;
  } while( true );
}


