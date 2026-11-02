/* Module: sftrans1.dll
   Function: FUN_0049ee80
   Address: 0049ee80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0049ee80(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  HWND pHVar3;
  UINT UVar4;
  WPARAM WVar5;
  LPARAM LVar6;
  CHAR local_11c [260];
  LPSTR local_18;
  HWND local_14;
  int *local_10;
  HWND local_c;
  uint local_8;
  
  local_14 = *(HWND *)(param_1 + 0x30);
  local_c = GetDlgItem(local_14,0x5b3);
  SendMessageA(local_c,0x600,0,0);
  GetDlgItemTextA(local_14,0x5b3,local_11c,0x82);
  SendMessageA(local_c,0x601,0xa029,0x555a6c);
  SendMessageA(local_c,0x601,41000,0x555a74);
  local_8 = lstrlenA("Sonic Foundry ");
  FUN_00551640();
  local_c = (HWND)&stack0xfffffed8;
  FUN_00551640();
  local_18 = &stack0xfffffed8;
  lstrcpynA((LPSTR)local_c,local_11c,local_8 + 1);
  *(CHAR *)((int)local_c + local_8) = '\0';
  *(CHAR *)((int)local_c + local_8) = '\0';
  lstrcpynA(local_18,"Sonic Foundry ",local_8 + 1);
  local_18[local_8] = '\0';
  local_18[local_8] = '\0';
  iVar2 = lstrcmpiA((LPCSTR)local_c,local_18);
  FUN_004c85d0(local_14,0x5b3,local_11c + (~-(uint)(iVar2 != 0) & local_8));
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0x60e;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xee);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0xffff;
  WVar5 = 0;
  UVar4 = 0x60f;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xee);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0x60e;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xfa);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0xffff;
  WVar5 = 0;
  UVar4 = 0x60f;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xfa);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0x60e;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xfc);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0xffff;
  WVar5 = 0;
  UVar4 = 0x60f;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xfc);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0x60e;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xfe);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0xffff;
  WVar5 = 0;
  UVar4 = 0x60f;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xfe);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0x60e;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x100);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0xffff;
  WVar5 = 0;
  UVar4 = 0x60f;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x100);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0x60e;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x102);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0xffff;
  WVar5 = 0;
  UVar4 = 0x60f;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x102);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0x60e;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x104);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0xffff;
  WVar5 = 0;
  UVar4 = 0x60f;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x104);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0x60e;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xf2);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0xffff;
  WVar5 = 0;
  UVar4 = 0x60f;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xf2);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0x60e;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xf4);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0xffff;
  WVar5 = 0;
  UVar4 = 0x60f;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xf4);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0x60e;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xf6);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0xffff;
  WVar5 = 0;
  UVar4 = 0x60f;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xf6);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0;
  WVar5 = 0;
  UVar4 = 0x60e;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xf8);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  LVar6 = 0xffff;
  WVar5 = 0;
  UVar4 = 0x60f;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xf8);
  SendMessageA(pHVar3,UVar4,WVar5,LVar6);
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_10 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00555130,&local_10);
  }
  (**(code **)(*local_10 + 0x14))(local_10,*(undefined4 *)(param_1 + 0x30),1000);
  FUN_0049e940();
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
  }
  return 0;
}


