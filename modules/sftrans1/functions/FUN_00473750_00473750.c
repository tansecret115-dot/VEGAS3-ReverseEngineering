/* Module: sftrans1.dll
   Function: FUN_00473750
   Address: 00473750
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00473750(int param_1,int param_2)

{
  int iVar1;
  HWND pHVar2;
  LPARAM lParam;
  int iVar3;
  undefined8 local_28;
  CHAR local_20 [12];
  CHAR local_14 [16];
  
  iVar1 = param_2 * 0x20 + 0x88 + param_1;
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x3f9);
  lParam = ftol();
  SendMessageA(pHVar2,0x610,1,lParam);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x453);
  if (_DAT_00555910 <= *(double *)(iVar1 + 0x10)) {
    if (*(double *)(iVar1 + 0x10) <= _DAT_00561950) {
      local_28 = *(undefined8 *)(iVar1 + 0x10);
    }
    else {
      local_28 = 0x4040000000000000;
    }
  }
  else {
    local_28 = 0;
  }
  FUN_004d6250(local_20,(undefined4)local_28,local_28._4_4_,5,0);
  SendMessageA(pHVar2,0xd,10,(LPARAM)local_14);
  iVar3 = lstrcmpA(local_14,local_20);
  if (iVar3 != 0) {
    SendMessageA(pHVar2,0xc,0,(LPARAM)local_20);
  }
  CheckDlgButton(*(HWND *)(param_1 + 0x30),0x3fc,(uint)(*(int *)(iVar1 + 0x18) != 0));
  return;
}


