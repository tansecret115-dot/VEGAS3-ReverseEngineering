/* Module: vidpcore.dll
   Function: FUN_5de80090
   Address: 5de80090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de80090(int param_1)

{
  undefined4 *puVar1;
  LPSTR lpString1;
  HWND pHVar2;
  HWND hWnd;
  uint uVar3;
  int iVar4;
  CHAR local_118 [260];
  int local_14;
  HWND local_10;
  LPSTR local_c;
  int *local_8;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_8 = (int *)0x0;
  local_14 = param_1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17bb0,&local_8);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x458);
  SendMessageA(pHVar2,0x60e,0,0);
  SendMessageA(pHVar2,0x60f,0,1000);
  pHVar2 = *(HWND *)(param_1 + 0x30);
  local_10 = pHVar2;
  hWnd = GetDlgItem(pHVar2,0x5b1);
  SendMessageA(hWnd,0x600,0,0);
  GetDlgItemTextA(pHVar2,0x5b1,local_118,0x82);
  SendMessageA(hWnd,0x601,0xa029,0x5df18d88);
  SendMessageA(hWnd,0x601,41000,0x5df18d90);
  uVar3 = lstrlenA("Sonic Foundry ");
  FUN_5df157d0();
  FUN_5df157d0();
  local_c = &stack0xfffffedc;
  lstrcpynA(&stack0xfffffedc,local_118,uVar3 + 1);
  lpString1 = local_c;
  local_118[uVar3 - 0xc] = '\0';
  local_118[uVar3 - 0xc] = '\0';
  lstrcpynA(lpString1,"Sonic Foundry ",uVar3 + 1);
  local_c[uVar3] = '\0';
  local_c[uVar3] = '\0';
  iVar4 = lstrcmpiA(&stack0xfffffedc,local_c);
  FUN_5deb6b40(local_10,0x5b1,local_118 + (~-(uint)(iVar4 != 0) & uVar3));
  iVar4 = local_14;
  FUN_5de7ffc0();
  (**(code **)(*local_8 + 0x3c))(local_8,*(undefined4 *)(iVar4 + 0x30),0x7f00);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return 1;
}


