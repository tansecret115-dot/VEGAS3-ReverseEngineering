/* Module: vidcap30.exe
   Function: FUN_0045b2c0
   Address: 0045b2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0045b2c0(int param_1,int *param_2)

{
  int iVar1;
  LPCSTR lpString1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lpString1 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(param_1);
  iVar3 = 0;
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    iVar1 = *param_2;
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar2 = lstrcmpiA(lpString1,*(LPCSTR *)(param_2[2] + iVar4 * 4));
        if (iVar2 == 0) {
          iVar3 = 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  return iVar3;
}


