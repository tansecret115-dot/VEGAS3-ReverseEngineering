/* Module: vidpcore.dll
   Function: FUN_5de6a750
   Address: 5de6a750
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de6a750(int param_1)

{
  undefined4 *puVar1;
  LPARAM lParam;
  LPARAM lParam_00;
  HWND pHVar2;
  int *unaff_EBP;
  undefined1 *puVar3;
  undefined1 auStack_110 [4];
  int *local_10c [67];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_10c[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17ab0,local_10c);
  }
  (**(code **)(*local_10c[0] + 0x34))(local_10c[0],param_1 + 0x50,0x20);
  lParam = ftol();
  lParam_00 = ftol();
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x3ee);
  SendMessageA(pHVar2,0x610,1,lParam);
  SendMessageA(pHVar2,0x611,0,lParam_00);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x599);
  SendMessageA(pHVar2,0x610,1,lParam_00);
  SendMessageA(pHVar2,0x611,0,lParam);
  FUN_5deb5050(auStack_110,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x50),
               *(undefined4 *)(param_1 + 0x54));
  puVar3 = auStack_110;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x3f6);
  FUN_5deb6a10(pHVar2,puVar3);
  FUN_5deb5050(auStack_110,&DAT_5df1f2f8,*(undefined4 *)(param_1 + 0x68),
               *(undefined4 *)(param_1 + 0x6c));
  puVar3 = auStack_110;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x59a);
  FUN_5deb6a10(pHVar2,puVar3);
  CheckDlgButton(*(HWND *)(param_1 + 0x30),0x3e9,*(UINT *)(param_1 + 0x58));
  CheckDlgButton(*(HWND *)(param_1 + 0x30),0x3ea,*(UINT *)(param_1 + 0x5c));
  CheckDlgButton(*(HWND *)(param_1 + 0x30),0x3eb,*(UINT *)(param_1 + 0x60));
  CheckDlgButton(*(HWND *)(param_1 + 0x30),0x3ec,*(UINT *)(param_1 + 100));
  if (unaff_EBP != (int *)0x0) {
    (**(code **)(*unaff_EBP + 8))(unaff_EBP);
  }
  return;
}


