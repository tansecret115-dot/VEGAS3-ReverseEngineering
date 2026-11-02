/* Module: sfmarket2.dll
   Function: FUN_0040e1a0
   Address: 0040e1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040e1a0(int param_1)

{
  HWND pHVar1;
  uchar *puVar2;
  LRESULT LVar3;
  DWORD DVar4;
  int iVar5;
  int local_4;
  
  local_4 = param_1;
  FUN_0043d3f0(*(HWND *)(param_1 + 4),(HWND)0x0,(int *)0x0,0x8001);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x1fc);
  ShowWindow(pHVar1,0);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x1ff);
  puVar2 = (uchar *)FUN_004226d0(DAT_004a9c94,0x2c5);
  FUN_00426420(pHVar1,puVar2);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x202);
  ShowWindow(pHVar1,0);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x1fb);
  ShowWindow(pHVar1,5);
  LVar3 = SendMessageA(pHVar1,0x464,0,0x200);
  if (LVar3 != 0) {
    LVar3 = SendMessageA(pHVar1,0x465,0xffffffff,-0x10000);
    if (LVar3 != 0) {
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x1fa);
      SendMessageA(pHVar1,0x406,0,100);
      DVar4 = GetTickCount();
      *(DWORD *)(param_1 + 0x20) = DVar4;
      FUN_0042e750(*(void **)(param_1 + 0x1c),*(undefined4 *)(param_1 + 4));
      PostMessageA(*(HWND *)(param_1 + 4),0xf01,0,0);
      iVar5 = FUN_0042e860(*(void **)(param_1 + 0x1c),&local_4);
      if (-1 < iVar5) {
        PostMessageA(*(HWND *)(param_1 + 4),0xf00,0,0);
      }
      pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),2);
      SetFocus(pHVar1);
    }
  }
  return 0;
}


