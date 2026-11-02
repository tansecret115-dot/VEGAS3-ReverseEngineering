/* Module: vidcap30.exe
   Function: FUN_00444550
   Address: 00444550
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00444550(int param_1,int param_2,LPCSTR param_3)

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
        iVar3 = lstrcmpiA(*(LPCSTR *)(iVar2 + 0x14),param_3);
        if (iVar3 == 0) {
          return iVar2;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  return 0;
}


