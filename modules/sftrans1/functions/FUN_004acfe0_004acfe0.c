/* Module: sftrans1.dll
   Function: FUN_004acfe0
   Address: 004acfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004acfe0(int param_1)

{
  HWND pHVar1;
  HWND hWnd;
  uint uVar2;
  int iVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  CHAR local_124 [260];
  HWND local_20;
  HWND local_1c;
  HWND local_18;
  int *local_14;
  HWND local_10;
  HWND local_c;
  HWND local_8;
  
  local_14 = (int *)0x0;
  if ((undefined4 *)**(int **)(param_1 + 8) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)**(int **)(param_1 + 8))();
  }
  GetDlgItem(*(HWND *)(param_1 + 0x30),0x41e);
  local_20 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x420);
  local_18 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x434);
  local_10 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x422);
  local_1c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x42d);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x432);
  local_c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x42a);
  LVar6 = 0;
  WVar5 = 6;
  UVar4 = 0xc5;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x451);
  SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  LVar6 = 0;
  WVar5 = 6;
  UVar4 = 0xc5;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x452);
  SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  LVar6 = 0;
  WVar5 = 6;
  UVar4 = 0xc5;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x44f);
  SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  LVar6 = 0;
  WVar5 = 6;
  UVar4 = 0xc5;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x454);
  SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  LVar6 = 0;
  WVar5 = 6;
  UVar4 = 0xc5;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x44e);
  SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  LVar6 = 0;
  WVar5 = 6;
  UVar4 = 0xc5;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x450);
  SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  LVar6 = 0;
  WVar5 = 6;
  UVar4 = 0xc5;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x453);
  SendMessageA(pHVar1,UVar4,WVar5,LVar6);
  SendMessageA(local_20,0x60e,0,0);
  SendMessageA(local_20,0x60f,0,0xffff);
  SendMessageA(local_18,0x60e,0,0);
  SendMessageA(local_18,0x60f,0,0xffff);
  SendMessageA(local_1c,0x60e,0,0);
  SendMessageA(local_1c,0x60f,0,0xffff);
  SendMessageA(local_10,0x60e,0,0);
  SendMessageA(local_10,0x60f,0,0xffff);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,0xffff);
  *(undefined4 *)(param_1 + 0x400) = 0;
  SendMessageA(local_c,0x143,0,0x56547c);
  SendMessageA(local_c,0x143,0,0x565468);
  SendMessageA(local_c,0x143,0,0x565450);
  SendMessageA(local_c,0x143,0,0x565438);
  SendMessageA(local_c,0x143,0,0x565420);
  FUN_004aca30();
  (**(code **)(*local_14 + 0x3c))();
  pHVar1 = *(HWND *)(param_1 + 0x30);
  local_10 = pHVar1;
  hWnd = GetDlgItem(pHVar1,0x5b3);
  SendMessageA(hWnd,0x600,0,0);
  GetDlgItemTextA(pHVar1,0x5b3,local_124,0x82);
  SendMessageA(hWnd,0x601,0xa029,0x555a6c);
  SendMessageA(hWnd,0x601,41000,0x555a74);
  uVar2 = lstrlenA("Sonic Foundry ");
  FUN_00551640();
  FUN_00551640();
  local_8 = (HWND)&stack0xfffffec4;
  lstrcpynA(&stack0xfffffec4,local_124,uVar2 + 1);
  pHVar1 = local_8;
  local_124[uVar2 - 0x18] = '\0';
  local_124[uVar2 - 0x18] = '\0';
  lstrcpynA((LPSTR)pHVar1,"Sonic Foundry ",uVar2 + 1);
  *(CHAR *)((int)local_8 + uVar2) = '\0';
  *(CHAR *)((int)local_8 + uVar2) = '\0';
  iVar3 = lstrcmpiA(&stack0xfffffec4,(LPCSTR)local_8);
  FUN_004c85d0(local_10,0x5b3,local_124 + (~-(uint)(iVar3 != 0) & uVar2));
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
  }
  return 1;
}


