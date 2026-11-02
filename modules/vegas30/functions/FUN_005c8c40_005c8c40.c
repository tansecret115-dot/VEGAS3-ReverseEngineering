/* Module: vegas30.exe
   Function: FUN_005c8c40
   Address: 005c8c40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c8c40(int param_1,LPCSTR param_2)

{
  int iVar1;
  int *piVar2;
  LPSTR lpString2;
  LPCSTR lpsz;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char local_28 [39];
  undefined1 local_1;
  
  piVar2 = (int *)FUN_005b87b0(param_1);
  iVar6 = *piVar2;
  if (*param_2 == '$') {
    lpString2 = CharNextA(param_2);
    lstrcpynA(local_28,lpString2,0x28);
    local_1 = 0;
    lpsz = local_28;
    while (local_28[0] != '\0') {
      if (local_28[0] == '$') {
        *lpsz = '\0';
        lpsz = lpsz + 1;
        break;
      }
      lpsz = CharNextA(lpsz);
      local_28[0] = *lpsz;
    }
    iVar3 = _SfTextToLongTokenEx_20(local_28,0xffffffff,0,0x8000,0);
    iVar3 = iVar3 + -1;
    iVar4 = _SfTextToLongTokenEx_20(lpsz,0xffffffff,0,0x8000,0);
    iVar4 = iVar4 + -1;
    if ((-1 < iVar3) && (iVar3 < iVar6)) {
      piVar2 = *(int **)(*(int *)(piVar2[2] + iVar3 * 4) + 0x24);
      if (piVar2 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar2;
      }
      if ((-1 < iVar4) && (iVar4 <= iVar6 + -1)) {
        return *(int *)(piVar2[2] + iVar4 * 4);
      }
    }
  }
  else {
    param_1 = 0;
    if (0 < iVar6) {
      do {
        iVar7 = 0;
        iVar3 = *(int *)(piVar2[2] + param_1 * 4);
        iVar4 = **(int **)(iVar3 + 0x24);
        if (0 < iVar4) {
          do {
            iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x24) + 8) + iVar7 * 4);
            iVar5 = lstrcmpiA(*(LPCSTR *)(iVar1 + 0xc),param_2);
            if (iVar5 == 0) {
              return iVar1;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar4);
        }
        param_1 = param_1 + 1;
      } while (param_1 < iVar6);
    }
  }
  return 0;
}


