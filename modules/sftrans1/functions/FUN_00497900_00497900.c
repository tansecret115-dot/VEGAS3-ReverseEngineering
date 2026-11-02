/* Module: sftrans1.dll
   Function: FUN_00497900
   Address: 00497900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00497900(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  HWND pHVar3;
  uint uVar4;
  int iVar5;
  UINT UVar6;
  WPARAM WVar7;
  LPARAM LVar8;
  CHAR local_11c [260];
  uint local_18;
  HWND local_14;
  LPSTR local_10;
  int *local_c;
  LPSTR local_8;
  
  local_14 = *(HWND *)(param_1 + 0x30);
  pHVar3 = GetDlgItem(local_14,0x5b3);
  SendMessageA(pHVar3,0x600,0,0);
  GetDlgItemTextA(local_14,0x5b3,local_11c,0x82);
  SendMessageA(pHVar3,0x601,0xa029,0x555a6c);
  SendMessageA(pHVar3,0x601,41000,0x555a74);
  uVar4 = lstrlenA("Sonic Foundry ");
  local_18 = uVar4;
  FUN_00551640();
  local_8 = &stack0xfffffed8;
  FUN_00551640();
  local_10 = &stack0xfffffed8;
  lstrcpynA(local_8,local_11c,uVar4 + 1);
  local_8[uVar4] = '\0';
  local_8[local_18] = '\0';
  lstrcpynA(local_10,"Sonic Foundry ",uVar4 + 1);
  uVar2 = local_18;
  local_10[uVar4] = '\0';
  local_10[local_18] = '\0';
  iVar5 = lstrcmpiA(local_8,local_10);
  FUN_004c85d0(local_14,0x5b3,local_11c + (~-(uint)(iVar5 != 0) & uVar2));
  LVar8 = 0;
  WVar7 = 0;
  UVar6 = 0x60e;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x1624);
  SendMessageA(pHVar3,UVar6,WVar7,LVar8);
  LVar8 = 0xffff;
  WVar7 = 0;
  UVar6 = 0x60f;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x1624);
  SendMessageA(pHVar3,UVar6,WVar7,LVar8);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x1623);
  SendMessageA(pHVar3,0x80d,1,0);
  SendMessageA(pHVar3,0x80e,1,0);
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_c = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00555130,&local_c);
  }
  (**(code **)(*local_c + 0x14))(local_c,*(undefined4 *)(param_1 + 0x30),1000);
  FUN_004976d0();
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return 1;
}


