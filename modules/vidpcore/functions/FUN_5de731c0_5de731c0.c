/* Module: vidpcore.dll
   Function: FUN_5de731c0
   Address: 5de731c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de731c0(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND hWnd;
  HWND hWnd_00;
  LPARAM LVar3;
  LRESULT LVar4;
  int *unaff_ESI;
  WPARAM wParam;
  undefined1 *puVar5;
  HWND local_120;
  HWND pHStack_11c;
  undefined1 auStack_118 [276];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_120 = (HWND)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17b30,&local_120);
  }
  (**(code **)(local_120->unused + 0x34))(local_120,(undefined4 *)(param_1 + 0x50),0x30);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x41d);
  pHStack_11c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x41f);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x421);
  hWnd_00 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x423);
  local_120 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x425);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(pHStack_11c,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(hWnd,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(hWnd_00,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(local_120,0x610,1,LVar3);
  FUN_5deb5050(auStack_118,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x50),
               *(undefined4 *)(param_1 + 0x54));
  puVar5 = auStack_118;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x428);
  FUN_5deb6a10(pHVar2,puVar5);
  FUN_5deb5050(auStack_118,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x58),
               *(undefined4 *)(param_1 + 0x5c));
  puVar5 = auStack_118;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x429);
  FUN_5deb6a10(pHVar2,puVar5);
  FUN_5deb5050(auStack_118,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x60),
               *(undefined4 *)(param_1 + 100));
  puVar5 = auStack_118;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x42a);
  FUN_5deb6a10(pHVar2,puVar5);
  FUN_5deb5050(auStack_118,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x68),
               *(undefined4 *)(param_1 + 0x6c));
  puVar5 = auStack_118;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x42b);
  FUN_5deb6a10(pHVar2,puVar5);
  FUN_5deb5050(auStack_118,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x70),
               *(undefined4 *)(param_1 + 0x74));
  puVar5 = auStack_118;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x42c);
  FUN_5deb6a10(pHVar2,puVar5);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x427);
  wParam = 0;
  do {
    LVar4 = SendMessageA(pHVar2,0x150,wParam,0);
    if (LVar4 == *(int *)(param_1 + 0x78)) {
      SendMessageA(pHVar2,0x14e,wParam,0);
    }
    wParam = wParam + 1;
  } while ((int)wParam < 5);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


