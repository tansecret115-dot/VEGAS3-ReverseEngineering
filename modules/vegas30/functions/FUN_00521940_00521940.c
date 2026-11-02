/* Module: vegas30.exe
   Function: FUN_00521940
   Address: 00521940
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00521940(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  tagRECT local_3c;
  undefined4 local_2c [7];
  undefined1 local_10 [16];
  
  if (DAT_0064762c == 0) {
    return false;
  }
  if (*param_1 == 2) {
    uVar3 = 0x6995;
  }
  else {
    uVar3 = 0x6996;
  }
  uVar3 = _SfGetString_8(DAT_00647204,uVar3);
  iVar1 = *(int *)(DAT_0064762c + 0xa4);
  if (iVar1 != 0) {
    if ((param_2 != 0) && (DAT_0064aef4 == 0)) {
      FUN_00468f50(*(undefined4 *)(iVar1 + 8),uVar3,param_2);
    }
    FUN_0050d1d0(iVar1,param_1);
    FUN_0050c0d0(iVar1);
    InvalidateRect(*(HWND *)(iVar1 + 8),(RECT *)0x0,0);
    InvalidateRect(*(HWND *)(iVar1 + 0x180),(RECT *)0x0,0);
    if (((*(byte *)(iVar1 + 0x154) & 1) != 0) && (*(HWND *)(iVar1 + 0x168) != (HWND)0x0)) {
      InvalidateRect(*(HWND *)(iVar1 + 0x168),(RECT *)0x0,0);
    }
    FUN_0040d4a0(iVar1);
    return true;
  }
  puVar2 = local_2c;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_2c[0] = 0x2c;
  local_2c[2] = 1;
  GetWindowRect(DAT_00647624,&local_3c);
  FUN_00468fb0(local_10,&local_3c,500,400);
  iVar1 = FUN_00411360(1,0,&PTR_LAB_00644a38,&DAT_0060f98c,local_2c,0x191,0,0x438,0);
  if (iVar1 != 0) {
    if ((param_2 != 0) && (DAT_0064aef4 == 0)) {
      FUN_00468f50(*(undefined4 *)(iVar1 + 8),uVar3,param_2);
    }
    FUN_0050d1d0(iVar1,param_1);
  }
  return iVar1 != 0;
}


