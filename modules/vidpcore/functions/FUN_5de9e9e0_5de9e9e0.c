/* Module: vidpcore.dll
   Function: FUN_5de9e9e0
   Address: 5de9e9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de9e9e0(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  WPARAM WVar3;
  uint uVar4;
  int iVar5;
  UINT UVar6;
  LPARAM LVar7;
  CHAR local_118 [260];
  HWND local_14;
  LPSTR local_10;
  int *local_c;
  HWND local_8;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_c = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17c70,&local_c);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5c5);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df2fe90);
  SendMessageA(pHVar2,0x151,WVar3,1);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df2fe88);
  SendMessageA(pHVar2,0x151,WVar3,2);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df2fe78);
  SendMessageA(pHVar2,0x151,WVar3,3);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df2fe68);
  SendMessageA(pHVar2,0x151,WVar3,4);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df2fe44);
  SendMessageA(pHVar2,0x151,WVar3,6);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df2fe28);
  SendMessageA(pHVar2,0x151,WVar3,7);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df2fe08);
  SendMessageA(pHVar2,0x151,WVar3,8);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df2fdec);
  SendMessageA(pHVar2,0x151,WVar3,9);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df2fdd0);
  SendMessageA(pHVar2,0x151,WVar3,10);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df2fdb0);
  SendMessageA(pHVar2,0x151,WVar3,0xf);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df2fd90);
  SendMessageA(pHVar2,0x151,WVar3,0x10);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5c2);
  WVar3 = SendMessageA(local_8,0x143,0,0x5df2bd04);
  SendMessageA(local_8,0x151,WVar3,0);
  WVar3 = SendMessageA(local_8,0x143,0,0x5df2fd88);
  SendMessageA(local_8,0x151,WVar3,1);
  WVar3 = SendMessageA(local_8,0x143,0,0x5df2bcfc);
  SendMessageA(local_8,0x151,WVar3,2);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5c3);
  WVar3 = SendMessageA(local_8,0x143,0,0x5df2bd1c);
  SendMessageA(local_8,0x151,WVar3,0);
  WVar3 = SendMessageA(local_8,0x143,0,0x5df2fd88);
  SendMessageA(local_8,0x151,WVar3,1);
  WVar3 = SendMessageA(local_8,0x143,0,0x5df2bd0c);
  SendMessageA(local_8,0x151,WVar3,2);
  LVar7 = 0;
  WVar3 = 0;
  UVar6 = 0x60e;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5c6);
  SendMessageA(pHVar2,UVar6,WVar3,LVar7);
  LVar7 = 0x5dc;
  WVar3 = 0;
  UVar6 = 0x60f;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5c6);
  SendMessageA(pHVar2,UVar6,WVar3,LVar7);
  LVar7 = 0;
  WVar3 = 0;
  UVar6 = 0x60e;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x449);
  SendMessageA(pHVar2,UVar6,WVar3,LVar7);
  LVar7 = 0x5dc;
  WVar3 = 0;
  UVar6 = 0x60f;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x449);
  SendMessageA(pHVar2,UVar6,WVar3,LVar7);
  local_14 = *(HWND *)(param_1 + 0x30);
  pHVar2 = GetDlgItem(local_14,0x5b1);
  SendMessageA(pHVar2,0x600,0,0);
  GetDlgItemTextA(local_14,0x5b1,local_118,0x82);
  SendMessageA(pHVar2,0x601,0xa029,0x5df18d88);
  SendMessageA(pHVar2,0x601,41000,0x5df18d90);
  uVar4 = lstrlenA("Sonic Foundry ");
  FUN_5df157d0();
  local_8 = (HWND)&stack0xfffffedc;
  FUN_5df157d0();
  local_10 = &stack0xfffffedc;
  lstrcpynA((LPSTR)local_8,local_118,uVar4 + 1);
  *(CHAR *)((int)local_8 + uVar4) = '\0';
  *(CHAR *)((int)local_8 + uVar4) = '\0';
  lstrcpynA(local_10,"Sonic Foundry ",uVar4 + 1);
  local_10[uVar4] = '\0';
  local_10[uVar4] = '\0';
  iVar5 = lstrcmpiA((LPCSTR)local_8,local_10);
  FUN_5deb6b40(local_14,0x5b1,local_118 + (~-(uint)(iVar5 != 0) & uVar4));
  FUN_5de9e750();
  (**(code **)(*local_c + 0x3c))(local_c,*(undefined4 *)(param_1 + 0x30),0x7f00);
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return 1;
}


