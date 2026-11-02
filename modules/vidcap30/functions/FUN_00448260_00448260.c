/* Module: vidcap30.exe
   Function: FUN_00448260
   Address: 00448260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00448260(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  LPSTR lpString1;
  LPCSTR lpString2;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = param_2;
  iVar4 = 0;
  *(int **)(param_1 + 0x2ec) = param_2;
  iVar1 = *param_2;
  if (0 < iVar1) {
    do {
      lpString1 = *(LPSTR *)(piVar2[2] + iVar4 * 4);
      iVar3 = FUN_0044c6e0(*(undefined4 *)(lpString1 + 0x20c));
      if (((iVar3 != 0) && (lpString2 = *(LPCSTR *)(iVar3 + 0x14), lpString2 != (LPCSTR)0x0)) &&
         (*lpString2 != '\0')) {
        lstrcpynA(lpString1,lpString2,0x208);
        lpString1[0x207] = '\0';
        FUN_004171c0(*(undefined4 *)(iVar3 + 0x14),&param_2,lpString1);
        *(int **)(lpString1 + 0x208) = param_2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  FUN_00405880(DAT_005ba4c0,piVar2,*(undefined4 *)(param_1 + 0x14),param_3);
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  return;
}


