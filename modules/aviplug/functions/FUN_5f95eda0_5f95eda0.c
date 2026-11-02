/* Module: aviplug.dll
   Function: FUN_5f95eda0
   Address: 5f95eda0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f95eda0(void *this,HWND param_1)

{
  HWND hWnd;
  WPARAM wParam;
  LRESULT LVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x98) == 0) {
    return 0x8000ffff;
  }
  hWnd = GetDlgItem(param_1,1000);
  wParam = SendMessageA(hWnd,0x147,0,0);
  if (wParam != 0xffffffff) {
    LVar1 = SendMessageA(hWnd,0x150,wParam,0);
    iVar2 = ICOpen(0x63646976,LVar1,4);
    if (iVar2 != 0) {
      iVar3 = ICSendMessage(iVar2,0x500a,0xffffffff,1);
      if (iVar3 == 0) {
        iVar3 = *(int *)(*(int *)((int)this + 0x98) + 0x20);
        if (iVar3 != 0) {
          ICSendMessage(iVar2,0x5001,iVar3,*(undefined4 *)(*(int *)((int)this + 0x98) + 0x24));
        }
        ICSendMessage(iVar2,0x500a,param_1,0);
        FUN_5f95ca00(this,iVar2);
        *(undefined4 *)((int)this + 0x24) = 1;
      }
      ICClose(iVar2);
    }
  }
  return 0;
}


