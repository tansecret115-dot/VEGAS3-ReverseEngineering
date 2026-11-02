/* Module: vidcap30.exe
   Function: FUN_004156c0
   Address: 004156c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004156c0(HWND param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  HWND hWnd;
  undefined4 *puVar3;
  
  FUN_0041f710(param_2 + 8,0x474);
  puVar2 = &DAT_005b286c;
  puVar3 = (undefined4 *)(param_2 + 0x14);
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 4;
  } while (puVar2 < &DAT_005b28ac);
  hWnd = GetDlgItem(param_1,0x9c4b);
  FUN_0041f790(hWnd,&DAT_005b2860,4);
  SendMessageA(hWnd,0x1036,0x24,0x24);
  SendMessageA(hWnd,0x1003,1,DAT_005bb9d0);
  SendMessageA(hWnd,0x103a,0x1e,param_2 + 0x8c);
  FUN_00415b60(hWnd,*(undefined4 *)(param_2 + 4));
  _SfWndCenter_16(param_1,0,0,0x8001);
  SetWindowLongA(param_1,8,param_2);
  return;
}


