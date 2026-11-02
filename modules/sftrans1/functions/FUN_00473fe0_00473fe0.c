/* Module: sftrans1.dll
   Function: FUN_00473fe0
   Address: 00473fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00473fe0(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  WPARAM WVar3;
  uint uVar4;
  int iVar5;
  CHAR local_118 [260];
  HWND local_14;
  LPSTR local_10;
  int *local_c;
  HWND local_8;
  
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x3f7);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5619a4);
  SendMessageA(pHVar2,0x151,WVar3,0);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x561998);
  SendMessageA(pHVar2,0x151,WVar3,1);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x561990);
  SendMessageA(pHVar2,0x151,WVar3,2);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x561988);
  SendMessageA(pHVar2,0x151,WVar3,3);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x561980);
  SendMessageA(pHVar2,0x151,WVar3,4);
  SendMessageA(pHVar2,0x14e,0,0);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x3f3);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,0xffff);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x44e);
  SendMessageA(pHVar2,0xc5,3,0);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x3f5);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,0xffff);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x44f);
  SendMessageA(pHVar2,0xc5,3,0);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x3f9);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,0xffff);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x453);
  SendMessageA(pHVar2,0xc5,5,0);
  local_14 = *(HWND *)(param_1 + 0x30);
  pHVar2 = GetDlgItem(local_14,0x5b3);
  SendMessageA(pHVar2,0x600,0,0);
  GetDlgItemTextA(local_14,0x5b3,local_118,0x82);
  SendMessageA(pHVar2,0x601,0xa029,0x555a6c);
  SendMessageA(pHVar2,0x601,41000,0x555a74);
  uVar4 = lstrlenA("Sonic Foundry ");
  FUN_00551640();
  local_8 = (HWND)&stack0xfffffedc;
  FUN_00551640();
  local_10 = &stack0xfffffedc;
  lstrcpynA((LPSTR)local_8,local_118,uVar4 + 1);
  *(CHAR *)((int)local_8 + uVar4) = '\0';
  *(CHAR *)((int)local_8 + uVar4) = '\0';
  lstrcpynA(local_10,"Sonic Foundry ",uVar4 + 1);
  local_10[uVar4] = '\0';
  local_10[uVar4] = '\0';
  iVar5 = lstrcmpiA((LPCSTR)local_8,local_10);
  FUN_004c85d0(local_14,0x5b3,local_118 + (~-(uint)(iVar5 != 0) & uVar4));
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_c = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00554cf0,&local_c);
  }
  (**(code **)(*local_c + 0x3c))(local_c,*(undefined4 *)(param_1 + 0x30),1000);
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return 1;
}


