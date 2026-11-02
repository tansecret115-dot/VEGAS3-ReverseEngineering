/* Module: vegas30.exe
   Function: FUN_00524490
   Address: 00524490
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00524490(int param_1,LPCSTR param_2,int param_3,int *param_4)

{
  SIZE_T dwBytes;
  char cVar1;
  HGLOBAL pvVar2;
  LPSTR pCVar3;
  SIZE_T SVar4;
  int iVar5;
  SIZE_T dwBytes_00;
  undefined4 local_120;
  undefined1 local_11c [16];
  CHAR local_10c [268];
  
  iVar5 = 0;
  dwBytes_00 = 0;
  if (param_3 == *(int *)(param_1 + 0x10c)) {
    FUN_00508ba0(param_3,local_11c);
    cVar1 = *param_2;
    while( true ) {
      if (cVar1 == '\0') {
        iVar5 = lstrcmpA(local_10c,param_2);
        if (iVar5 != 0) {
          *param_4 = 0;
          return -0x7ff8ffa9;
        }
        *param_4 = param_3;
        return 0;
      }
      if (cVar1 == '\\') break;
      iVar5 = iVar5 + 1;
      FUN_00508ba0(param_3,local_11c);
      cVar1 = param_2[iVar5];
    }
    dwBytes_00 = iVar5 + 1;
    pvVar2 = GlobalAlloc(0x40,dwBytes_00);
    pCVar3 = GlobalLock(pvVar2);
    lstrcpynA(pCVar3,param_2,dwBytes_00);
    pCVar3[iVar5] = '\0';
    iVar5 = lstrcmpA(local_10c,pCVar3);
    if (iVar5 != 0) {
      *param_4 = 0;
      pvVar2 = GlobalHandle(pCVar3);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(pCVar3);
      GlobalFree(pvVar2);
      return -0x7ff8ffa9;
    }
    pvVar2 = GlobalHandle(pCVar3);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pCVar3);
    GlobalFree(pvVar2);
  }
  cVar1 = param_2[dwBytes_00];
  SVar4 = dwBytes_00;
  while( true ) {
    if (cVar1 == '\0') {
      iVar5 = FUN_00524400(param_3,param_4,param_2 + dwBytes_00);
      return iVar5;
    }
    if (cVar1 == '\\') break;
    cVar1 = param_2[SVar4 + 1];
    SVar4 = SVar4 + 1;
  }
  dwBytes = (SVar4 - dwBytes_00) + 1;
  pvVar2 = GlobalAlloc(0x40,dwBytes);
  pCVar3 = GlobalLock(pvVar2);
  lstrcpynA(pCVar3,param_2 + dwBytes_00,dwBytes);
  pCVar3[SVar4 - dwBytes_00] = '\0';
  iVar5 = FUN_00524400(param_3,&local_120,pCVar3);
  pvVar2 = GlobalHandle(pCVar3);
  GlobalUnlock(pvVar2);
  pvVar2 = GlobalHandle(pCVar3);
  GlobalFree(pvVar2);
  if (iVar5 < 0) {
    *param_4 = 0;
    return iVar5;
  }
  iVar5 = FUN_00524490(param_1,param_2 + SVar4 + 1,local_120,param_4);
  return iVar5;
}


