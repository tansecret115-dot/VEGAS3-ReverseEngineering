/* Module: vegas30k.dll
   Function: FUN_0101fa10
   Address: 0101fa10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0101fa10(char *param_1)

{
  char cVar1;
  char *pcVar2;
  HANDLE hFindFile;
  BOOL BVar3;
  undefined4 uVar4;
  int iVar5;
  CHAR *pCVar6;
  bool bVar7;
  undefined4 local_248;
  _WIN32_FIND_DATAA local_244;
  char local_104;
  char local_103 [259];
  
  pcVar2 = &local_104;
  local_104 = *param_1;
  cVar1 = local_104;
  while (cVar1 != '\0') {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    pcVar2 = pcVar2 + 1;
    *pcVar2 = cVar1;
  }
  *(undefined4 *)pcVar2 = DAT_012041a0;
  pcVar2[4] = DAT_012041a4;
  hFindFile = FindFirstFileA(&local_104,&local_244);
  local_248 = 0;
  uVar4 = 0;
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      if ((((byte)local_244.dwFileAttributes & 0x10) != 0) &&
         (local_244.cFileName._0_2_ != DAT_011db8a8)) {
        iVar5 = 3;
        bVar7 = true;
        pCVar6 = local_244.cFileName;
        pcVar2 = "..";
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar7 = *pCVar6 == *pcVar2;
          pCVar6 = pCVar6 + 1;
          pcVar2 = pcVar2 + 1;
        } while (bVar7);
        if (!bVar7) {
          local_248 = 1;
          break;
        }
      }
      BVar3 = FindNextFileA(hFindFile,&local_244);
    } while (BVar3 != 0);
    FindClose(hFindFile);
    uVar4 = local_248;
  }
  return uVar4;
}


