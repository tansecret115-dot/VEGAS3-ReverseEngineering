/* Module: vidpcore.dll
   Function: FUN_5de82ad0
   Address: 5de82ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de82ad0(int param_1)

{
  undefined4 *puVar1;
  LPSTR lpString1;
  HWND pHVar2;
  WPARAM WVar3;
  HWND hWnd;
  uint uVar4;
  int iVar5;
  CHAR local_118 [260];
  int local_14;
  HWND local_10;
  LPSTR local_c;
  int *local_8;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_8 = (int *)0x0;
  local_14 = param_1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17bd0,&local_8);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x462);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df292cc);
  SendMessageA(pHVar2,0x151,WVar3,0);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df292bc);
  SendMessageA(pHVar2,0x151,WVar3,1);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df292ac);
  SendMessageA(pHVar2,0x151,WVar3,2);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df29298);
  SendMessageA(pHVar2,0x151,WVar3,3);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df29290);
  SendMessageA(pHVar2,0x151,WVar3,4);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df29284);
  SendMessageA(pHVar2,0x151,WVar3,5);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df29270);
  SendMessageA(pHVar2,0x151,WVar3,6);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df2925c);
  SendMessageA(pHVar2,0x151,WVar3,7);
  WVar3 = SendMessageA(pHVar2,0x143,0,0x5df29248);
  SendMessageA(pHVar2,0x151,WVar3,8);
  pHVar2 = *(HWND *)(param_1 + 0x30);
  local_10 = pHVar2;
  hWnd = GetDlgItem(pHVar2,0x5b1);
  SendMessageA(hWnd,0x600,0,0);
  GetDlgItemTextA(pHVar2,0x5b1,local_118,0x82);
  SendMessageA(hWnd,0x601,0xa029,0x5df18d88);
  SendMessageA(hWnd,0x601,41000,0x5df18d90);
  uVar4 = lstrlenA("Sonic Foundry ");
  FUN_5df157d0();
  FUN_5df157d0();
  local_c = &stack0xfffffedc;
  lstrcpynA(&stack0xfffffedc,local_118,uVar4 + 1);
  lpString1 = local_c;
  local_118[uVar4 - 0xc] = '\0';
  local_118[uVar4 - 0xc] = '\0';
  lstrcpynA(lpString1,"Sonic Foundry ",uVar4 + 1);
  local_c[uVar4] = '\0';
  local_c[uVar4] = '\0';
  iVar5 = lstrcmpiA(&stack0xfffffedc,local_c);
  FUN_5deb6b40(local_10,0x5b1,local_118 + (~-(uint)(iVar5 != 0) & uVar4));
  iVar5 = local_14;
  FUN_5de82d80();
  (**(code **)(*local_8 + 0x28))(local_8,*(undefined4 *)(iVar5 + 0x30),0x7f00);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return 1;
}


