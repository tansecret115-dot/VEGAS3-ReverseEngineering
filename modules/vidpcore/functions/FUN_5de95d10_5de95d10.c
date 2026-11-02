/* Module: vidpcore.dll
   Function: FUN_5de95d10
   Address: 5de95d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de95d10(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM LVar7;
  CHAR local_118 [260];
  HWND local_14;
  LPSTR local_10;
  int *local_c;
  LPSTR local_8;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_c = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17c50,&local_c);
  }
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0x60e;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x56f);
  SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  LVar7 = 1000;
  WVar6 = 0;
  UVar5 = 0x60f;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x56f);
  SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0x60e;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x572);
  SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  LVar7 = 1000;
  WVar6 = 0;
  UVar5 = 0x60f;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x572);
  SendMessageA(pHVar2,UVar5,WVar6,LVar7);
  local_14 = *(HWND *)(param_1 + 0x30);
  pHVar2 = GetDlgItem(local_14,0x5b1);
  SendMessageA(pHVar2,0x600,0,0);
  GetDlgItemTextA(local_14,0x5b1,local_118,0x82);
  SendMessageA(pHVar2,0x601,0xa029,0x5df18d88);
  SendMessageA(pHVar2,0x601,41000,0x5df18d90);
  uVar3 = lstrlenA("Sonic Foundry ");
  FUN_5df157d0();
  local_8 = &stack0xfffffedc;
  FUN_5df157d0();
  local_10 = &stack0xfffffedc;
  lstrcpynA(local_8,local_118,uVar3 + 1);
  local_8[uVar3] = '\0';
  local_8[uVar3] = '\0';
  lstrcpynA(local_10,"Sonic Foundry ",uVar3 + 1);
  local_10[uVar3] = '\0';
  local_10[uVar3] = '\0';
  iVar4 = lstrcmpiA(local_8,local_10);
  FUN_5deb6b40(local_14,0x5b1,local_118 + (~-(uint)(iVar4 != 0) & uVar3));
  FUN_5de95b40();
  (**(code **)(*local_c + 0x3c))(local_c,*(undefined4 *)(param_1 + 0x30),0x7f00);
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return 1;
}


