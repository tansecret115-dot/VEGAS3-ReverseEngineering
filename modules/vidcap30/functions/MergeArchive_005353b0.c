/* Module: vidcap30.exe
   Function: MergeArchive
   Address: 005353b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::MergeArchive(unsigned long) */

long CArchive2::MergeArchive(ulong param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  HANDLE hFile;
  DWORD DVar4;
  uint uVar5;
  bool bVar6;
  uint in_stack_00000008;
  uint uStack_52c;
  int iStack_528;
  uint uStack_524;
  DWORD DStack_518;
  CHAR aCStack_514 [260];
  WCHAR local_410 [259];
  undefined2 local_20a;
  WCHAR aWStack_208 [259];
  undefined2 uStack_2;
  
                    /* 0x1353b0  59  ?MergeArchive@CArchive2@@QAGJK@Z */
  iVar2 = GetMultiVolumeStatus();
  if (iVar2 < 2) {
    FUN_00536e70(0xaaaaaab0,"MergeArchive",0);
    iVar2 = -0x7fffbffb;
  }
  else {
    lVar3 = IsSpaceForMerge();
    if (lVar3 != 0) {
      FUN_00536e70(0xaaaaaaa8,"MergeArchive",0);
      return -0x7ffb1f38;
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      MultiByteToWideChar(0,1,(LPCSTR)(param_1 + 0x678),-1,local_410,0x104);
      local_20a = 0;
      if ((~in_stack_00000008 & 1) == 0) {
        FUN_00555170(local_410);
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa7);
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x20) + 4))
                  (local_410,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa7);
      }
    }
    iVar2 = FUN_00530220(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x890),
                         *(undefined4 *)(param_1 + 0x894),*(undefined4 *)(param_1 + 0x4c),
                         *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0xc),
                         *(undefined4 *)(param_1 + 0x890),*(undefined4 *)(param_1 + 0x894));
    if (-1 < iVar2) {
      if ((*(int **)(param_1 + 0x20) != (int *)0x0) && ((~in_stack_00000008 & 1) != 0)) {
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaaf);
      }
      uStack_52c = *(uint *)(param_1 + 0x4c);
      iStack_528 = *(int *)(param_1 + 0x50);
      uVar1 = *(uint *)(param_1 + 0x898);
      _mbscpy((uchar *)local_410,(uchar *)(param_1 + 0x468));
      uStack_524 = 2;
      if (1 < uVar1) {
        do {
          FUN_00536d50(local_410,uStack_524,aCStack_514);
          hFile = CreateFileA(aCStack_514,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
          if (hFile == (HANDLE)0xffffffff) {
            FUN_00536e70(0xaaaaaaa4,"MergeArchive",0);
            return -0x7ffb1ffa;
          }
          DVar4 = GetFileSize(hFile,&DStack_518);
          if (*(int *)(param_1 + 0x20) != 0) {
            MultiByteToWideChar(0,1,aCStack_514,-1,aWStack_208,0x104);
            uStack_2 = 0;
            if ((~in_stack_00000008 & 1) == 0) {
              FUN_00555170(aWStack_208);
            }
            else {
              (**(code **)(**(int **)(param_1 + 0x20) + 4))(aWStack_208,DVar4,DStack_518);
            }
            (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa7);
          }
          iVar2 = FUN_00530220(hFile,0,0,DVar4,DStack_518,*(undefined4 *)(param_1 + 0xc),
                               *(uint *)(param_1 + 0x890) + uStack_52c,
                               *(int *)(param_1 + 0x894) + iStack_528 +
                               (uint)CARRY4(*(uint *)(param_1 + 0x890),uStack_52c));
          if (-1 < iVar2) {
            if (*(int **)(param_1 + 0x20) != (int *)0x0) {
              (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaaf);
            }
            bVar6 = CARRY4(uStack_52c,DVar4);
            uStack_52c = uStack_52c + DVar4;
            iStack_528 = iStack_528 + DStack_518 + (uint)bVar6;
          }
          CloseHandle(hFile);
          uStack_524 = uStack_524 + 1;
        } while (uStack_524 <= uVar1);
      }
      if (-1 < iVar2) {
        uVar5 = *(uint *)(param_1 + 0x890);
        iVar2 = FUN_00530220(*(undefined4 *)(param_1 + 8),uVar5 + *(uint *)(param_1 + 0x4c),
                             *(int *)(param_1 + 0x894) + *(int *)(param_1 + 0x50) +
                             (uint)CARRY4(uVar5,*(uint *)(param_1 + 0x4c)),
                             *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),
                             *(undefined4 *)(param_1 + 0xc),uVar5 + uStack_52c,
                             *(int *)(param_1 + 0x894) + iStack_528 + (uint)CARRY4(uVar5,uStack_52c)
                            );
        if (-1 < iVar2) {
          *(uint *)(param_1 + 0x4c) = uStack_52c;
          *(uint *)(param_1 + 0x18) = uStack_52c + *(uint *)(param_1 + 0x44);
          *(int *)(param_1 + 0x50) = iStack_528;
          *(uint *)(param_1 + 0x1c) =
               iStack_528 + *(int *)(param_1 + 0x48) +
               (uint)CARRY4(uStack_52c,*(uint *)(param_1 + 0x44));
          *(undefined4 *)(param_1 + 0x898) = 1;
          iVar2 = GetArchiveSEAStatus();
          if (iVar2 == 0) {
            *(undefined1 *)(param_1 + 0x468) = 0;
          }
          iVar2 = FUN_00532ff0(uStack_52c,iStack_528);
          if (-1 < iVar2) {
            uVar5 = 2;
            *(undefined4 *)(param_1 + 0x8a8) = 1;
            if (1 < uVar1) {
              do {
                FUN_00536d50(local_410,uVar5,aCStack_514);
                DeleteFileA(aCStack_514);
                uVar5 = uVar5 + 1;
              } while (uVar5 <= uVar1);
              return iVar2;
            }
          }
        }
      }
    }
  }
  return iVar2;
}


