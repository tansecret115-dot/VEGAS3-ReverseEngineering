/* Module: vidcap30.exe
   Function: FUN_0049ee50
   Address: 0049ee50
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_0049ee50(int param_1,LPCSTR param_2,SHFILEINFOA *param_3,uint param_4)

{
  CHAR *lpString;
  HICON pHVar1;
  uint uVar2;
  SHFILEINFOA local_160;
  
  lpString = param_3->szDisplayName;
  param_3->iIcon = 0;
  *lpString = '\0';
  SHGetFileInfoA(param_2,0,param_3,0x160,param_4);
  pHVar1 = (HICON)param_3->iIcon;
  if ((param_4 & 2) == 0) {
    if (pHVar1 == (HICON)0x0) {
      pHVar1 = (HICON)(*(int *)(param_1 + 4) + 0xb);
    }
    else if (*(int *)(param_1 + 4) <= (int)pHVar1) {
      pHVar1 = (HICON)((int)&pHVar1[3].unused + 1);
    }
  }
  else {
    if (pHVar1 == (HICON)0x0) {
      param_3->iIcon = *(int *)(param_1 + 0x18);
      param_3->hIcon = *(HICON *)(param_1 + 0x1c);
      goto LAB_0049eef4;
    }
    if (*(int *)(param_1 + 4) <= (int)pHVar1) {
      pHVar1 = (HICON)((int)&pHVar1[3].unused + 1);
    }
    param_3->hIcon = pHVar1;
    SHGetFileInfoA(param_2,0,&local_160,0x160,0x4001);
    pHVar1 = (HICON)local_160.iIcon;
    if (*(int *)(param_1 + 4) <= local_160.iIcon) {
      pHVar1 = (HICON)((int)&((HICON)(local_160.iIcon + 0xc))->unused + 1);
    }
  }
  param_3->iIcon = (int)pHVar1;
LAB_0049eef4:
  if (*lpString != '\0') {
    uVar2 = lstrlenA(lpString);
    return uVar2;
  }
  return (uint)lpString & 0xffff0000;
}


