/* Module: g2plug.dll
   Function: SfReal_GetSummaryInfo
   Address: 5f80ba80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfRealRead::SfReal_GetSummaryInfo(char const *,struct SFSUMMARYINFO *) */

long SfRealRead::SfReal_GetSummaryInfo(char *param_1,SFSUMMARYINFO *param_2)

{
  SFSUMMARYINFO *pSVar1;
  HANDLE hFile;
  BOOL BVar2;
  int iVar3;
  long lVar4;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
                    /* 0xba80  45  ?SfReal_GetSummaryInfo@SfRealRead@@YGJPBDPAUSFSUMMARYINFO@@@Z */
  lVar4 = -0x7fffbffb;
  hFile = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000000,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return -0x7fffbffb;
  }
  BVar2 = ReadFile(hFile,&local_c,8,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if ((BVar2 != 0) && (FUN_5f80bbf0((undefined2 *)&local_c,(uint)param_1), local_c == DAT_5f8762d0))
  {
    SetFilePointer(hFile,local_8 + -8,(PLONG)0x0,1);
    iVar3 = ReadFile(hFile,&local_c,8,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    while (iVar3 != 0) {
      FUN_5f80bbf0((undefined2 *)&local_c,(uint)param_1);
      if (local_c == DAT_5f8762d4) goto LAB_5f80bb6b;
      SetFilePointer(hFile,local_8 + -8,(PLONG)0x0,1);
      iVar3 = ReadFile(hFile,&local_c,8,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    }
    if (local_c == DAT_5f8762d4) {
LAB_5f80bb6b:
      ReadFile(hFile,local_4,2,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
      pSVar1 = param_2;
      FUN_5f80bc90(hFile,param_2,0xff);
      FUN_5f80bc90(hFile,pSVar1 + 0xff,0xff);
      FUN_5f80bc90(hFile,pSVar1 + 0x1fe,0xff);
      FUN_5f80bc90(hFile,pSVar1 + 0x2fd,0xff);
      lVar4 = 0;
    }
  }
  CloseHandle(hFile);
  return lVar4;
}


