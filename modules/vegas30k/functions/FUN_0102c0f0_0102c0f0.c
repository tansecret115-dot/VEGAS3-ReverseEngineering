/* Module: vegas30k.dll
   Function: FUN_0102c0f0
   Address: 0102c0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_0102c0f0(uint *param_1,undefined4 param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  LSTATUS LVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uchar *puVar10;
  uint *puVar11;
  undefined **local_1ac;
  int *local_1a8;
  uint local_1a4;
  undefined4 *local_1a0;
  uint local_19c;
  HKEY local_198;
  int local_194;
  uint local_190;
  uint local_18c [4];
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  uchar local_16c [64];
  uchar local_12c [40];
  uchar local_104 [260];
  
  if ((param_3 & 0x3f00) != 0) {
    local_190 = param_3 >> 0xe & 1;
    local_1a8 = (int *)0x0;
    local_19c = param_3 >> 0xf & 1;
    if ((local_19c != 0) &&
       (iVar2 = _SfList_CreateExZ_32(&local_1a8,4,0xffffffff,0xffffffff,&DAT_80000002,0,0,0),
       iVar2 < 0)) {
      local_19c = 0;
    }
    local_1a0 = &DAT_01204e38;
    if (PTR_DAT_01204e44 != (undefined *)0x0) {
      local_1ac = &PTR_DAT_01204e44;
      do {
        iVar2 = 0;
        puVar9 = local_1a0;
        if (((local_1a0[1] & param_3) != 0) && (local_194 = 0, 0 < (int)local_1a0[2])) {
          do {
            iVar3 = _SfPlugIn_FindNode_8(param_1,*local_1ac + iVar2 + 8);
            if (iVar3 == 0) {
              puVar6 = local_18c;
              for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar6 = 0;
                puVar6 = puVar6 + 1;
              }
              puVar1 = *local_1ac;
              local_18c[1] = 4;
              local_17c = *(undefined4 *)(puVar1 + iVar2 + 8);
              local_178 = *(undefined4 *)(puVar1 + iVar2 + 0xc);
              local_174 = *(undefined4 *)(puVar1 + iVar2 + 0x10);
              local_170 = *(undefined4 *)(puVar1 + iVar2 + 0x14);
              local_18c[3] = (*(uint *)(puVar1 + iVar2 + 4) & 1) << 2 |
                             local_18c[3] & 0xfffffffb | 3;
              puVar4 = (uchar *)_SfGetString2_8(DAT_0120e5c8,*puVar9);
              _mbscpy(local_16c,puVar4);
              puVar4 = (uchar *)_SfGetString2_8(DAT_0120e5c8,*(undefined4 *)(*local_1ac + iVar2));
              _mbscat(local_16c,puVar4);
              _mbscat(local_16c,"");
              _mbscpy(local_104,(uchar *)"CLSID\\");
              FUN_0102aeb0(&local_17c,local_12c,0x28,1);
              _mbscat(local_104,local_12c);
              LVar5 = RegOpenKeyExA((HKEY)&DAT_80000000,(LPCSTR)local_104,0,0x20019,&local_198);
              if (LVar5 == 0) {
                local_1a4 = 0x104;
                LVar5 = RegQueryValueA(local_198,(LPCSTR)0x0,(LPSTR)local_104,(PLONG)&local_1a4);
                if (LVar5 == 0) {
                  puVar4 = local_104;
                  puVar10 = local_16c;
                  for (uVar7 = local_1a4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *(undefined4 *)puVar10 = *(undefined4 *)puVar4;
                    puVar4 = puVar4 + 4;
                    puVar10 = puVar10 + 4;
                  }
                  for (local_1a4 = local_1a4 & 3; local_1a4 != 0; local_1a4 = local_1a4 - 1) {
                    *puVar10 = *puVar4;
                    puVar4 = puVar4 + 1;
                    puVar10 = puVar10 + 1;
                  }
                  local_1a4 = 0x104;
                  LVar5 = RegQueryValueA(local_198,"InprocServer32",(LPSTR)local_104,
                                         (PLONG)&local_1a4);
                  if (LVar5 == 0) {
                    iVar3 = _SfDoesFileExist_4(local_104);
                    if (iVar3 == 0) {
                      LVar5 = 2;
                    }
                    else if ((local_19c != 0) &&
                            (iVar3 = _SfList_FindSortedItemRange_20
                                               (local_1a8,local_104,0,0xffffffff,&LAB_0102c450),
                            iVar3 < 0)) {
                      _SfList_AllocAndInsertItem_20(local_1a8,local_104,local_1a4,0xffffffff,0);
                    }
                  }
                }
                RegCloseKey(local_198);
                if (LVar5 != 0) goto LAB_0102c389;
              }
              else {
LAB_0102c389:
                puVar9 = local_1a0;
                if (local_190 != 0) goto LAB_0102c3cf;
              }
              puVar6 = calloc(1,0x60);
              if (puVar6 == (uint *)0x0) {
                return param_1;
              }
              puVar8 = local_18c;
              puVar11 = puVar6;
              for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar11 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar11 = puVar11 + 1;
              }
              *puVar6 = (uint)param_1;
              puVar9 = local_1a0;
              param_1 = puVar6;
            }
LAB_0102c3cf:
            local_194 = local_194 + 1;
            iVar2 = iVar2 + 0x38;
          } while (local_194 < (int)puVar9[2]);
        }
        local_1a0 = puVar9 + 4;
        local_1ac = local_1ac + 4;
      } while (*local_1ac != (undefined *)0x0);
    }
    if (local_19c != 0) {
      iVar3 = 0;
      iVar2 = *local_1a8;
      if (0 < iVar2) {
        do {
          _SfSelfRegister_Register_8(*(undefined4 *)(local_1a8[2] + iVar3 * 4),0);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar2);
      }
      _SfList_Destroy_4(local_1a8);
    }
  }
  return param_1;
}


