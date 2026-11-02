/* Module: sfppack2.dll
   Function: FUN_5ccecee0
   Address: 5ccecee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5ccecee0(int param_1)

{
  int *piVar1;
  HWND hWnd;
  LRESULT LVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar4 = &DAT_5cd61af8;
  do {
    hWnd = GetDlgItem(*(HWND *)(param_1 + 0x14),*piVar4);
    if (hWnd != (HWND)0x0) {
      LVar2 = SendMessageA(hWnd,0x60e,0,0);
      piVar1 = *(int **)(param_1 + 0x30);
      if ((int)piVar4 < 0x5cd61b08) {
        (**(code **)(*piVar1 + 400))(piVar1,LVar2,iVar3 + 1);
      }
      else {
        (**(code **)(*piVar1 + 0x198))(piVar1,LVar2,iVar3 + -3);
      }
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + 1;
  } while ((int)piVar4 < 0x5cd61b18);
  return;
}


