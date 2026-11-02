/* Module: vfplugs.dll
   Function: FUN_004289b0
   Address: 004289b0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004289b0(LPCSTR param_1,uchar *param_2,uint param_3)

{
  HANDLE hFindFile;
  char *pcVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  _WIN32_FIND_DATAA local_140;
  
  bVar4 = false;
  hFindFile = FindFirstFileA(param_1,&local_140);
  if (hFindFile != (HANDLE)0xffffffff) {
    lstrcpynA((LPSTR)param_2,param_1,param_3);
    param_2[param_3 - 1] = '\0';
    pcVar1 = FUN_00451670((LPCSTR)param_2);
    *pcVar1 = '\0';
    iVar2 = lstrlenA((LPCSTR)param_2);
    iVar3 = lstrlenA(local_140.cFileName);
    bVar4 = (uint)(iVar2 + iVar3) < param_3;
    if (bVar4) {
      _mbscat(param_2,(uchar *)local_140.cFileName);
    }
    FindClose(hFindFile);
  }
  return bVar4;
}


