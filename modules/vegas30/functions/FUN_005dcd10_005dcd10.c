/* Module: vegas30.exe
   Function: FUN_005dcd10
   Address: 005dcd10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005dcd10(HANDLE param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                uint *param_5)

{
  HANDLE hFile;
  int iVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  longlong lVar10;
  int local_4c;
  int local_48;
  DWORD local_44;
  undefined8 local_40;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [4];
  int local_10 [4];
  
  puVar6 = param_5;
  hFile = param_1;
  local_38 = *param_5;
  local_34 = param_5[1];
  local_4c = 0;
  iVar1 = riff64_FindListChunk
                    (param_1,DAT_0062a580,DAT_0062a584,DAT_0062a588,DAT_0062a58c,&local_40,&local_38
                    );
  lVar10 = CONCAT44(local_40._4_4_,(uint)local_40);
  if (-1 < iVar1) {
    local_48 = -1;
    param_1 = (HANDLE)0x0;
    local_30 = (uint)local_40;
    local_2c = local_40._4_4_;
    if (-1 < local_40._4_4_) {
      if (0 < local_40._4_4_) goto LAB_005dcda0;
      do {
        if (local_30 < 0x18) break;
LAB_005dcda0:
        do {
          local_40 = lVar10;
          iVar1 = riff64_ReadChunkHeader(hFile,local_10,&local_40);
          if (iVar1 < 0) {
            return iVar1;
          }
          iVar3 = 4;
          bVar9 = true;
          piVar7 = local_10;
          piVar8 = &DAT_0062a4d0;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar9 = *piVar7 == *piVar8;
            piVar7 = piVar7 + 1;
            piVar8 = piVar8 + 1;
          } while (bVar9);
          if (bVar9) {
            iVar3 = 4;
            bVar9 = true;
            piVar7 = local_10;
            piVar8 = &DAT_0062a4d0;
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar9 = *piVar7 == *piVar8;
              piVar7 = piVar7 + 1;
              piVar8 = piVar8 + 1;
            } while (bVar9);
            if (bVar9) {
              BVar2 = ReadFile(hFile,local_20,0x10,&local_44,(LPOVERLAPPED)0x0);
              if (BVar2 == 0) {
                return -0x7ffb1ff8;
              }
              riff64_SaveLocation(hFile,&local_28);
              iVar4 = 4;
              iVar3 = (uint)local_40 - 0x10;
              iVar5 = local_40._4_4_ - (uint)((uint)local_40 < 0x10);
              bVar9 = true;
              piVar7 = local_20;
              piVar8 = &DAT_0062a5b0;
              do {
                if (iVar4 == 0) break;
                iVar4 = iVar4 + -1;
                bVar9 = *piVar7 == *piVar8;
                piVar7 = piVar7 + 1;
                piVar8 = piVar8 + 1;
              } while (bVar9);
              lVar10 = local_40;
              if (bVar9) {
LAB_005dd084:
                local_40 = lVar10;
                if (iVar1 != 0) {
                  return iVar1;
                }
              }
              else {
                iVar4 = 4;
                bVar9 = true;
                piVar7 = &DAT_0062a670;
                piVar8 = local_20;
                do {
                  if (iVar4 == 0) break;
                  iVar4 = iVar4 + -1;
                  bVar9 = *piVar7 == *piVar8;
                  piVar7 = piVar7 + 1;
                  piVar8 = piVar8 + 1;
                } while (bVar9);
                if (bVar9) {
                  if (param_1 == (HANDLE)0x0) {
LAB_005dd072:
                    lVar10 = riff64_SkipChunk(hFile,local_40);
                  }
                  else {
                    iVar1 = FUN_005dc360(hFile,param_2,(int)param_1 + 0x98,param_1,param_3,iVar3,
                                         iVar5);
                    lVar10 = local_40;
                  }
                  goto LAB_005dd084;
                }
                iVar4 = 4;
                bVar9 = true;
                piVar7 = &DAT_0062a730;
                piVar8 = local_20;
                do {
                  if (iVar4 == 0) break;
                  iVar4 = iVar4 + -1;
                  bVar9 = *piVar7 == *piVar8;
                  piVar7 = piVar7 + 1;
                  piVar8 = piVar8 + 1;
                } while (bVar9);
                if (bVar9) {
                  if (param_1 == (HANDLE)0x0) goto LAB_005dd072;
                  iVar1 = FUN_005dbec0(hFile,param_2,(int)param_1 + 0xf0,iVar3,iVar5,param_1);
                  lVar10 = local_40;
                  goto LAB_005dd084;
                }
                iVar4 = 4;
                bVar9 = true;
                piVar7 = &DAT_0062a6b0;
                piVar8 = local_20;
                do {
                  if (iVar4 == 0) break;
                  iVar4 = iVar4 + -1;
                  bVar9 = *piVar7 == *piVar8;
                  piVar7 = piVar7 + 1;
                  piVar8 = piVar8 + 1;
                } while (bVar9);
                if (bVar9) {
                  if (param_1 == (HANDLE)0x0) goto LAB_005dd072;
                  iVar1 = FUN_005db590(hFile,param_2,(int)param_1 + 0x140,iVar3,iVar5,param_1,1,
                                       *(undefined4 *)((int)param_1 + 0x20),
                                       *(undefined4 *)((int)param_1 + 0x24));
                  lVar10 = local_40;
                  goto LAB_005dd084;
                }
                iVar4 = 4;
                bVar9 = true;
                piVar7 = &DAT_0062a700;
                piVar8 = local_20;
                do {
                  if (iVar4 == 0) break;
                  iVar4 = iVar4 + -1;
                  bVar9 = *piVar7 == *piVar8;
                  piVar7 = piVar7 + 1;
                  piVar8 = piVar8 + 1;
                } while (bVar9);
                if (bVar9) {
                  if (param_1 == (HANDLE)0x0) goto LAB_005dd072;
                  iVar1 = FUN_005db3a0(hFile,param_2,(int)param_1 + 0x144,param_1,iVar3,iVar5);
                  lVar10 = local_40;
                  goto LAB_005dd084;
                }
                iVar4 = 4;
                bVar9 = true;
                piVar7 = &DAT_0062a750;
                piVar8 = local_20;
                do {
                  if (iVar4 == 0) break;
                  iVar4 = iVar4 + -1;
                  bVar9 = *piVar7 == *piVar8;
                  piVar7 = piVar7 + 1;
                  piVar8 = piVar8 + 1;
                } while (bVar9);
                if (bVar9) {
                  if (param_1 == (HANDLE)0x0) goto LAB_005dd072;
                  iVar1 = FUN_005dc090(hFile,param_2,(int)param_1 + 0xf0,iVar3,iVar5,param_1);
                  lVar10 = local_40;
                  goto LAB_005dd084;
                }
              }
              riff64_RestoreLocation(hFile,local_28,local_24);
              SetFilePointer(hFile,-0x10,(PLONG)0x0,1);
              lVar10 = riff64_SkipChunk(hFile,local_40);
              lVar10 = lVar10 + 0x18;
              puVar6 = param_5;
            }
            else {
              lVar10 = riff64_SkipChunk(hFile,local_40);
            }
          }
          else {
            riff64_SaveLocation(hFile,&local_28);
            iVar1 = 4;
            bVar9 = true;
            piVar7 = local_10;
            piVar8 = &DAT_0062a590;
            do {
              if (iVar1 == 0) break;
              iVar1 = iVar1 + -1;
              bVar9 = *piVar7 == *piVar8;
              piVar7 = piVar7 + 1;
              piVar8 = piVar8 + 1;
            } while (bVar9);
            if (bVar9) {
              iVar1 = FUN_005dcc90(hFile,param_2,param_3,param_4,local_40,&param_1,&local_48);
              if (iVar1 < 0) {
                return iVar1;
              }
            }
            else {
              iVar1 = 4;
              bVar9 = true;
              piVar7 = local_10;
              piVar8 = &DAT_0062a5a0;
              do {
                if (iVar1 == 0) break;
                iVar1 = iVar1 + -1;
                bVar9 = *piVar7 == *piVar8;
                piVar7 = piVar7 + 1;
                piVar8 = piVar8 + 1;
              } while (bVar9);
              if ((bVar9) && (param_1 != (HANDLE)0x0)) {
                iVar1 = FUN_005db0d0(hFile,param_2,&local_40,DAT_0062a5a0,DAT_0062a5a4,DAT_0062a5a8,
                                     DAT_0062a5ac,param_3,param_1,local_48 == local_4c);
                if (iVar1 < 0) {
                  return iVar1;
                }
                local_4c = local_4c + 1;
              }
            }
            riff64_RestoreLocation(hFile,local_28,local_24);
            lVar10 = riff64_SkipChunk(hFile,local_40);
            lVar10 = lVar10 + 0x18;
          }
          iVar1 = (int)((ulonglong)lVar10 >> 0x20);
          local_40._0_4_ = (uint)lVar10;
          bVar9 = local_38 < (uint)local_40;
          local_38 = local_38 - (uint)local_40;
          local_34 = (local_34 - iVar1) - (uint)bVar9;
          bVar9 = local_30 < (uint)local_40;
          local_30 = local_30 - (uint)local_40;
          local_2c = (local_2c - iVar1) - (uint)bVar9;
        } while (0 < local_2c);
      } while (-1 < local_2c);
    }
    *puVar6 = local_38;
    puVar6[1] = local_34;
    iVar1 = 0;
  }
  return iVar1;
}


