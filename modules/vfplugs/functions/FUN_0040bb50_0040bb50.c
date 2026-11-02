/* Module: vfplugs.dll
   Function: FUN_0040bb50
   Address: 0040bb50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040bb50(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  uchar local_118 [260];
  int *local_14;
  HWND local_10;
  HWND local_c;
  HWND local_8;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_14 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00486ab0,&local_14);
  }
  FUN_00428f80(*(HWND *)(param_1 + 0x30),(HFONT)0x0);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6a5);
  local_10 = pHVar2;
  local_8 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6a6);
  local_c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x6a7);
  SendMessageA(pHVar2,0x60e,0,-1000);
  SendMessageA(local_10,0x60f,0,1000);
  SendMessageA(local_8,0x60e,0,-1000);
  SendMessageA(local_8,0x60f,0,1000);
  SendMessageA(local_c,0x60e,0,-1000);
  SendMessageA(local_c,0x60f,0,1000);
  local_10 = *(HWND *)(param_1 + 0x30);
  pHVar2 = GetDlgItem(local_10,0x5b1);
  SendMessageA(pHVar2,0x600,0,0);
  GetDlgItemTextA(local_10,0x5b1,(LPSTR)local_118,0x82);
  SendMessageA(pHVar2,0x601,0xa029,0x4870c8);
  SendMessageA(pHVar2,0x601,41000,0x4870d0);
  uVar3 = lstrlenA("Sonic Foundry ");
  FUN_00481790();
  local_8 = (HWND)&stack0xfffffedc;
  FUN_00481790();
  local_c = (HWND)&stack0xfffffedc;
  lstrcpynA((LPSTR)local_8,(LPCSTR)local_118,uVar3 + 1);
  *(CHAR *)((int)local_8 + uVar3) = '\0';
  *(CHAR *)((int)local_8 + uVar3) = '\0';
  lstrcpynA((LPSTR)local_c,"Sonic Foundry ",uVar3 + 1);
  *(CHAR *)((int)local_c + uVar3) = '\0';
  *(CHAR *)((int)local_c + uVar3) = '\0';
  iVar4 = lstrcmpiA((LPCSTR)local_8,(LPCSTR)local_c);
  FUN_0042bb30(local_10,0x5b1,local_118 + (~-(uint)(iVar4 != 0) & uVar3));
  FUN_0040b970(param_1);
  (**(code **)(*local_14 + 0x3c))(local_14,*(undefined4 *)(param_1 + 0x30),0x7f00);
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
  }
  return 1;
}


