/* Module: vidpcore.dll
   Function: FUN_5df06030
   Address: 5df06030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df06030(HWND param_1)

{
  WPARAM wParam;
  HWND hWnd;
  LONG lParam;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  lParam = GetWindowLongA(param_1,0);
  if (*(int *)(lParam + 0x2f8) != 0) {
    puVar2 = (undefined4 *)
             (*(int *)(*(int *)(lParam + 0x308) + 4) * *(int *)(lParam + 0x2fc) +
             *(int *)(*(int *)(lParam + 0x308) + 8));
    puVar3 = puVar2;
    puVar4 = (undefined4 *)(lParam + 0x310);
    for (iVar1 = 0x56; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_5df056f0(param_1);
    wParam = *(WPARAM *)(lParam + 4);
    hWnd = *(HWND *)(lParam + 0x2c8);
    *(undefined4 *)(lParam + 0xc) = *(undefined4 *)(lParam + 0x2fc);
    *(undefined4 *)(lParam + 8) = 0x836;
    puVar3 = puVar2;
    puVar4 = (undefined4 *)(lParam + 0x10);
    for (iVar1 = 0x56; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = (undefined4 *)(lParam + 0x168);
    for (iVar1 = 0x56; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    SendMessageA(hWnd,0x4e,wParam,lParam);
  }
  *(undefined4 *)(lParam + 0x2f8) = 0;
  ReleaseCapture();
  InvalidateRect(param_1,(RECT *)0x0,0);
  SetFocus(param_1);
  return 1;
}


