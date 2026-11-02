/* Module: vidpcore.dll
   Function: FUN_5de84860
   Address: 5de84860
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __fastcall FUN_5de84860(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND hWnd;
  HWND hWnd_00;
  LPARAM LVar3;
  int unaff_EBP;
  undefined1 *puVar4;
  HWND local_124;
  HWND pHStack_120;
  HWND pHStack_11c;
  undefined1 auStack_118 [276];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_124 = (HWND)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17bf0,&local_124);
  }
  (**(code **)(local_124->unused + 0x34))(local_124,(undefined4 *)(param_1 + 0x50),0x30);
  FUN_5deb5050(auStack_118,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x50),
               *(undefined4 *)(param_1 + 0x54));
  puVar4 = auStack_118;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x530);
  FUN_5deb6a10(pHVar2,puVar4);
  FUN_5deb5050(auStack_118,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x58),
               *(undefined4 *)(param_1 + 0x5c));
  puVar4 = auStack_118;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x531);
  FUN_5deb6a10(pHVar2,puVar4);
  FUN_5deb5050(auStack_118,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x60),
               *(undefined4 *)(param_1 + 100));
  puVar4 = auStack_118;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x532);
  FUN_5deb6a10(pHVar2,puVar4);
  FUN_5deb5050(auStack_118,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x68),
               *(undefined4 *)(param_1 + 0x6c));
  puVar4 = auStack_118;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x533);
  FUN_5deb6a10(pHVar2,puVar4);
  FUN_5deb5050(auStack_118,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x70),
               *(undefined4 *)(param_1 + 0x74));
  puVar4 = auStack_118;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x534);
  FUN_5deb6a10(pHVar2,puVar4);
  FUN_5deb5050(auStack_118,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x78),
               *(undefined4 *)(param_1 + 0x7c));
  puVar4 = auStack_118;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x535);
  FUN_5deb6a10(pHVar2,puVar4);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x467);
  pHStack_11c = GetDlgItem(*(HWND *)(param_1 + 0x30),0x468);
  local_124 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x469);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x46a);
  hWnd_00 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x46b);
  pHStack_120 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x46c);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(pHStack_11c,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(local_124,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(hWnd,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(hWnd_00,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(pHStack_120,0x610,1,LVar3);
  if (&stack0x00000000 != &DAT_00000004) {
    (**(code **)(unaff_EBP + 8))(&stack0xfffffffc);
  }
  return;
}


