/* Module: sfcdi.dll
   Function: FUN_5bf3efa0
   Address: 5bf3efa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf3efa0(int *param_1,int *param_2)

{
  uchar uVar1;
  uchar *lpsz;
  uchar *puVar2;
  HANDLE hFindFile;
  BYTE *pBVar3;
  int iVar4;
  int iVar5;
  uchar *local_34c;
  int local_348;
  int local_344;
  uchar local_340 [512];
  _WIN32_FIND_DATAA local_140;
  
  iVar5 = 0;
  FUN_5bf3ce50((int)param_1,(LPCSTR)0x0);
  local_344 = 0;
  puVar2 = (uchar *)0x0;
  do {
    if (param_2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_2;
    }
    if (iVar4 <= local_344) {
      return iVar5;
    }
    if (param_2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_2;
    }
    if ((local_344 < 0) || (iVar5 + -1 < local_344)) {
      local_34c = (uchar *)0x0;
    }
    else {
      local_34c = (uchar *)(param_2[1] * local_344 + param_2[2]);
    }
    local_348 = 0;
    lpsz = local_34c + 0x104;
    iVar5 = *param_1;
    if (local_34c[0x104] == '\\') {
      lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
    }
    uVar1 = *lpsz;
    while (uVar1 != '\0') {
      puVar2 = lpsz;
      if (*lpsz == '\\') {
        puVar2 = (uchar *)CharNextA((LPCSTR)lpsz);
      }
      uVar1 = *puVar2;
      lpsz = puVar2;
      while ((uVar1 != '\0' && (uVar1 != '\\'))) {
        lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
        uVar1 = *lpsz;
      }
      uVar1 = *lpsz;
      if (uVar1 == '\0') break;
      *lpsz = '\0';
      FUN_5bf3ef60((LPCSTR)puVar2);
      local_348 = FUN_5bf3e580(iVar5,(LPCSTR)puVar2);
      if ((local_348 == 0) &&
         (iVar4 = FUN_5bf3dc10((int)param_1,iVar5,(uchar *)0x0,puVar2,(uchar *)0x0,0,0,0,0,0x10,0,
                               &local_348), iVar4 < 0)) {
        pBVar3 = FUN_5bf29180(DAT_5bf76078,0x107c);
        FUN_5bf25750(local_340,pBVar3);
        FUN_5bf3ce50((int)param_1,(LPCSTR)local_340);
        break;
      }
      *lpsz = uVar1;
      iVar5 = local_348;
    }
    hFindFile = FindFirstFileA((LPCSTR)local_34c,&local_140);
    if (hFindFile == (HANDLE)0xffffffff) {
      pBVar3 = FUN_5bf29180(DAT_5bf76078,0x107e);
      FUN_5bf25750(local_340,pBVar3);
      FUN_5bf3ce50((int)param_1,(LPCSTR)local_340);
      return -0x7ffb1ff9;
    }
    FindClose(hFindFile);
    local_348 = FUN_5bf3e580(iVar5,(LPCSTR)puVar2);
    if (local_348 != 0) {
      pBVar3 = FUN_5bf29180(DAT_5bf76078,0x107f);
      FUN_5bf25750(local_340,pBVar3);
      FUN_5bf3ce50((int)param_1,(LPCSTR)local_340);
      return -0x7ffb1fce;
    }
    iVar5 = FUN_5bf3dc10((int)param_1,iVar5,(uchar *)0x0,puVar2,local_34c,0,0,local_140.nFileSizeLow
                         ,local_140.nFileSizeHigh,local_140.dwFileAttributes,0,&local_348);
    if (iVar5 < 0) {
      pBVar3 = FUN_5bf29180(DAT_5bf76078,0x107d);
      FUN_5bf25750(local_340,pBVar3);
      FUN_5bf3ce50((int)param_1,(LPCSTR)local_340);
      return iVar5;
    }
    local_344 = local_344 + 1;
  } while( true );
}


