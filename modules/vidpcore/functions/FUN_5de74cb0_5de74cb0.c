/* Module: vidpcore.dll
   Function: FUN_5de74cb0
   Address: 5de74cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __fastcall FUN_5de74cb0(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND hWnd;
  HWND hWnd_00;
  LPARAM LVar3;
  int unaff_EBP;
  undefined1 *puVar4;
  HWND local_11c;
  undefined1 auStack_118 [276];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_11c = (HWND)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17b40,&local_11c);
  }
  (**(code **)(local_11c->unused + 0x34))(local_11c,(undefined4 *)(param_1 + 0x50),0x30);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x42d);
  local_11c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x42e);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x433);
  hWnd_00 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x434);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(local_11c,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(hWnd,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(hWnd_00,0x610,1,LVar3);
  FUN_5deb5050(auStack_118,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x58),
               *(undefined4 *)(param_1 + 0x5c));
  puVar4 = auStack_118;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x52c);
  FUN_5deb6a10(pHVar2,puVar4);
  FUN_5deb5050(auStack_118,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x60),
               *(undefined4 *)(param_1 + 100));
  puVar4 = auStack_118;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x52d);
  FUN_5deb6a10(pHVar2,puVar4);
  FUN_5deb5050(auStack_118,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x68),
               *(undefined4 *)(param_1 + 0x6c));
  puVar4 = auStack_118;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x52e);
  FUN_5deb6a10(pHVar2,puVar4);
  FUN_5deb5050(auStack_118,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x70),
               *(undefined4 *)(param_1 + 0x74));
  puVar4 = auStack_118;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x52f);
  FUN_5deb6a10(pHVar2,puVar4);
  CheckDlgButton(*(HWND *)(param_1 + 0x30),0x430,*(UINT *)(param_1 + 0x78));
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x431);
  FUN_5de74c60(pHVar2,*(undefined4 *)(param_1 + 0x50));
  if (&stack0x00000000 != &DAT_00000004) {
    (**(code **)(unaff_EBP + 8))(&stack0xfffffffc);
  }
  return;
}


