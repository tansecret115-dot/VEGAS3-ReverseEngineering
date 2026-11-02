/* Module: sftrans1.dll
   Function: FUN_004ae940
   Address: 004ae940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004ae940(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  CHAR local_118 [260];
  int *local_14;
  HWND local_10;
  HWND local_c;
  HWND local_8;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_14 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00554d80,&local_14);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6df);
  local_10 = pHVar2;
  local_c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6e2);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6e5);
  GetDlgItem(*(HWND *)(param_1 + 0x30),0x6e7);
  SendMessageA(pHVar2,0x60e,0,0);
  SendMessageA(local_10,0x60f,0,0xffff);
  SendMessageA(local_c,0x60e,0,0);
  SendMessageA(local_c,0x60f,0,0xffff);
  SendMessageA(local_8,0x143,0,0x565bd8);
  SendMessageA(local_8,0x143,0,0x565bd0);
  SendMessageA(local_8,0x143,0,0x565bc8);
  local_10 = *(HWND *)(param_1 + 0x30);
  pHVar2 = GetDlgItem(local_10,0x5b3);
  SendMessageA(pHVar2,0x600,0,0);
  GetDlgItemTextA(local_10,0x5b3,local_118,0x82);
  SendMessageA(pHVar2,0x601,0xa029,0x555a6c);
  SendMessageA(pHVar2,0x601,41000,0x555a74);
  uVar3 = lstrlenA("Sonic Foundry ");
  FUN_00551640();
  local_8 = (HWND)&stack0xfffffedc;
  FUN_00551640();
  local_c = (HWND)&stack0xfffffedc;
  lstrcpynA((LPSTR)local_8,local_118,uVar3 + 1);
  *(CHAR *)((int)local_8 + uVar3) = '\0';
  *(CHAR *)((int)local_8 + uVar3) = '\0';
  lstrcpynA((LPSTR)local_c,"Sonic Foundry ",uVar3 + 1);
  *(CHAR *)((int)local_c + uVar3) = '\0';
  *(CHAR *)((int)local_c + uVar3) = '\0';
  iVar4 = lstrcmpiA((LPCSTR)local_8,(LPCSTR)local_c);
  FUN_004c85d0(local_10,0x5b3,local_118 + (~-(uint)(iVar4 != 0) & uVar3));
  FUN_004ae730();
  (**(code **)(*local_14 + 0x3c))(local_14,*(undefined4 *)(param_1 + 0x30),1000);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
  }
  return 1;
}


