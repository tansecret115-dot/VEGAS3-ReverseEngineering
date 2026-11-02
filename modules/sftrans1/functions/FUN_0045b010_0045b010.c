/* Module: sftrans1.dll
   Function: FUN_0045b010
   Address: 0045b010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0045b010(int param_1)

{
  undefined4 *puVar1;
  HWND hWnd;
  uint uVar2;
  int iVar3;
  CHAR local_118 [260];
  LPSTR local_14;
  LPSTR local_10;
  int *local_c;
  HWND local_8;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_c = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00554c40,&local_c);
  }
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x4ed);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,0xffff);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x4ef);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,0xffff);
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x473);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,360000);
  local_8 = *(HWND *)(param_1 + 0x30);
  hWnd = GetDlgItem(local_8,0x5b3);
  SendMessageA(hWnd,0x600,0,0);
  GetDlgItemTextA(local_8,0x5b3,local_118,0x82);
  SendMessageA(hWnd,0x601,0xa029,0x555a6c);
  SendMessageA(hWnd,0x601,41000,0x555a74);
  uVar2 = lstrlenA("Sonic Foundry ");
  FUN_00551640();
  local_10 = &stack0xfffffedc;
  FUN_00551640();
  local_14 = &stack0xfffffedc;
  lstrcpynA(local_10,local_118,uVar2 + 1);
  local_10[uVar2] = '\0';
  local_10[uVar2] = '\0';
  lstrcpynA(local_14,"Sonic Foundry ",uVar2 + 1);
  local_14[uVar2] = '\0';
  local_14[uVar2] = '\0';
  iVar3 = lstrcmpiA(local_10,local_14);
  FUN_004c85d0(local_8,0x5b3,local_118 + (~-(uint)(iVar3 != 0) & uVar2));
  FUN_0045ae40();
  (**(code **)(*local_c + 0x3c))(local_c,*(undefined4 *)(param_1 + 0x30),1000);
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return 1;
}


