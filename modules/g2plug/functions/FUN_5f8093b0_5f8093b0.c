/* Module: g2plug.dll
   Function: FUN_5f8093b0
   Address: 5f8093b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f8093b0(int param_1,LPSTR param_2,int param_3)

{
  char cVar1;
  LPCSTR lpsz;
  uchar *puVar2;
  uchar local_100 [256];
  
  lpsz = (LPCSTR)(param_1 + 0x227);
  *param_2 = '\0';
  if (*lpsz != '\0') {
    cVar1 = *lpsz;
    while ((cVar1 != '\0' && (cVar1 != '\"'))) {
      lpsz = CharNextA(lpsz);
      cVar1 = *lpsz;
    }
    if (*lpsz != '\0') {
      puVar2 = (uchar *)CharNextA(lpsz);
      _mbscpy(local_100,puVar2);
      puVar2 = local_100;
      while ((local_100[0] != '\0' && (local_100[0] != '\"'))) {
        puVar2 = (uchar *)CharNextA((LPCSTR)puVar2);
        local_100[0] = *puVar2;
      }
      if (*puVar2 != '\0') {
        *puVar2 = '\0';
      }
      lstrcpynA(param_2,(LPCSTR)local_100,param_3);
      param_2[param_3 + -1] = '\0';
      return 0;
    }
  }
  return 1;
}


