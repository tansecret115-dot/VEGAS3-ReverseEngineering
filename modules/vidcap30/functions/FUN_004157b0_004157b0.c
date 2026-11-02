/* Module: vidcap30.exe
   Function: FUN_004157b0
   Address: 004157b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004157b0(undefined4 param_1,int param_2,undefined4 *param_3,WPARAM param_4)

{
  HWND hWnd;
  longlong lVar1;
  SHORT SVar2;
  undefined4 uVar3;
  LRESULT LVar4;
  uint uVar5;
  WPARAM wParam;
  int iVar6;
  WPARAM WVar7;
  WPARAM *pWVar8;
  float10 fVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int local_84;
  WPARAM local_78 [8];
  undefined4 local_58;
  undefined1 local_50 [12];
  int local_44;
  undefined4 local_40;
  undefined1 local_28 [40];
  
  WVar7 = 0;
  hWnd = (HWND)*param_3;
  local_84 = 0;
  lVar1 = 0;
  if (param_2 == 0x9c4b) {
    switch(param_3[2]) {
    case 0xffffff65:
      if (*(short *)(param_3 + 3) == 0x20) {
        WVar7 = FUN_0041f9c0(hWnd,1);
        uVar5 = SendMessageA(hWnd,0x102c,WVar7,0xf000);
        wParam = SendMessageA(hWnd,0x100c,0xffffffff,2);
        if (wParam != 0xffffffff) {
          do {
            if (wParam != WVar7) {
              local_44 = ((uVar5 >> 0xc == 1) + 1) * 0x1000;
              local_40 = 0xf000;
              SendMessageA(hWnd,0x102b,wParam,(LPARAM)local_50);
            }
            wParam = SendMessageA(hWnd,0x100c,wParam,2);
          } while (wParam != 0xffffffff);
          return 0;
        }
      }
      else if ((*(short *)(param_3 + 3) == 0x41) && (SVar2 = GetKeyState(0x11), SVar2 < 0)) {
        FUN_0041f810(hWnd);
        return 0;
      }
      break;
    case 0xffffff94:
      FUN_0041f990(param_4 + 8,param_3[4]);
      SendMessageA(hWnd,0x1030,param_4,0x415da0);
      break;
    case 0xffffff9b:
      LVar4 = SendMessageA(hWnd,0x1004,0,0);
      lVar10 = 0;
      if (0 < LVar4) {
        do {
          lVar1 = lVar10;
          uVar5 = SendMessageA(hWnd,0x102c,WVar7,0xf000);
          if (uVar5 >> 0xc != 1) {
            pWVar8 = local_78;
            for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
              *pWVar8 = 0;
              pWVar8 = pWVar8 + 1;
            }
            local_78[0] = 4;
            local_78[1] = WVar7;
            SendMessageA(hWnd,0x1005,0,(LPARAM)local_78);
            lVar10 = FUN_004443a0(local_58);
            lVar1 = lVar10 + lVar1;
            local_84 = local_84 + 1;
          }
          WVar7 = WVar7 + 1;
          lVar10 = lVar1;
        } while ((int)WVar7 < LVar4);
      }
      puVar11 = local_28;
      uVar3 = 0x28;
      fVar9 = (float10)FUN_0042ed90();
      FUN_0045aec0(lVar1,(double)fVar9,puVar11,uVar3);
      puVar11 = local_28;
      uVar3 = _SfGetString_8(DAT_005ba2a0,0xc544);
      SfSetDlgItemText(param_1,0x4eb,uVar3,local_84,puVar11);
      return 0;
    case 0xfffffff4:
      uVar3 = FUN_00415d70(param_1,param_3);
      return uVar3;
    }
  }
  return 0;
}


