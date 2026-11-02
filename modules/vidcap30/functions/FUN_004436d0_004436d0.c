/* Module: vidcap30.exe
   Function: FUN_004436d0
   Address: 004436d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004436d0(int param_1,LPCSTR param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 != 0) && (piVar3 = (int *)FUN_0042e4f0(param_1), piVar3 != (int *)0x0)) {
    iVar1 = *piVar3;
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(piVar3[2] + iVar5 * 4);
        if (param_3 == 0) {
          iVar4 = lstrcmpiA(*(LPCSTR *)(iVar2 + 0xc),param_2);
        }
        else {
          iVar4 = lstrcmpA(*(LPCSTR *)(iVar2 + 0xc),param_2);
        }
        if (iVar4 == 0) {
          return iVar2;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
  }
  return 0;
}


