/* Module: vidcap30.exe
   Function: FUN_0044d1b0
   Address: 0044d1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044d1b0(int param_1,LPCSTR param_2)

{
  int iVar1;
  LPCSTR lpString1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = FUN_0044c620(param_1);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        lpString1 = (LPCSTR)FUN_0044c5c0(param_1,iVar3);
        iVar2 = lstrcmpiA(lpString1,param_2);
        if (iVar2 == 0) {
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  return 1;
}


