/* Module: sfcdi.dll
   Function: FUN_5bf3d210
   Address: 5bf3d210
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf3d210(int param_1,int param_2,int param_3)

{
  int *piVar1;
  DWORD DVar2;
  HANDLE hObject;
  uchar *_Source;
  BYTE *pBVar3;
  int iVar4;
  int iVar5;
  int local_410;
  uchar local_408 [260];
  CHAR local_304 [260];
  uchar local_200 [512];
  
  iVar5 = 0;
  local_410 = 0;
  FUN_5bf3ce50(param_1,(LPCSTR)0x0);
  DVar2 = GetTempPathA(0x104,(LPSTR)local_408);
  while( true ) {
    piVar1 = *(int **)(param_2 + 0x214);
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if (iVar4 <= iVar5) goto LAB_5bf3d34c;
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if ((iVar5 < 0) || (iVar4 + -1 < iVar5)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(piVar1[2] + iVar5 * 4);
    }
    _mbscpy(local_408 + DVar2,(uchar *)(iVar4 + 0x110));
    hObject = CreateFileA((LPCSTR)local_408,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                          (HANDLE)0x0);
    if (hObject == (HANDLE)0xffffffff) break;
    CloseHandle(hObject);
    GetShortPathNameA((LPCSTR)local_408,local_304,0x104);
    _Source = (uchar *)FUN_5bf230b0(local_304);
    _mbscpy((uchar *)(iVar4 + 0xc),_Source);
    iVar5 = iVar5 + 1;
    *(uint *)(iVar4 + 0x218) = *(uint *)(iVar4 + 0x218) | 0x20;
  }
  pBVar3 = FUN_5bf29180(DAT_5bf76078,0x1080);
  FUN_5bf25750(local_200,pBVar3);
  FUN_5bf3ce50(param_1,(LPCSTR)local_200);
  local_410 = -0x7ffb1ff9;
LAB_5bf3d34c:
  iVar5 = 0;
  while( true ) {
    piVar1 = *(int **)(param_2 + 0x214);
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if (iVar4 <= iVar5) break;
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if ((iVar5 < 0) || (iVar4 + -1 < iVar5)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(piVar1[2] + iVar5 * 4);
    }
    _mbscpy(local_408 + DVar2,(uchar *)(iVar4 + 0x110));
    DeleteFileA((LPCSTR)local_408);
    iVar5 = iVar5 + 1;
  }
  if (param_3 != 0) {
    iVar5 = 0;
    while( true ) {
      piVar1 = *(int **)(param_2 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if (iVar4 <= iVar5) break;
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      if ((iVar5 < 0) || (iVar4 + -1 < iVar5)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(piVar1[2] + iVar5 * 4);
      }
      if (((*(uint *)(iVar4 + 8) & 0x10) != 0) &&
         (local_410 = FUN_5bf3d210(param_1,iVar4,param_3), local_410 < 0)) {
        return local_410;
      }
      iVar5 = iVar5 + 1;
    }
  }
  return local_410;
}


