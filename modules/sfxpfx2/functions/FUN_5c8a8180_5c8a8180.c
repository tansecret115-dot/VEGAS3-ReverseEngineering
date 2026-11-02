/* Module: sfxpfx2.dll
   Function: FUN_5c8a8180
   Address: 5c8a8180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_5c8a8180(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  LPSTR lpString1;
  int iVar3;
  int *piVar4;
  bool bVar5;
  uchar local_400 [1024];
  
  if ((param_1 == (undefined4 *)0x0) || (piVar1 = (int *)param_1[0x50], piVar1 == (int *)0x0)) {
    return (undefined *)0x0;
  }
  iVar3 = 0;
  if (0 < *piVar1) {
    do {
      piVar4 = (int *)(piVar1[1] * iVar3 + piVar1[2]);
      if (((uint)piVar4[3] <= param_2) && (param_2 < (uint)piVar4[4])) {
        iVar3 = param_2 - piVar4[3];
        if (*(int *)(piVar4[1] + iVar3 * 4) == 0) {
          iVar2 = FUN_5c8a6f10(param_1,param_2,(LPSTR)local_400,0x400);
          bVar5 = false;
          if (iVar2 == 0) {
            _mbscpy(local_400,*(uchar **)(*piVar4 + iVar3 * 4));
            iVar2 = lstrlenA((LPCSTR)local_400);
            bVar5 = iVar2 == 0;
          }
          if (!bVar5 && -1 < iVar2) {
            lpString1 = calloc(1,iVar2 + 1U);
            if (lpString1 != (LPSTR)0x0) {
              lstrcpynA(lpString1,(LPCSTR)local_400,iVar2 + 1U);
              lpString1[iVar2] = '\0';
              *(LPSTR *)(piVar4[1] + iVar3 * 4) = lpString1;
            }
          }
        }
        return *(undefined **)(piVar4[1] + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *piVar1);
  }
  FUN_5c8b65c0(&DAT_5c8e96a0,(BYTE *)"SfGetString2(uId=%d, ERROR)");
  return &DAT_5c8e96a0;
}


