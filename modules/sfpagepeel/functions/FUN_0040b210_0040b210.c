/* Module: sfpagepeel.dll
   Function: FUN_0040b210
   Address: 0040b210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040b210(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  uchar local_120 [260];
  HWND local_1c;
  HWND local_18;
  int *local_14;
  HWND local_10;
  HWND local_c;
  HWND local_8;
  
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5d3);
  local_1c = pHVar2;
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b7);
  local_18 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5d4);
  local_c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5d5);
  local_10 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x5b9);
  SendMessageA(pHVar2,0x60e,0,0);
  SendMessageA(local_1c,0x60f,0,0xffff);
  SendMessageA(local_8,0x60e,0,0);
  SendMessageA(local_8,0x60f,0,0xffff);
  SendMessageA(local_18,0x60e,0,0);
  SendMessageA(local_18,0x60f,0,0xffff);
  SendMessageA(local_c,0x60e,0,0);
  SendMessageA(local_c,0x60f,0,0xffff);
  SendMessageA(local_10,0x60e,0,0);
  SendMessageA(local_10,0x60f,0,0xffff);
  local_c = *(HWND *)(param_1 + 0x30);
  pHVar2 = GetDlgItem(local_c,0x5b1);
  SendMessageA(pHVar2,0x600,0,0);
  GetDlgItemTextA(local_c,0x5b1,(LPSTR)local_120,0x82);
  SendMessageA(pHVar2,0x601,0xa029,0x46fe4c);
  SendMessageA(pHVar2,0x601,41000,0x46fe54);
  uVar3 = lstrlenA("Sonic Foundry ");
  FUN_0046d450();
  local_8 = (HWND)&stack0xfffffed4;
  FUN_0046d450();
  local_10 = (HWND)&stack0xfffffed4;
  lstrcpynA((LPSTR)local_8,(LPCSTR)local_120,uVar3 + 1);
  *(CHAR *)((int)local_8 + uVar3) = '\0';
  *(CHAR *)((int)local_8 + uVar3) = '\0';
  lstrcpynA((LPSTR)local_10,"Sonic Foundry ",uVar3 + 1);
  *(CHAR *)((int)local_10 + uVar3) = '\0';
  *(CHAR *)((int)local_10 + uVar3) = '\0';
  iVar4 = lstrcmpiA((LPCSTR)local_8,(LPCSTR)local_10);
  FUN_00426b10(local_c,0x5b1,local_120 + (~-(uint)(iVar4 != 0) & uVar3));
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_14 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_0046faf0,&local_14);
  }
  (**(code **)(*local_14 + 0x14))(local_14,*(undefined4 *)(param_1 + 0x30),0x7f00);
  FUN_0040af70(param_1);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
  }
  return 0;
}


