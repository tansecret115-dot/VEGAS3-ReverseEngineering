/* Module: vidcap30.exe
   Function: CreateSEA
   Address: 00534610
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::CreateSEA(char const *,char const *,unsigned long) */

long CArchive2::CreateSEA(char *param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  HANDLE hFile;
  DWORD DVar3;
  HANDLE pvVar4;
  int iVar5;
  DWORD local_20c;
  WCHAR local_208 [257];
  undefined2 uStack_6;
  undefined2 local_2;
  
                    /* 0x134610  9  ?CreateSEA@CArchive2@@QAGJPBD0K@Z */
  if (*(int *)(param_1 + 0x24) != 4) {
    return -0x7fffbffb;
  }
  lVar2 = IsSpaceForCreateSEA(param_1,param_2);
  if (lVar2 != 0) {
    FUN_00536e70(0xaaaaaaa8,"CreateSEA",0);
    return -0x7ffb1f38;
  }
  hFile = CreateFileA((LPCSTR)param_3,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    FUN_00536e70(0xaaaaaaa4,"CreateSEA",0);
    return -0x7ffb1ffa;
  }
  DVar3 = GetFileSize(hFile,&local_20c);
  *(DWORD *)(param_1 + 0x890) = DVar3;
  *(DWORD *)(param_1 + 0x894) = local_20c;
  pvVar4 = CreateFileA(param_2,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  *(HANDLE *)(param_1 + 0xc) = pvVar4;
  if (pvVar4 != (HANDLE)0xffffffff) {
    _mbscpy((uchar *)(param_1 + 0x77c),(uchar *)param_2);
    if (*(int *)(param_1 + 0x20) != 0) {
      MultiByteToWideChar(0,1,"Stub Executable",-1,local_208,0x104);
      local_2 = 0;
      (**(code **)(**(int **)(param_1 + 0x20) + 4))
                (local_208,*(undefined4 *)(param_1 + 0x890),*(undefined4 *)(param_1 + 0x894));
      (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa7);
    }
    iVar5 = FUN_00530220(hFile,0,0,*(undefined4 *)(param_1 + 0x890),*(undefined4 *)(param_1 + 0x894)
                         ,*(undefined4 *)(param_1 + 0xc),0,0);
    if (-1 < iVar5) {
      if (*(int **)(param_1 + 0x20) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaaf);
        MultiByteToWideChar(0,1,"Archive Entries",-1,(LPWSTR)&local_20c,0x104);
        uStack_6 = 0;
        (**(code **)(**(int **)(param_1 + 0x20) + 4))
                  (&local_20c,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaa7);
      }
      FUN_00530220(*(undefined4 *)(param_1 + 8),0,0,
                   *(uint *)(param_1 + 0x44) + *(uint *)(param_1 + 0x4c),
                   *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x50) +
                   (uint)CARRY4(*(uint *)(param_1 + 0x44),*(uint *)(param_1 + 0x4c)),
                   *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x890),
                   *(undefined4 *)(param_1 + 0x894));
      if (*(int **)(param_1 + 0x20) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(0xaaaaaaf);
      }
      _mbscpy((uchar *)(param_1 + 0x468),(uchar *)(param_1 + 0x678));
      uVar1 = *(uint *)(param_1 + 0x4c);
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x44) + uVar1;
      *(uint *)(param_1 + 0x1c) =
           *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x50) +
           (uint)CARRY4(*(uint *)(param_1 + 0x44),uVar1);
      lVar2 = FUN_00532ff0(uVar1,*(int *)(param_1 + 0x50));
      CloseHandle(hFile);
      return lVar2;
    }
    FUN_00536e70(0xaaaaaaa9,"CreateSEA",0);
    CloseHandle(hFile);
    return -0x7ffb1ff7;
  }
  FUN_00536e70(0xaaaaaaa2,"CreateSEA",0);
  CloseHandle(hFile);
  return -0x7ffb1ffa;
}


