/* Module: vegas30.exe
   Function: FUN_005881a0
   Address: 005881a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_005881a0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 *param_6,WPARAM param_7,LPARAM param_8,LPARAM param_9,LPARAM param_10)

{
  int *piVar1;
  WPARAM WVar2;
  int iVar3;
  LPARAM lParam;
  LRESULT LVar4;
  HWND hWnd;
  uint uVar5;
  undefined4 *puVar6;
  
  iVar3 = FUN_00588670(param_2,param_3,param_5);
  if (-1 < iVar3) {
    if (param_4 != 0) {
      SendMessageA(*(HWND *)(param_1 + 8),0x454,0,param_4);
    }
    SendMessageA(*(HWND *)(param_1 + 8),0x436,0,param_10);
    SendMessageA(*(HWND *)(param_1 + 8),0x434,0,param_9);
    SendMessageA(*(HWND *)(param_1 + 8),0x430,0,param_8);
    FUN_0060ac30();
    puVar6 = (undefined4 *)&stack0xfffffff0;
    for (uVar5 = param_7 * 5 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = *param_6;
      param_6 = param_6 + 1;
      puVar6 = puVar6 + 1;
    }
    for (iVar3 = 0; piVar1 = (int *)register0x00000010, WVar2 = param_7, iVar3 != 0;
        iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar6 = *(undefined1 *)param_6;
      param_6 = (undefined4 *)((int)param_6 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    for (; WVar2 != 0; WVar2 = WVar2 - 1) {
      if (*piVar1 != 0) {
        lParam = _SfGetString_8(*(undefined4 *)(DAT_0065a054 + 0x10),*piVar1);
        LVar4 = SendMessageA(*(HWND *)(param_1 + 8),0x41c,0,lParam);
        *piVar1 = LVar4;
      }
      piVar1 = piVar1 + 5;
    }
    SendMessageA(*(HWND *)(param_1 + 8),0x414,param_7,(LPARAM)&stack0xfffffff0);
    hWnd = (HWND)SendMessageA(*(HWND *)(param_1 + 8),0x423,0,0);
    uVar5 = GetWindowLongA(hWnd,-0x10);
    SetWindowLongA(hWnd,-0x10,uVar5 | 1);
  }
  return 0;
}


