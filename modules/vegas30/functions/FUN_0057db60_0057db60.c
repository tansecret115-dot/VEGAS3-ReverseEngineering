/* Module: vegas30.exe
   Function: FUN_0057db60
   Address: 0057db60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0057db60(int param_1,int param_2)

{
  HWND pHVar1;
  WPARAM WVar2;
  LRESULT LVar3;
  int iVar4;
  code *pcVar5;
  WPARAM *pWVar6;
  BOOL BVar7;
  UINT UVar8;
  LPARAM lParam;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_2c;
  WPARAM local_28 [10];
  
  pcVar5 = GetDlgItem_exref;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x435);
  if (pHVar1 != (HWND)0x0) {
    if (param_2 == 0) {
      UVar8 = 0x1032;
    }
    else {
      UVar8 = 0x1004;
    }
    local_2c = SendMessageA(pHVar1,UVar8,0,0);
    if (0 < local_2c) {
      do {
        if (param_2 == 0) {
          WVar2 = SendMessageA(pHVar1,0x100c,0xffffffff,2);
          if (-1 < (int)WVar2) goto LAB_0057dbd3;
        }
        else {
          WVar2 = 0;
LAB_0057dbd3:
          pWVar6 = local_28;
          for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pWVar6 = 0;
            pWVar6 = pWVar6 + 1;
          }
          local_28[0] = 0xc;
          local_28[2] = 0;
          local_28[3] = 0;
          local_28[4] = 2;
          local_28[5] = 0;
          local_28[6] = 0;
          local_28[7] = 0;
          local_28[8] = 0;
          local_28[9] = 0;
          local_28[1] = WVar2;
          LVar3 = SendMessageA(pHVar1,0x1005,0,(LPARAM)local_28);
          if ((LVar3 != 0) && (local_28[8] != 0)) {
            *(undefined4 *)(local_28[8] + 0x30c) = 1;
          }
        }
        SendMessageA(pHVar1,0x1008,WVar2,0);
        local_2c = local_2c + -1;
        pcVar5 = GetDlgItem_exref;
      } while (local_2c != 0);
    }
    LVar3 = SendMessageA(pHVar1,0x1004,0,0);
    if (LVar3 == 0) {
      uVar10 = 1;
      UVar8 = *(UINT *)(param_1 + 4);
      uVar9 = 0;
      lParam = 0xf4;
      if (param_2 == 0) {
        WVar2 = 0x49f;
      }
      else {
        WVar2 = 0x4a1;
      }
      pHVar1 = (HWND)(*pcVar5)();
      PostMessageA(pHVar1,UVar8,WVar2,lParam);
      BVar7 = *(BOOL *)(param_1 + 4);
      pHVar1 = (HWND)(*pcVar5)(BVar7,0x49f,0,uVar9,uVar10);
      EnableWindow(pHVar1,BVar7);
      BVar7 = *(BOOL *)(param_1 + 4);
      pHVar1 = (HWND)(*pcVar5)(BVar7,0x4a1,0);
      EnableWindow(pHVar1,BVar7);
      BVar7 = *(BOOL *)(param_1 + 4);
      pHVar1 = (HWND)(*pcVar5)(BVar7,3,0);
      EnableWindow(pHVar1,BVar7);
      pHVar1 = (HWND)(*pcVar5)(*(undefined4 *)(param_1 + 4),1);
      PostMessageA(pHVar1,0xf4,1,1);
      SetFocus(pHVar1);
    }
  }
  return;
}


