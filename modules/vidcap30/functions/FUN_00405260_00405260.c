/* Module: vidcap30.exe
   Function: FUN_00405260
   Address: 00405260
   Source: Ghidra pseudocode (Stage 10 batch) */


int * FUN_00405260(int *param_1,SIZE_T *param_2)

{
  LPCSTR lpString;
  int iVar1;
  HGLOBAL hMem;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *lpString1;
  int local_c;
  
  iVar4 = 0;
  *param_2 = 0;
  if (param_1 == (int *)0x0) {
    local_c = 0;
  }
  else {
    local_c = *param_1;
  }
  iVar3 = 0;
  if (0 < local_c) {
    do {
      iVar1 = lstrlenA(*(LPCSTR *)(param_1[2] + iVar3 * 4));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 1 + iVar1;
    } while (iVar3 < local_c);
  }
  hMem = GlobalAlloc(0,iVar4 + 0x16U);
  piVar2 = GlobalLock(hMem);
  iVar3 = 0;
  if (piVar2 != (int *)0x0) {
    lpString1 = piVar2 + 5;
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    *piVar2 = (int)lpString1 - (int)piVar2;
    piVar2[4] = 0;
    if (0 < local_c) {
      do {
        lpString = *(LPCSTR *)(param_1[2] + iVar3 * 4);
        iVar1 = lstrlenA(lpString);
        lstrcpynA((LPSTR)lpString1,lpString,iVar1 + 1);
        *(undefined1 *)((int)lpString1 + iVar1) = 0;
        lpString1 = (int *)((int)lpString1 + iVar1 + 1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_c);
    }
    *(undefined1 *)lpString1 = 0;
    *(undefined1 *)((int)lpString1 + 1) = 0;
    *param_2 = iVar4 + 0x16U;
  }
  return piVar2;
}


