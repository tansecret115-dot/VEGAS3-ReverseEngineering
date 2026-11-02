/* Module: wavplug.dll
   Function: FUN_5f382c40
   Address: 5f382c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f382c40(void *this,ushort *param_1)

{
  HWND hWnd;
  WPARAM WVar1;
  undefined4 *lParam;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uchar local_84 [132];
  
  hWnd = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d3);
  FUN_5f39af10(param_1,local_84);
  WVar1 = SendMessageA(hWnd,0x147,0,0);
  lParam = (undefined4 *)SendMessageA(hWnd,0x150,WVar1,0);
  if ((lParam != (undefined4 *)0x0) && (lParam != (undefined4 *)0xffffffff)) {
    if ((*param_1 == 3) || (*param_1 == 1)) {
      uVar2 = 0x10;
    }
    else {
      uVar2 = param_1[8] + 0x12;
    }
    puVar4 = lParam;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = *(undefined4 *)param_1;
      param_1 = param_1 + 2;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(char *)puVar4 = (char)*param_1;
      param_1 = (ushort *)((int)param_1 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  SendMessageA(hWnd,0x14b,0,0);
  WVar1 = SendMessageA(hWnd,0x143,0,(LPARAM)local_84);
  SendMessageA(hWnd,0x14e,WVar1,0);
  SendMessageA(hWnd,0x151,WVar1,(LPARAM)lParam);
  return;
}


