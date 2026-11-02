/* Module: vidcap30.exe
   Function: FUN_004444d0
   Address: 004444d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004444d0(int param_1,int param_2,LPCSTR param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar4 = 0;
    iVar1 = **(int **)(param_2 + 0x10);
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 8) + iVar4 * 4);
        if (param_4 == 0) {
          iVar3 = lstrcmpiA(*(LPCSTR *)(iVar2 + 0x10),param_3);
        }
        else {
          iVar3 = lstrcmpA(*(LPCSTR *)(iVar2 + 0x10),param_3);
        }
        if (iVar3 == 0) {
          return iVar2;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  return 0;
}


