/* Module: sftrans1.dll
   Function: FUN_0049e940
   Address: 0049e940
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __fastcall FUN_0049e940(int param_1)

{
  undefined4 *puVar1;
  LPARAM LVar2;
  HWND pHVar3;
  uint wParam;
  int unaff_EBP;
  UINT UVar4;
  WPARAM WVar5;
  LPCSTR pCVar6;
  int *local_110 [67];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_110[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00555130,local_110);
  }
  (**(code **)(*local_110[0] + 0xc))(local_110[0],(undefined4 *)(param_1 + 0x68));
  LVar2 = ftol();
  WVar5 = 1;
  UVar4 = 0x610;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xfa);
  SendMessageA(pHVar3,UVar4,WVar5,LVar2);
  LVar2 = ftol();
  WVar5 = 1;
  UVar4 = 0x610;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xfc);
  SendMessageA(pHVar3,UVar4,WVar5,LVar2);
  LVar2 = ftol();
  WVar5 = 1;
  UVar4 = 0x610;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xfe);
  SendMessageA(pHVar3,UVar4,WVar5,LVar2);
  LVar2 = ftol();
  WVar5 = 1;
  UVar4 = 0x610;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x100);
  SendMessageA(pHVar3,UVar4,WVar5,LVar2);
  LVar2 = ftol();
  WVar5 = 1;
  UVar4 = 0x610;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x102);
  SendMessageA(pHVar3,UVar4,WVar5,LVar2);
  LVar2 = ftol();
  WVar5 = 1;
  UVar4 = 0x610;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x104);
  SendMessageA(pHVar3,UVar4,WVar5,LVar2);
  LVar2 = ftol();
  WVar5 = 1;
  UVar4 = 0x610;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xf2);
  SendMessageA(pHVar3,UVar4,WVar5,LVar2);
  LVar2 = ftol();
  WVar5 = 1;
  UVar4 = 0x610;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xf4);
  SendMessageA(pHVar3,UVar4,WVar5,LVar2);
  LVar2 = ftol();
  WVar5 = 1;
  UVar4 = 0x610;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xf6);
  SendMessageA(pHVar3,UVar4,WVar5,LVar2);
  LVar2 = ftol();
  WVar5 = 1;
  UVar4 = 0x610;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xf8);
  SendMessageA(pHVar3,UVar4,WVar5,LVar2);
  LVar2 = ftol();
  WVar5 = 1;
  UVar4 = 0x610;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xee);
  SendMessageA(pHVar3,UVar4,WVar5,LVar2);
  FUN_004c6ae0(&stack0xfffffeec,&DAT_0055e6e4,*(undefined4 *)(param_1 + 0x68),
               *(undefined4 *)(param_1 + 0x6c));
  pCVar6 = &stack0xfffffeec;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xed);
  SetWindowTextA(pHVar3,pCVar6);
  FUN_004c6ae0(&stack0xfffffeec,&DAT_0055e6e4,*(undefined4 *)(param_1 + 200),
               *(undefined4 *)(param_1 + 0xcc));
  pCVar6 = &stack0xfffffeec;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xf9);
  SetWindowTextA(pHVar3,pCVar6);
  FUN_004c6ae0(&stack0xfffffeec,&DAT_0055e6e4,*(undefined4 *)(param_1 + 0xd0),
               *(undefined4 *)(param_1 + 0xd4));
  pCVar6 = &stack0xfffffeec;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xfb);
  SetWindowTextA(pHVar3,pCVar6);
  FUN_004c6ae0(&stack0xfffffeec,&DAT_0055e6e4,*(undefined4 *)(param_1 + 0xb8),
               *(undefined4 *)(param_1 + 0xbc));
  pCVar6 = &stack0xfffffeec;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xfd);
  SetWindowTextA(pHVar3,pCVar6);
  FUN_004c6ae0(&stack0xfffffeec,&DAT_0055e6e4,*(undefined4 *)(param_1 + 0xc0),
               *(undefined4 *)(param_1 + 0xc4));
  pCVar6 = &stack0xfffffeec;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xff);
  SetWindowTextA(pHVar3,pCVar6);
  FUN_004c6ae0(&stack0xfffffeec,&DAT_0055e6e4,*(undefined4 *)(param_1 + 0xa8),
               *(undefined4 *)(param_1 + 0xac));
  pCVar6 = &stack0xfffffeec;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x101);
  SetWindowTextA(pHVar3,pCVar6);
  FUN_004c6ae0(&stack0xfffffeec,&DAT_0055e6e4,*(undefined4 *)(param_1 + 0xb0),
               *(undefined4 *)(param_1 + 0xb4));
  pCVar6 = &stack0xfffffeec;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x103);
  SetWindowTextA(pHVar3,pCVar6);
  FUN_004c6ae0(&stack0xfffffeec,&DAT_0055e6e4,*(undefined4 *)(param_1 + 0x98),
               *(undefined4 *)(param_1 + 0x9c));
  pCVar6 = &stack0xfffffeec;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xf1);
  SetWindowTextA(pHVar3,pCVar6);
  FUN_004c6ae0(&stack0xfffffeec,&DAT_0055e6e4,*(undefined4 *)(param_1 + 0xa0),
               *(undefined4 *)(param_1 + 0xa4));
  pCVar6 = &stack0xfffffeec;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xf3);
  SetWindowTextA(pHVar3,pCVar6);
  FUN_004c6ae0(&stack0xfffffeec,&DAT_0055e6e4,*(undefined4 *)(param_1 + 0x88),
               *(undefined4 *)(param_1 + 0x8c));
  pCVar6 = &stack0xfffffeec;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xf5);
  SetWindowTextA(pHVar3,pCVar6);
  FUN_004c6ae0(&stack0xfffffeec,&DAT_0055e6e4,*(undefined4 *)(param_1 + 0x90),
               *(undefined4 *)(param_1 + 0x94));
  pCVar6 = &stack0xfffffeec;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xf7);
  SetWindowTextA(pHVar3,pCVar6);
  LVar2 = 0;
  wParam = (uint)(*(int *)(param_1 + 0x70) != 0);
  UVar4 = 0xf1;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xef);
  SendMessageA(pHVar3,UVar4,wParam,LVar2);
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x30),0xf0);
  FUN_00527460(pHVar3);
  FUN_00529380(param_1 + 0x74);
  if (&stack0x00000000 != &DAT_00000004) {
    (**(code **)(unaff_EBP + 8))(&stack0xfffffffc);
  }
  return;
}


