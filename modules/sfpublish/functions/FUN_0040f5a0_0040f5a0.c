/* Module: sfpublish.dll
   Function: FUN_0040f5a0
   Address: 0040f5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040f5a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  HWND hWnd;
  LRESULT LVar4;
  LRESULT LVar5;
  int *unaff_EBP;
  int *unaff_ESI;
  WPARAM wParam;
  uint uVar6;
  WINDOWPLACEMENT *pWVar7;
  DWORD DVar8;
  undefined4 local_58;
  undefined4 uStack_54;
  WPARAM WStack_50;
  WINDOWPLACEMENT local_2c;
  
  local_2c.length = 0x2c;
  GetWindowPlacement(*(HWND *)(param_1 + 4),&local_2c);
  pWVar7 = &local_2c;
  DVar8 = 0x2c;
  uVar6 = 0x3f6;
  iVar3 = FUN_00401310();
  FUN_0041f7b0(iVar3,uVar6,(BYTE *)pWVar7,DVar8);
  puVar1 = *(undefined4 **)(param_1 + 0x50);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    local_58 = 0;
    iVar3 = (**(code **)*puVar1)(puVar1,&DAT_0043c9e0,&local_58);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(*unaff_EBP + 0x10))(unaff_EBP,&DAT_0043cb30,&stack0xffffff98);
      if (-1 < iVar3) {
        (**(code **)(*unaff_ESI + 0x18))(unaff_ESI,uVar2);
      }
    }
    if (unaff_ESI != (int *)0x0) {
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
    if (unaff_EBP != (int *)0x0) {
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
    }
    *(undefined4 *)(param_1 + 0x44) = 0xfefefefe;
    (**(code **)(**(int **)(param_1 + 0x50) + 8))(*(int **)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x3e9);
  LVar4 = SendMessageA(hWnd,0x1004,0,0);
  wParam = 0;
  uStack_54 = 4;
  if (0 < LVar4) {
    do {
      WStack_50 = wParam;
      LVar5 = SendMessageA(hWnd,0x1005,0,(LPARAM)&uStack_54);
      if (LVar5 != 0) {
        SendMessageA(hWnd,0x1008,wParam,0);
      }
      wParam = wParam + 1;
    } while ((int)wParam < LVar4);
  }
  return 0;
}


