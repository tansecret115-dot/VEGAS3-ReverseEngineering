/* Module: vidcap30.exe
   Function: FUN_00441880
   Address: 00441880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00441880(LPCSTR param_1,LPCSTR param_2)

{
  int iVar1;
  int iVar2;
  LPSTR lpString2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_4;
  
  FUN_0046ed20();
  iVar5 = 0;
  local_4 = 0;
  iVar1 = *(int *)(DAT_005ba4c0 + 0x6c);
  uVar3 = 1;
  iVar2 = **(int **)(iVar1 + 0x1c68);
  if (DAT_005bba94 == 0) {
    if (0 < iVar2) {
      do {
        lpString2 = *(LPSTR *)(*(int *)(*(int *)(iVar1 + 0x1c68) + 8) + iVar5 * 4);
        iVar4 = lstrcmpiA(param_1,lpString2);
        if (iVar4 == 0) {
          lstrcpynA(lpString2,param_2,0x104);
          lpString2[0x103] = '\0';
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
    uVar3 = FUN_0046fdd0(param_2,&local_4,0,0);
    DAT_005ba50c = DAT_005ba50c | 0x200;
  }
  return uVar3;
}


