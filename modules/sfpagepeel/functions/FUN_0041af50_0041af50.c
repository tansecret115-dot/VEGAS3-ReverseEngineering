/* Module: sfpagepeel.dll
   Function: FUN_0041af50
   Address: 0041af50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041af50(int param_1)

{
  int iVar1;
  int iVar2;
  HINSTANCE pHVar3;
  HWND pHVar4;
  HANDLE pvVar5;
  HFONT pHVar6;
  LPVOID pvVar7;
  LPARAM LVar8;
  
  pvVar7 = (LPVOID)0x0;
  iVar1 = *(int *)(param_1 + 0x260);
  iVar2 = *(int *)(param_1 + 0x25c);
  pHVar3 = (HINSTANCE)GetWindowLongA(*(HWND *)(param_1 + 8),-6);
  pHVar4 = CreateWindowExA(0x200,"EDIT",(LPCSTR)0x0,0x50802002,iVar2,iVar1,
                           *(int *)(param_1 + 0x264) - iVar2,*(int *)(param_1 + 0x268) - iVar1,
                           *(HWND *)(param_1 + 8),(HMENU)0x3e8,pHVar3,pvVar7);
  *(HWND *)(param_1 + 0x2dc) = pHVar4;
  if (pHVar4 == (HWND)0x0) {
    return 0;
  }
  pvVar5 = (HANDLE)SetWindowLongA(pHVar4,-4,0x41ac70);
  SetPropA(*(HWND *)(param_1 + 0x2dc),"OrigWndProc",pvVar5);
  SendMessageA(*(HWND *)(param_1 + 0x2dc),0xc5,3,0);
  LVar8 = 1;
  pHVar6 = FUN_0042f0f0(*(int *)(param_1 + 0x2f8));
  SendMessageA(*(HWND *)(param_1 + 0x2dc),0x30,(WPARAM)pHVar6,LVar8);
  iVar1 = *(int *)(param_1 + 0x270);
  iVar2 = *(int *)(param_1 + 0x26c);
  pvVar7 = (LPVOID)0x0;
  pHVar3 = (HINSTANCE)GetWindowLongA(*(HWND *)(param_1 + 8),-6);
  pHVar4 = CreateWindowExA(0x200,"EDIT",(LPCSTR)0x0,0x50802002,iVar2,iVar1,
                           *(int *)(param_1 + 0x274) - iVar2,*(int *)(param_1 + 0x278) - iVar1,
                           *(HWND *)(param_1 + 8),(HMENU)0x3e9,pHVar3,pvVar7);
  *(HWND *)(param_1 + 0x2e0) = pHVar4;
  if (pHVar4 == (HWND)0x0) {
    return 0;
  }
  pvVar5 = (HANDLE)SetWindowLongA(pHVar4,-4,0x41ac70);
  SetPropA(*(HWND *)(param_1 + 0x2e0),"OrigWndProc",pvVar5);
  SendMessageA(*(HWND *)(param_1 + 0x2e0),0xc5,3,0);
  LVar8 = 1;
  pHVar6 = FUN_0042f0f0(*(int *)(param_1 + 0x2f8));
  SendMessageA(*(HWND *)(param_1 + 0x2e0),0x30,(WPARAM)pHVar6,LVar8);
  iVar1 = *(int *)(param_1 + 0x280);
  iVar2 = *(int *)(param_1 + 0x27c);
  pvVar7 = (LPVOID)0x0;
  pHVar3 = (HINSTANCE)GetWindowLongA(*(HWND *)(param_1 + 8),-6);
  pHVar4 = CreateWindowExA(0x200,"EDIT",(LPCSTR)0x0,0x50802002,iVar2,iVar1,
                           *(int *)(param_1 + 0x284) - iVar2,*(int *)(param_1 + 0x288) - iVar1,
                           *(HWND *)(param_1 + 8),(HMENU)0x3ea,pHVar3,pvVar7);
  *(HWND *)(param_1 + 0x2e4) = pHVar4;
  if (pHVar4 == (HWND)0x0) {
    return 0;
  }
  pvVar5 = (HANDLE)SetWindowLongA(pHVar4,-4,0x41ac70);
  SetPropA(*(HWND *)(param_1 + 0x2e4),"OrigWndProc",pvVar5);
  SendMessageA(*(HWND *)(param_1 + 0x2e4),0xc5,3,0);
  LVar8 = 1;
  pHVar6 = FUN_0042f0f0(*(int *)(param_1 + 0x2f8));
  SendMessageA(*(HWND *)(param_1 + 0x2e4),0x30,(WPARAM)pHVar6,LVar8);
  if ((*(byte *)(param_1 + 4) & 2) != 0) {
    iVar1 = *(int *)(param_1 + 0x290);
    iVar2 = *(int *)(param_1 + 0x28c);
    pvVar7 = (LPVOID)0x0;
    pHVar3 = (HINSTANCE)GetWindowLongA(*(HWND *)(param_1 + 8),-6);
    pHVar4 = CreateWindowExA(0x200,"EDIT",(LPCSTR)0x0,0x50802002,iVar2,iVar1,
                             *(int *)(param_1 + 0x294) - iVar2,*(int *)(param_1 + 0x298) - iVar1,
                             *(HWND *)(param_1 + 8),(HMENU)0x3eb,pHVar3,pvVar7);
    *(HWND *)(param_1 + 0x2e8) = pHVar4;
    if (pHVar4 == (HWND)0x0) {
      return 0;
    }
    pvVar5 = (HANDLE)SetWindowLongA(pHVar4,-4,0x41ac70);
    SetPropA(*(HWND *)(param_1 + 0x2e8),"OrigWndProc",pvVar5);
    SendMessageA(*(HWND *)(param_1 + 0x2e8),0xc5,3,0);
    LVar8 = 1;
    pHVar6 = FUN_0042f0f0(*(int *)(param_1 + 0x2f8));
    SendMessageA(*(HWND *)(param_1 + 0x2e8),0x30,(WPARAM)pHVar6,LVar8);
  }
  return 1;
}


