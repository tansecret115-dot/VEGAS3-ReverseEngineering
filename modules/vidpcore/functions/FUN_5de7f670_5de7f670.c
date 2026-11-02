/* Module: vidpcore.dll
   Function: FUN_5de7f670
   Address: 5de7f670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de7f670(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  CHAR local_118 [260];
  LPSTR local_14;
  int *local_10;
  HWND local_c;
  HWND local_8;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_10 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17ba0,&local_10);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x455);
  local_c = pHVar2;
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x454);
  SendMessageA(pHVar2,0x60e,0,0);
  SendMessageA(local_c,0x60f,0,1000);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,1000);
  local_c = *(HWND *)(param_1 + 0x30);
  pHVar2 = GetDlgItem(local_c,0x5b1);
  SendMessageA(pHVar2,0x600,0,0);
  GetDlgItemTextA(local_c,0x5b1,local_118,0x82);
  SendMessageA(pHVar2,0x601,0xa029,0x5df18d88);
  SendMessageA(pHVar2,0x601,41000,0x5df18d90);
  uVar3 = lstrlenA("Sonic Foundry ");
  FUN_5df157d0();
  local_8 = (HWND)&stack0xfffffedc;
  FUN_5df157d0();
  local_14 = &stack0xfffffedc;
  lstrcpynA((LPSTR)local_8,local_118,uVar3 + 1);
  *(CHAR *)((int)local_8 + uVar3) = '\0';
  *(CHAR *)((int)local_8 + uVar3) = '\0';
  lstrcpynA(local_14,"Sonic Foundry ",uVar3 + 1);
  local_14[uVar3] = '\0';
  local_14[uVar3] = '\0';
  iVar4 = lstrcmpiA((LPCSTR)local_8,local_14);
  FUN_5deb6b40(local_c,0x5b1,local_118 + (~-(uint)(iVar4 != 0) & uVar3));
  FUN_5de7f4e0();
  (**(code **)(*local_10 + 0x3c))(local_10,*(undefined4 *)(param_1 + 0x30),0x7f00);
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
  }
  return 1;
}


