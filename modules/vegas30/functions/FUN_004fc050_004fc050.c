/* Module: vegas30.exe
   Function: FUN_004fc050
   Address: 004fc050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fc050(undefined4 *param_1,int param_2,uint param_3,LPARAM param_4)

{
  POINT pt;
  POINT pt_00;
  SHORT SVar1;
  DWORD DVar2;
  HWND pHVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  UINT Msg;
  tagRECT local_10;
  
  pHVar3 = (HWND)*param_1;
  SVar1 = GetKeyState(0x10);
  bVar5 = SVar1 < 0;
  SVar1 = GetKeyState(0x11);
  bVar6 = SVar1 < 0;
  if (param_2 == 0x101) {
    if (param_3 < 0x10) {
      return;
    }
    if (0x11 < param_3) {
      return;
    }
    DVar2 = GetMessagePos();
    GetWindowRect(pHVar3,&local_10);
    pt.y = (int)(short)(DVar2 >> 0x10);
    pt.x = (int)(short)DVar2;
    PtInRect(&local_10,pt);
    return;
  }
  if (param_2 != 0x100) {
    return;
  }
  switch(param_3) {
  case 9:
    Msg = 0x100;
    pHVar3 = GetParent(pHVar3);
    SendMessageA(pHVar3,Msg,param_3,param_4);
    return;
  case 0x10:
  case 0x11:
    DVar2 = GetMessagePos();
    GetWindowRect(pHVar3,&local_10);
    pt_00.y = (int)(short)(DVar2 >> 0x10);
    pt_00.x = (int)(short)DVar2;
    PtInRect(&local_10,pt_00);
    return;
  case 0x1b:
    FUN_004fba10(param_1,0x1f,param_3,param_4);
    return;
  case 0x21:
  case 0x22:
    if (bVar6) {
      iVar4 = *(int *)param_1[0x5f];
    }
    else {
      iVar4 = 1;
      if (0 < (int)param_1[9] / (int)param_1[0x5b]) {
        iVar4 = (int)param_1[9] / (int)param_1[0x5b];
      }
      iVar4 = param_1[0x5c] * iVar4;
    }
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    if (param_3 == 0x21) {
      iVar4 = -iVar4;
    }
    FUN_004fb260(param_1,iVar4,bVar5);
    return;
  case 0x23:
    FUN_004fb260(param_1,*(undefined4 *)param_1[0x5f],bVar5);
    return;
  case 0x24:
    FUN_004fb260(param_1,-*(int *)param_1[0x5f],bVar5);
    return;
  case 0x25:
  case 0x27:
    FUN_004fb2e0(param_1,(-(uint)(param_3 != 0x25) & 2) - 1,bVar5);
    return;
  case 0x26:
  case 0x28:
    iVar4 = param_1[0x5c];
    if (param_3 == 0x26) {
      iVar4 = -iVar4;
    }
    FUN_004fb260(param_1,iVar4,bVar5);
    return;
  case 0x2d:
    if (bVar5) {
      SendMessageA(pHVar3,0x302,0,0);
      return;
    }
    if (!bVar6) {
      return;
    }
    goto LAB_004fc3a8;
  case 0x2e:
    if (bVar5) {
      SendMessageA(pHVar3,0x300,0,0);
      return;
    }
    if (!bVar6) {
      SendMessageA(pHVar3,0x303,0,0);
      return;
    }
    break;
  case 0x41:
    if (bVar6) {
      SendMessageA(pHVar3,0x7f09,(uint)bVar5,0);
      return;
    }
    break;
  case 0x43:
    if (!bVar6) {
      return;
    }
    if (bVar5) {
      return;
    }
LAB_004fc3a8:
    SendMessageA(pHVar3,0x301,0,0);
    break;
  case 0x56:
    if (bVar6) {
      if (bVar5) {
        SendMessageA(pHVar3,0x7f07,0,0);
        return;
      }
      SendMessageA(pHVar3,0x302,0,0);
      return;
    }
    break;
  case 0x58:
    if ((bVar6) && (!bVar5)) {
      SendMessageA(pHVar3,0x300,0,0);
      return;
    }
    break;
  case 0x59:
    if (bVar6) {
      SendMessageA(pHVar3,0x304,1,0);
      return;
    }
    break;
  case 0x5a:
    if (bVar6) {
      if (!bVar5) {
        SendMessageA(pHVar3,0x304,0,0);
        return;
      }
      SendMessageA(pHVar3,0x304,1,0);
      return;
    }
    break;
  case 0x5d:
switchD_004fc0f7_caseD_5d:
    SendMessageA(pHVar3,0x7b,(WPARAM)pHVar3,-1);
    return;
  case 0x79:
    if (bVar5) goto switchD_004fc0f7_caseD_5d;
  }
  return;
}


