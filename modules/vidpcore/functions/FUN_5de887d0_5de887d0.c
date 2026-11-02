/* Module: vidpcore.dll
   Function: FUN_5de887d0
   Address: 5de887d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5de887d0(int param_1)

{
  undefined4 *puVar1;
  HWND pHVar2;
  LPARAM LVar3;
  LPARAM unaff_EBX;
  float *pfVar4;
  int *unaff_ESI;
  int *local_110 [2];
  int local_108;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_110[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17c10,local_110);
  }
  local_108 = param_1 + 0x4c;
  (**(code **)(*local_110[0] + 0x34))(local_110[0],local_108,0x38);
  pfVar4 = (float *)(param_1 + 100);
  if (*(int *)(param_1 + 0x60) == 0) {
    pfVar4 = (float *)(param_1 + 0x74);
  }
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x48a);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x48b);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x48c);
  LVar3 = ftol();
  SendMessageA(pHVar2,0x610,1,LVar3);
  GetDlgItem(*(HWND *)(param_1 + 0x30),0x48e);
  CheckDlgButton(*(HWND *)(param_1 + 0x30),0x489,(uint)(*(int *)(param_1 + 0x5c) != 0));
  FUN_5deb5050(local_110,&DAT_5df1f2f8,(double)*pfVar4);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x528);
  FUN_5deb6a10(pHVar2);
  FUN_5deb5050(local_110,&DAT_5df1f2f8,(double)pfVar4[1]);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x529);
  FUN_5deb6a10(pHVar2);
  FUN_5deb5050(local_110,&DAT_5df1f2f8,(double)pfVar4[3]);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x52a);
  FUN_5deb6a10(pHVar2);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x48f);
  SendMessageA(pHVar2,0x703,0,unaff_EBX);
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}


