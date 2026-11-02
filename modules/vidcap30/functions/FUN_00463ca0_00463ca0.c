/* Module: vidcap30.exe
   Function: FUN_00463ca0
   Address: 00463ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00463ca0(HWND param_1,int param_2)

{
  int *piVar1;
  HWND pHVar2;
  uint uVar3;
  uchar *_Source;
  WPARAM WVar4;
  HWND hWnd;
  LPARAM *pLVar5;
  LPARAM lParam;
  LRESULT LVar6;
  int *piVar7;
  uint uVar8;
  int lParam_00;
  LPARAM lParam_01;
  BOOL BVar9;
  uint local_120;
  uchar local_104 [260];
  
  pHVar2 = GetDlgItem(param_1,0xe8e);
  SendMessageA(pHVar2,0x184,0,0);
  local_120 = 0;
  uVar8 = **(uint **)(param_2 + 4);
  if (uVar8 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(*(int *)(param_2 + 4) + 8) + local_120 * 4);
      uVar3 = 0;
      if (*(int *)(param_2 + 0xc) != 0) {
        piVar7 = *(int **)(param_2 + 8);
        do {
          if (*piVar7 == *piVar1) break;
          uVar3 = uVar3 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 < *(uint *)(param_2 + 0xc));
      }
      if (uVar3 == *(uint *)(param_2 + 0xc)) {
        _Source = (uchar *)_SfGetString_8(DAT_005ba2a0,piVar1[1]);
        _mbscpy(local_104,_Source);
        lParam_00 = *piVar1;
        WVar4 = SendMessageA(pHVar2,0x180,0,(LPARAM)local_104);
        SendMessageA(pHVar2,0x19a,WVar4,lParam_00);
      }
      local_120 = local_120 + 1;
    } while (local_120 < uVar8);
  }
  hWnd = GetDlgItem(param_1,0xe7d);
  SendMessageA(hWnd,0x184,0,0);
  uVar8 = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    local_120 = 0;
    do {
      pLVar5 = (LPARAM *)(*(int *)(param_2 + 8) + local_120);
      lParam_01 = *pLVar5;
      lParam = _SfGetString_8(DAT_005ba2a0,pLVar5[1]);
      WVar4 = SendMessageA(hWnd,0x180,0,lParam);
      SendMessageA(hWnd,0x19a,WVar4,lParam_01);
      uVar8 = uVar8 + 1;
      local_120 = local_120 + 0x10;
    } while (uVar8 < *(uint *)(param_2 + 0xc));
  }
  SendMessageA(pHVar2,0x186,0,0);
  LVar6 = SendMessageA(pHVar2,0x18b,0,0);
  if (LVar6 == 0) {
    BVar9 = 0;
    pHVar2 = GetDlgItem(param_1,0xe3b);
    EnableWindow(pHVar2,BVar9);
  }
  SendMessageA(hWnd,0x186,0,0);
  LVar6 = SendMessageA(hWnd,0x18b,0,0);
  if (LVar6 == 1) {
    BVar9 = 0;
    pHVar2 = GetDlgItem(param_1,0xe7e);
    EnableWindow(pHVar2,BVar9);
  }
  FUN_00463770(param_1,hWnd,0);
  return;
}


