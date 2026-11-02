/* Module: vidcap30.exe
   Function: FUN_00441070
   Address: 00441070
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00441070(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  DWORD DVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  tagPOINT local_c;
  
  uVar6 = DAT_005bb838;
  DVar1 = GetMessagePos();
  local_c.x = (LONG)(short)DVar1;
  local_c.y = (LONG)(short)(DVar1 >> 0x10);
  uVar2 = _TrackbarInst_Message_16(*(undefined4 *)(param_3 + 0x13c8),0x61e,0,0);
  uVar3 = uVar2 & 0xffff;
  if ((*(byte *)(param_3 + 0x1aec) & 1) == 0) {
    return;
  }
  ScreenToClient(*(HWND *)(param_3 + 8),&local_c);
  if ((*(byte *)(param_3 + 0x1ae8) & 1) != 0) {
    uVar4 = FUN_0042ea80(uVar6);
    switch(param_4) {
    case 0:
      iVar5 = _TrackbarInst_Message_16(param_1,0x60a,0,0);
      FUN_0043a6c0(param_3,iVar5 - param_5,iVar5 - param_5 >> 0x1f);
      return;
    case 1:
      iVar5 = _TrackbarInst_Message_16(param_1,0x60a,0,0);
      FUN_0043a6c0(param_3,iVar5 + param_5,iVar5 + param_5 >> 0x1f);
      return;
    case 2:
    case 3:
      iVar5 = (int)(((ulonglong)uVar4 * (ulonglong)(local_c.x - (uVar2 >> 0x10)) +
                    (ulonglong)(uVar3 >> 1)) / (ulonglong)uVar3);
      FUN_0043a6c0(param_3,iVar5,iVar5 >> 0x1f);
      return;
    default:
      return;
    case 5:
      FUN_0043a6c0(param_3,param_5,param_5 >> 0x1f);
      return;
    case 9:
      SendMessageA(*(HWND *)(param_3 + 8),0x111,0x1d7,0);
      return;
    }
  }
  *(uint *)(param_3 + 0x1c34) = *(uint *)(param_3 + 0x1c34) & 0xfffffeff;
  *(undefined4 *)(param_3 + 0x1bfc) = 0;
  *(undefined4 *)(param_3 + 0x1c00) = 0;
  switch(param_4) {
  case 0:
    iVar5 = _TrackbarInst_Message_16(param_1,0x60a,0,0);
    param_5 = iVar5 - param_5;
    break;
  case 1:
    iVar5 = _TrackbarInst_Message_16(param_1,0x60a,0,0);
    param_5 = param_5 + iVar5;
    break;
  case 2:
  case 3:
    param_5 = (int)(((ulonglong)(local_c.x - (uVar2 >> 0x10)) * 0xc + (ulonglong)(uVar3 >> 1)) /
                   (ulonglong)uVar3) + -6;
  }
  if (param_5 < -6) {
    param_5 = -6;
  }
  else if (6 < param_5) {
    param_5 = 6;
  }
  if (param_4 == 9) {
    return;
  }
  switch(param_5) {
  case 0:
    SendMessageA(*(HWND *)(param_3 + 8),0x111,0x1d7,0);
    break;
  case 1:
  case 2:
    uVar6 = 1;
    goto LAB_004412ff;
  case 3:
    FUN_00427010(param_3 + 0xa48,8,1);
    break;
  case 4:
    FUN_00427010(param_3 + 0xa48,7,1);
    break;
  case 5:
  case 6:
    uVar6 = 0;
LAB_004412ff:
    FUN_00426d30(param_3 + 0xa48,uVar6);
    break;
  case -6:
  case -5:
    FUN_00426e00(param_3 + 0xa48,0);
    break;
  case -4:
    FUN_00427010(param_3 + 0xa48,7,0);
    break;
  case -3:
    FUN_00427010(param_3 + 0xa48,8,0);
    break;
  case -2:
  case -1:
    FUN_00426e00(param_3 + 0xa48,1);
  }
  _TrackbarInst_Message_16(*(undefined4 *)(param_3 + 0x13c8),0x610,1,param_5);
  return;
}


