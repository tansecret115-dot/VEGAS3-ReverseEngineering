/* Module: sftrans1.dll
   Function: FUN_004b2510
   Address: 004b2510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004b2510(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM LVar7;
  CHAR local_12c [260];
  HWND local_28;
  HWND local_24;
  HWND local_20;
  HWND local_1c;
  HWND local_18;
  int *local_14;
  HWND local_10;
  HWND local_c;
  HWND local_8;
  
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6f0);
  local_24 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6f3);
  local_1c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6f7);
  local_18 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x701);
  local_20 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6f9);
  local_28 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x708);
  local_10 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x70b);
  local_c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6e9);
  LVar7 = 0;
  WVar6 = 6;
  UVar5 = 0xc5;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6eb);
  SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  LVar7 = 0;
  WVar6 = 6;
  UVar5 = 0xc5;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6ed);
  SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  LVar7 = 0;
  WVar6 = 6;
  UVar5 = 0xc5;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6f1);
  SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  LVar7 = 0;
  WVar6 = 6;
  UVar5 = 0xc5;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6f4);
  SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  LVar7 = 0;
  WVar6 = 6;
  UVar5 = 0xc5;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6f8);
  SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  LVar7 = 0;
  WVar6 = 6;
  UVar5 = 0xc5;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x702);
  SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  LVar7 = 0;
  WVar6 = 6;
  UVar5 = 0xc5;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6fa);
  SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  LVar7 = 0;
  WVar6 = 6;
  UVar5 = 0xc5;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x709);
  SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  LVar7 = 0;
  WVar6 = 6;
  UVar5 = 0xc5;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x70c);
  SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,0x400);
  SendMessageA(local_24,0x60e,0,0);
  SendMessageA(local_24,0x60f,0,0x400);
  SendMessageA(local_1c,0x60e,0,0);
  SendMessageA(local_1c,0x60f,0,0x400);
  SendMessageA(local_18,0x60e,0,0);
  SendMessageA(local_18,0x60f,0,0x400);
  SendMessageA(local_20,0x60e,0,0);
  SendMessageA(local_20,0x60f,0,0x400);
  SendMessageA(local_28,0x60e,0,0);
  SendMessageA(local_28,0x60f,0,0x400);
  SendMessageA(local_10,0x60e,0,0);
  SendMessageA(local_10,0x60f,0,0x400);
  SendMessageA(local_c,0x80d,1,0);
  SendMessageA(local_c,0x80e,1,0);
  local_10 = *(HWND *)(param_1 + 0x30);
  pHVar2 = GetDlgItem(local_10,0x6e8);
  SendMessageA(pHVar2,0x600,0,0);
  GetDlgItemTextA(local_10,0x6e8,local_12c,0x82);
  SendMessageA(pHVar2,0x601,0xa029,0x555a6c);
  SendMessageA(pHVar2,0x601,41000,0x555a74);
  uVar3 = lstrlenA("Sonic Foundry ");
  FUN_00551640();
  local_8 = (HWND)&stack0xfffffec8;
  FUN_00551640();
  local_c = (HWND)&stack0xfffffec8;
  lstrcpynA((LPSTR)local_8,local_12c,uVar3 + 1);
  *(CHAR *)((int)local_8 + uVar3) = '\0';
  *(CHAR *)((int)local_8 + uVar3) = '\0';
  lstrcpynA((LPSTR)local_c,"Sonic Foundry ",uVar3 + 1);
  *(CHAR *)((int)local_c + uVar3) = '\0';
  *(CHAR *)((int)local_c + uVar3) = '\0';
  iVar4 = lstrcmpiA((LPCSTR)local_8,(LPCSTR)local_c);
  FUN_004c85d0(local_10,0x6e8,local_12c + (~-(uint)(iVar4 != 0) & uVar3));
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_14 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00555130,&local_14);
  }
  (**(code **)(*local_14 + 0x14))(local_14,*(undefined4 *)(param_1 + 0x30),1000);
  FUN_004b1f00();
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
  }
  return 0;
}


