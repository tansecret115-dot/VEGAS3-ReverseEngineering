/* Module: qt4plug.dll
   Function: FUN_5f514b20
   Address: 5f514b20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f514b20(HWND param_1)

{
  int *piVar1;
  HWND pHVar2;
  int iVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  
  piVar1 = (int *)GetWindowLongA(param_1,8);
  if (piVar1 != (int *)0x0) {
    LVar6 = 1;
    WVar5 = 0;
    UVar4 = 0x60e;
    pHVar2 = GetDlgItem(param_1,0x409);
    SendMessageA(pHVar2,UVar4,WVar5,LVar6);
    iVar3 = *(int *)(*piVar1 + 8) / 0x14;
    WVar5 = 0;
    UVar4 = 0x60f;
    pHVar2 = GetDlgItem(param_1,0x409);
    SendMessageA(pHVar2,UVar4,WVar5,iVar3);
    LVar6 = 0;
    WVar5 = 0;
    UVar4 = 0x60e;
    pHVar2 = GetDlgItem(param_1,0x408);
    SendMessageA(pHVar2,UVar4,WVar5,LVar6);
    iVar3 = *(int *)(*piVar1 + 8) + -1;
    WVar5 = 0;
    UVar4 = 0x60f;
    pHVar2 = GetDlgItem(param_1,0x408);
    SendMessageA(pHVar2,UVar4,WVar5,iVar3);
    LVar6 = 0;
    WVar5 = 0;
    UVar4 = 0x60e;
    pHVar2 = GetDlgItem(param_1,0x40a);
    SendMessageA(pHVar2,UVar4,WVar5,LVar6);
    LVar6 = 3000;
    WVar5 = 0;
    UVar4 = 0x60f;
    pHVar2 = GetDlgItem(param_1,0x40a);
    SendMessageA(pHVar2,UVar4,WVar5,LVar6);
  }
  return;
}


