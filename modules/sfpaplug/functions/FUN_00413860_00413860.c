/* Module: sfpaplug.dll
   Function: FUN_00413860
   Address: 00413860
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00413860(uchar *param_1,uchar *param_2,uint param_3)

{
  uchar uVar1;
  LPCSTR lpsz;
  uchar *lpsz_00;
  int iVar2;
  uchar local_104;
  char local_103;
  char local_102 [258];
  
  *param_2 = '\0';
  if (*param_1 != '\0') {
    _mbscpy(&local_104,param_1);
    if ((local_104 == '\\') && (local_103 == '\\')) {
      lpsz = local_102;
      while ((local_102[0] != '\0' && (local_102[0] != '\\'))) {
        lpsz = CharNextA(lpsz);
        local_102[0] = *lpsz;
      }
      if (*lpsz == '\0') {
        return 0;
      }
      lpsz_00 = (uchar *)(lpsz + 1);
      uVar1 = lpsz[1];
      while ((uVar1 != '\0' && (uVar1 != '\\'))) {
        lpsz_00 = (uchar *)CharNextA((LPCSTR)lpsz_00);
        uVar1 = *lpsz_00;
      }
    }
    else {
      lpsz_00 = &local_104;
      while ((local_104 != '\0' && (local_104 != '\\'))) {
        lpsz_00 = (uchar *)CharNextA((LPCSTR)lpsz_00);
        local_104 = *lpsz_00;
      }
    }
    if (*lpsz_00 != '\0') {
      lpsz_00[1] = '\0';
      iVar2 = lstrlenA((LPCSTR)&local_104);
      if (iVar2 + 1U <= param_3) {
        _mbscpy(param_2,&local_104);
      }
      return iVar2;
    }
  }
  return 0;
}


