/* Module: vidpcore.dll
   Function: FUN_5de78ea0
   Address: 5de78ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de78ea0(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  LPARAM lParam;
  LPARAM LVar3;
  LPARAM lParam_00;
  int *unaff_ESI;
  int iVar4;
  int *local_110 [68];
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_110[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17b50,local_110);
  }
  (**(code **)(*local_110[0] + 0x34))(local_110[0],(int *)(param_1 + 0x4c),0x14);
  iVar4 = *(int *)(param_1 + 0x4c);
  if (iVar4 == 0) {
    pHVar2 = *(HWND *)(param_1 + 0x30);
    iVar4 = 0x43a;
  }
  else {
    if (iVar4 != 1) goto LAB_5de78f12;
    pHVar2 = *(HWND *)(param_1 + 0x30);
    iVar4 = 0x43c;
  }
  CheckRadioButton(pHVar2,0x43a,0x43c,iVar4);
LAB_5de78f12:
  CheckDlgButton(*(HWND *)(param_1 + 0x30),0x5ba,*(UINT *)(param_1 + 0x5c));
  FUN_5deb5050(local_110,&DAT_5df1f2f8,(double)*(float *)(param_1 + 0x54));
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x43e);
  FUN_5deb6a10(pHVar2);
  FUN_5deb5050(local_110,&DAT_5df1f2f8,(double)*(float *)(param_1 + 0x58));
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x440);
  FUN_5deb6a10(pHVar2);
  lParam = ftol();
  LVar3 = ftol();
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x439);
  lParam_00 = ftol();
  SendMessageA(pHVar2,0x610,1,lParam_00);
  SendMessageA(pHVar2,0x611,0,LVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x43b);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  SendMessageA(pHVar2,0x611,0,lParam);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


