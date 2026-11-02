/* Module: g2plug.dll
   Function: FUN_5f802ae0
   Address: 5f802ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f802ae0(int *param_1,char *param_2,undefined4 param_3)

{
  char *lpMultiByteStr;
  size_t sVar1;
  HGLOBAL pvVar2;
  char *pMem;
  uint cchWideChar;
  int local_4;
  
  lpMultiByteStr = param_2;
  local_4 = 0;
  if (*param_2 == '\0') {
    return 0;
  }
  sVar1 = _mbstrlen(param_2);
  pvVar2 = GlobalAlloc(0x42,sVar1 + 0xd + sVar1 + 1 & 0xffff);
  pMem = GlobalLock(pvVar2);
  if (pMem != (char *)0x0) {
    cchWideChar = sVar1 + 1 & 0xffff;
    MultiByteToWideChar(0,1,lpMultiByteStr,-1,(LPWSTR)(pMem + 0xc),cchWideChar);
    (pMem + cchWideChar * 2 + 10)[0] = '\0';
    (pMem + cchWideChar * 2 + 10)[1] = '\0';
    if (*(WCHAR *)(pMem + 0xc) != L'\0') {
      *(undefined4 *)(pMem + 4) = param_3;
      pMem[0] = '\f';
      pMem[1] = '\0';
      pMem[2] = '\0';
      pMem[3] = '\0';
      *(uint *)(pMem + 8) = cchWideChar * 2;
      param_2 = pMem;
      local_4 = FUN_5f81cc70(param_1,-1,(int *)&param_2,1);
      if (-1 < local_4) {
        return local_4;
      }
    }
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
    return local_4;
  }
  return -0x7ff8fff2;
}


