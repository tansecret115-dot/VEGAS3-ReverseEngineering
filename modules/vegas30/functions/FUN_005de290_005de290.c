/* Module: vegas30.exe
   Function: FUN_005de290
   Address: 005de290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005de290(HANDLE param_1)

{
  HANDLE hFile;
  int iVar1;
  BOOL BVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int local_24;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  int local_10 [4];
  
  hFile = param_1;
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  iVar1 = riff64_ReadFileID(hFile,local_20,local_10);
  if (-1 < iVar1) {
    iVar1 = 4;
    bVar5 = true;
    piVar3 = &DAT_0062a4e0;
    piVar4 = local_10;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *piVar3 == *piVar4;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (bVar5) {
      iVar1 = riff64_FindChunkHeader
                        (hFile,DAT_0062a510,DAT_0062a514,DAT_0062a518,DAT_0062a51c,local_18,0);
      if (-1 < iVar1) {
        BVar2 = ReadFile(hFile,&local_24,4,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
        if (((BVar2 != 0) && (param_1 == (HANDLE)0x4)) && (local_24 == 0x70)) {
          return 0;
        }
      }
    }
  }
  return 1;
}


