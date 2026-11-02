/* Module: vidpcore.dll
   Function: FUN_5de7f4e0
   Address: 5de7f4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de7f4e0(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  HWND hWnd;
  LPARAM LVar3;
  int *unaff_ESI;
  undefined1 *puVar4;
  int *local_11c;
  float fStack_118;
  float fStack_114;
  undefined1 auStack_110 [272];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_11c = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17ba0,&local_11c);
  }
  (**(code **)(*local_11c + 0x34))(local_11c,param_1 + 0x50,0x30);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x455);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x454);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  LVar3 = ftol();
  SendMessageA(hWnd,0x610,1,LVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x453);
  fStack_118 = (float)*(double *)(param_1 + 0x60);
  local_11c = (int *)(float)*(double *)(param_1 + 0x58);
  fStack_114 = (float)*(double *)(param_1 + 0x68);
  SendMessageA(pHVar2,0x703,0,(LPARAM)&stack0xfffffee0);
  FUN_5deb5050(auStack_110,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x70),
               *(undefined4 *)(param_1 + 0x74));
  puVar4 = auStack_110;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x457);
  FUN_5deb6a10(pHVar2,puVar4);
  FUN_5deb5050(auStack_110,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x78),
               *(undefined4 *)(param_1 + 0x7c));
  puVar4 = auStack_110;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x456);
  FUN_5deb6a10(pHVar2,puVar4);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


