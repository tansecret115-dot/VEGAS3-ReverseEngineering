/* Module: vidpcore.dll
   Function: FUN_5de91fe0
   Address: 5de91fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de91fe0(int param_1)

{
  undefined4 *puVar1;
  LPARAM LVar2;
  LPARAM LVar3;
  HWND pHVar4;
  HWND pHVar5;
  LPARAM lParam;
  int *unaff_ESI;
  int *local_110 [68];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_110[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17b60,local_110);
  }
  (**(code **)(*local_110[0] + 0x34))(local_110[0],param_1 + 0x4c,0x14);
  LVar2 = ftol();
  LVar3 = ftol();
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x514);
  FUN_5deb5050(local_110,&DAT_5df1f2f8,(double)*(float *)(param_1 + 0x50));
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x515);
  FUN_5deb6a10(pHVar5);
  FUN_5deb5050(local_110,&DAT_5df1f2f8,(double)*(float *)(param_1 + 0x54));
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x444);
  FUN_5deb6a10(pHVar5);
  FUN_5deb5050(local_110,&DAT_5df1f2f8,(double)*(float *)(param_1 + 0x5c));
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x447);
  FUN_5deb6a10(pHVar5);
  lParam = ftol();
  SendMessageA(pHVar4,0x610,1,lParam);
  SendMessageA(pHVar4,0x611,0,LVar3);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x443);
  LVar3 = ftol();
  SendMessageA(pHVar4,0x610,1,LVar3);
  SendMessageA(pHVar4,0x611,0,LVar2);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x446);
  LVar2 = ftol();
  SendMessageA(pHVar4,0x610,1,LVar2);
  CheckDlgButton(*(HWND *)(param_1 + 0x30),0x5bd,*(UINT *)(param_1 + 0x58));
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


