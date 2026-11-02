/* Module: vegas30.exe
   Function: FUN_00491740
   Address: 00491740
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00491740(int param_1,HWND param_2)

{
  int *piVar1;
  HWND pHVar2;
  WPARAM WVar3;
  undefined4 *puVar4;
  LPARAM LVar5;
  int local_8;
  
  piVar1 = (int *)_SfGetUIFontSize_4(100);
  if (*(HWND *)(param_1 + 0x84) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0x84));
  }
  if (*(HWND *)(param_1 + 0x88) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0x88));
  }
  pHVar2 = CreateWindowExA(4,"COMBOBOX","",0x50210103,0,0,*piVar1 * 0x14,piVar1[1] * 0xc,param_2,
                           (HMENU)&DAT_00000434,DAT_006471fc,(LPVOID)0x0);
  if (pHVar2 != (HWND)0x0) {
    LVar5 = 0;
    WVar3 = _SfGetUIFont_4(100);
    SendMessageA(pHVar2,0x30,WVar3,LVar5);
    puVar4 = &DAT_00612d90;
    local_8 = 0;
    do {
      if ((0x612d90 < (int)puVar4) && (puVar4 != (undefined4 *)&DAT_00612da8)) {
        LVar5 = _SfGetString_8(DAT_00647204,*puVar4);
        WVar3 = SendMessageA(pHVar2,0x143,0,LVar5);
        SendMessageA(pHVar2,0x151,WVar3,local_8);
        if (local_8 == *(int *)(param_1 + 0x94)) {
          SendMessageA(pHVar2,0x14e,WVar3,0);
        }
      }
      puVar4 = puVar4 + 1;
      local_8 = local_8 + 1;
    } while (puVar4 < &DAT_00612db0);
  }
  *(HWND *)(param_1 + 0x84) = pHVar2;
  pHVar2 = CreateWindowExA(4,"COMBOBOX","",0x50210142,0,0,*piVar1 * 0x14,piVar1[1] * 0xc,param_2,
                           (HMENU)&DAT_00000436,DAT_006471fc,(LPVOID)0x0);
  if (pHVar2 != (HWND)0x0) {
    LVar5 = 0;
    WVar3 = _SfGetUIFont_4(100);
    SendMessageA(pHVar2,0x30,WVar3,LVar5);
  }
  *(HWND *)(param_1 + 0x88) = pHVar2;
  return;
}


