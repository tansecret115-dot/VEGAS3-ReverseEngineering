/* Module: vidcap30.exe
   Function: FUN_00454dd0
   Address: 00454dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00454dd0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  iVar3 = -1;
  if ((param_2 != (int *)0x0) && (iVar4 = 0, 0 < *piVar1)) {
    do {
      if (iVar3 != -1) break;
      iVar2 = *(int *)(piVar1[2] + iVar4 * 4);
      if ((((*(int *)(iVar2 + 0x14) <= *param_2) && (*param_2 < *(int *)(iVar2 + 0x1c))) &&
          (*(int *)(iVar2 + 0x18) <= param_2[1])) && (param_2[1] < *(int *)(iVar2 + 0x20))) {
        iVar3 = iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *piVar1);
  }
  if (iVar3 != *(int *)(param_1 + 0x34)) {
    *(int *)(param_1 + 0x34) = iVar3;
    RedrawWindow(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x14),(HRGN)0x0,0x101);
  }
  return;
}


