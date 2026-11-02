/* Module: vegas30.exe
   Function: FUN_005dd1d0
   Address: 005dd1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005dd1d0(HANDLE param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  HANDLE hFile;
  int iVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  undefined8 uVar11;
  DWORD local_4c;
  undefined8 local_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [4];
  int local_10 [4];
  
  puVar7 = param_4;
  hFile = param_1;
  local_40 = *param_4;
  local_3c = param_4[1];
  local_38 = local_40;
  local_34 = local_3c;
  iVar1 = riff64_FindListChunk
                    (param_1,DAT_0062a550,DAT_0062a554,DAT_0062a558,DAT_0062a55c,&local_48,&local_38
                    );
  iVar2 = local_48._4_4_;
  uVar4 = (uint)local_48;
  if (-1 < iVar1) {
    local_40 = (uint)local_48;
    local_3c = local_48._4_4_;
    riff64_SaveLocation(hFile,&local_30);
    iVar1 = riff64_FindChunkHeader
                      (hFile,DAT_0062a560,DAT_0062a564,DAT_0062a568,DAT_0062a56c,&local_48,&local_40
                      );
    if (iVar1 < 0) {
      return -0x7ffb1ff8;
    }
    iVar1 = FUN_005db0d0(hFile,param_2,&local_48,DAT_0062a560,DAT_0062a564,DAT_0062a568,DAT_0062a56c
                         ,param_3,&param_1);
    if (-1 < iVar1) {
      riff64_RestoreLocation(hFile,local_30,local_2c);
      uVar11 = CONCAT44(local_48._4_4_,(uint)local_48);
      local_40 = uVar4;
      local_3c = iVar2;
      if (-1 < iVar2) {
        if (0 < iVar2) goto LAB_005dd310;
        do {
          if (local_40 < 0x18) break;
LAB_005dd310:
          do {
            local_48 = uVar11;
            iVar2 = riff64_ReadChunkHeader(hFile,local_10,&local_48);
            if (iVar2 < 0) {
              return -0x7ffb1ff8;
            }
            bVar10 = 0x17 < local_38;
            local_38 = local_38 - 0x18;
            local_34 = (local_34 - 1) + (uint)bVar10;
            bVar10 = 0x17 < local_40;
            local_40 = local_40 - 0x18;
            local_3c = local_3c + -1 + (uint)bVar10;
            iVar1 = 4;
            bVar10 = true;
            piVar8 = local_10;
            piVar9 = &DAT_0062a4d0;
            do {
              if (iVar1 == 0) break;
              iVar1 = iVar1 + -1;
              bVar10 = *piVar8 == *piVar9;
              piVar8 = piVar8 + 1;
              piVar9 = piVar9 + 1;
            } while (bVar10);
            if (bVar10) {
              BVar3 = ReadFile(hFile,local_20,0x10,&local_4c,(LPOVERLAPPED)0x0);
              if (BVar3 == 0) {
                return -0x7ffb1ff8;
              }
              riff64_SaveLocation(hFile,&local_28);
              iVar5 = 4;
              iVar1 = (uint)local_48 - 0x10;
              iVar6 = local_48._4_4_ - (uint)((uint)local_48 < 0x10);
              bVar10 = true;
              piVar8 = local_20;
              piVar9 = &DAT_0062a5b0;
              do {
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                bVar10 = *piVar8 == *piVar9;
                piVar8 = piVar8 + 1;
                piVar9 = piVar9 + 1;
              } while (bVar10);
              if (bVar10) {
LAB_005dd5d5:
                if (iVar2 < 0) {
                  return iVar2;
                }
              }
              else {
                iVar5 = 4;
                bVar10 = true;
                piVar8 = &DAT_0062a570;
                piVar9 = local_20;
                do {
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  bVar10 = *piVar8 == *piVar9;
                  piVar8 = piVar8 + 1;
                  piVar9 = piVar9 + 1;
                } while (bVar10);
                if (bVar10) {
                  iVar2 = FUN_005dd150(hFile,param_2,param_3,param_1,iVar1,iVar6);
                  goto LAB_005dd5d5;
                }
                iVar5 = 4;
                bVar10 = true;
                piVar8 = &DAT_0062a680;
                piVar9 = local_20;
                do {
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  bVar10 = *piVar8 == *piVar9;
                  piVar8 = piVar8 + 1;
                  piVar9 = piVar9 + 1;
                } while (bVar10);
                if (bVar10) {
                  if (param_1 == (HANDLE)0x0) {
LAB_005dd5c3:
                    uVar11 = riff64_SkipChunk(hFile,local_48);
                    local_48 = uVar11;
                  }
                  else {
                    iVar2 = FUN_005dc360(hFile,param_2,(int)param_1 + 0x638,param_1,param_3,iVar1,
                                         iVar6);
                  }
                  goto LAB_005dd5d5;
                }
                iVar5 = 4;
                bVar10 = true;
                piVar8 = &DAT_0062a7b0;
                piVar9 = local_20;
                do {
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  bVar10 = *piVar8 == *piVar9;
                  piVar8 = piVar8 + 1;
                  piVar9 = piVar9 + 1;
                } while (bVar10);
                if (bVar10) {
                  if (param_1 == (HANDLE)0x0) goto LAB_005dd5c3;
                  iVar2 = FUN_005db780(hFile,param_2,(int)param_1 + 0x38,iVar1,iVar6,param_1);
                  goto LAB_005dd5d5;
                }
                iVar5 = 4;
                bVar10 = true;
                piVar8 = &DAT_0062a6c0;
                piVar9 = local_20;
                do {
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  bVar10 = *piVar8 == *piVar9;
                  piVar8 = piVar8 + 1;
                  piVar9 = piVar9 + 1;
                } while (bVar10);
                if (bVar10) {
                  if (param_1 == (HANDLE)0x0) goto LAB_005dd5c3;
                  iVar2 = FUN_005db590(hFile,param_2,(int)param_1 + 0x78,iVar1,iVar6,param_1,2,
                                       0xffffffff,0x7fffffff);
                  goto LAB_005dd5d5;
                }
                iVar5 = 4;
                bVar10 = true;
                piVar8 = &DAT_0062a6d0;
                piVar9 = local_20;
                do {
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  bVar10 = *piVar8 == *piVar9;
                  piVar8 = piVar8 + 1;
                  piVar9 = piVar9 + 1;
                } while (bVar10);
                if (bVar10) {
                  if (param_1 == (HANDLE)0x0) goto LAB_005dd5c3;
                  iVar2 = FUN_005db590(hFile,param_2,(int)param_1 + 0x7c,iVar1,iVar6,param_1,3,
                                       0xffffffff,0x7fffffff);
                  goto LAB_005dd5d5;
                }
                iVar5 = 4;
                bVar10 = true;
                piVar8 = &DAT_0062a710;
                piVar9 = local_20;
                do {
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  bVar10 = *piVar8 == *piVar9;
                  piVar8 = piVar8 + 1;
                  piVar9 = piVar9 + 1;
                } while (bVar10);
                if (bVar10) {
                  if (param_1 == (HANDLE)0x0) goto LAB_005dd5c3;
                  iVar2 = FUN_005db3a0(hFile,param_2,(int)param_1 + 0x80,param_1,iVar1,iVar6);
                  goto LAB_005dd5d5;
                }
                iVar5 = 4;
                bVar10 = true;
                piVar8 = &DAT_0062a790;
                piVar9 = local_20;
                do {
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  bVar10 = *piVar8 == *piVar9;
                  piVar8 = piVar8 + 1;
                  piVar9 = piVar9 + 1;
                } while (bVar10);
                if (bVar10) {
                  if (param_1 == (HANDLE)0x0) goto LAB_005dd5c3;
                  iVar2 = FUN_005db960(hFile,param_2,(int)param_1 + 0x38,iVar1,iVar6);
                  goto LAB_005dd5d5;
                }
                iVar5 = 4;
                bVar10 = true;
                piVar8 = &DAT_0062a770;
                piVar9 = local_20;
                do {
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  bVar10 = *piVar8 == *piVar9;
                  piVar8 = piVar8 + 1;
                  piVar9 = piVar9 + 1;
                } while (bVar10);
                if (bVar10) {
                  if (param_1 == (HANDLE)0x0) {
                    uVar11 = riff64_SkipChunk(hFile,local_48);
                    local_48 = uVar11;
                  }
                  else {
                    iVar2 = FUN_005dbbc0(hFile,param_2,param_1,param_3,iVar1,iVar6);
                  }
                  if (iVar2 != -0x7ffb1f7c) goto LAB_005dd5d5;
                }
              }
              riff64_RestoreLocation(hFile,local_28,local_24);
              SetFilePointer(hFile,-0x10,(PLONG)0x0,1);
              uVar11 = riff64_SkipChunk(hFile,local_48);
              puVar7 = param_4;
            }
            else {
              uVar11 = riff64_SkipChunk(hFile,local_48);
            }
            iVar2 = (int)((ulonglong)uVar11 >> 0x20);
            uVar4 = (uint)uVar11;
            bVar10 = local_38 < uVar4;
            local_38 = local_38 - uVar4;
            local_34 = (local_34 - iVar2) - (uint)bVar10;
            bVar10 = local_40 < uVar4;
            local_40 = local_40 - uVar4;
            local_3c = (local_3c - iVar2) - (uint)bVar10;
          } while (0 < (int)local_3c);
        } while (-1 < (int)local_3c);
      }
      if ((((param_1 != (HANDLE)0x0) && ((*(uint *)((int)param_1 + 0x10) & 0x200) != 0)) &&
          (iVar2 = **(int **)((int)param_1 + 0x24), 0 < iVar2)) && (iVar1 = 0, 0 < iVar2)) {
        do {
          iVar5 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x24) + 8) + iVar1 * 4);
          iVar1 = iVar1 + 1;
          *(uint *)(iVar5 + 0x10) = *(uint *)(iVar5 + 0x10) | 0x400;
        } while (iVar1 < iVar2);
      }
      *puVar7 = local_38;
      puVar7[1] = local_34;
      iVar1 = 0;
    }
  }
  return iVar1;
}


