/* Module: sftrkfx1.dll
   Function: FUN_5cbaad90
   Address: 5cbaad90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cbaad90(int *param_1,int param_2,int param_3)

{
  SHORT SVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  tagPOINT local_8;
  
  if (param_3 == 0) {
    return;
  }
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((uint)param_1[0x20] <= (uint)param_1[0x16]) {
    return;
  }
  iVar2 = param_1[param_1[0x16] + 0x21];
  if (iVar2 == 0) {
    return;
  }
  if ((param_1[0x15] & 0x10U) != 0) {
    MessageBeep(0);
    return;
  }
  switch(param_2) {
  case 0x1b:
    FUN_5cbaac60(param_1,0x1f,0,0);
    return;
  case 0x23:
    SVar1 = GetAsyncKeyState(0x10);
    if ((SVar1 < 0) && (param_1[0x18] != 0)) {
      param_1[0x18] = *(int *)(iVar2 + 0x28) - param_1[0x17];
      FUN_5cbaa380(param_1);
      return;
    }
    break;
  case 0x24:
    SVar1 = GetAsyncKeyState(0x10);
    if ((SVar1 < 0) && (param_1[0x18] != 0)) {
      param_1[0x18] = param_1[0x17] + param_1[0x18];
      param_1[0x17] = 0;
      FUN_5cbaa380(param_1);
      return;
    }
    break;
  case 0x25:
  case 0x27:
    iVar5 = (-(uint)(param_2 != 0x25) & 2) - 1;
    SVar1 = GetAsyncKeyState(0x11);
    if (SVar1 < 0) {
      if (param_1[0x18] != 0) {
        dVar6 = 0.0;
        goto LAB_5cbaaf26;
      }
    }
    else if (param_1[0x1d] != -1) {
      GetCursorPos(&local_8);
      ScreenToClient((HWND)*param_1,&local_8);
      local_8.x = local_8.x + iVar5;
      if (param_1[5] <= local_8.x) {
        return;
      }
      if (local_8.x < param_1[3]) {
        return;
      }
      SetCursorPos(local_8.x,local_8.y);
      return;
    }
    SVar1 = GetAsyncKeyState(0x10);
    if (-1 < SVar1) {
      return;
    }
    if (0 < iVar5) {
      uVar3 = param_1[0x18];
      if (uVar3 == 0) {
        param_1[0x17] = 0;
        param_1[0x18] = 1;
        FUN_5cbaa380(param_1);
        return;
      }
      if (uVar3 == 1) {
        param_1[0x15] = param_1[0x15] & 0xffffffdf;
      }
      if ((param_1[0x15] & 0x20U) == 0) {
        uVar4 = *(int *)(iVar2 + 0x28) - param_1[0x17];
        if (uVar3 + 1 < uVar4) {
          uVar4 = uVar3 + 1;
        }
        param_1[0x18] = uVar4;
        FUN_5cbaa380(param_1);
        return;
      }
      if (uVar3 < 2) {
        uVar3 = param_1[0x17] + 1;
        uVar4 = *(int *)(iVar2 + 0x28) - 1;
        if (uVar4 <= uVar3) {
          uVar3 = uVar4;
        }
        param_1[0x17] = uVar3;
        param_1[0x18] = 1;
        param_1[0x15] = param_1[0x15] & 0xffffffdf;
        FUN_5cbaa380(param_1);
        return;
      }
      param_1[0x17] = param_1[0x17] + 1;
      param_1[0x18] = uVar3 - 1;
      FUN_5cbaa380(param_1);
      return;
    }
    iVar5 = param_1[0x18];
    if (iVar5 == 0) {
      param_1[0x17] = *(int *)(iVar2 + 0x28) + -1;
    }
    else {
      if (iVar5 == 1) {
        param_1[0x15] = param_1[0x15] | 0x20;
      }
      if ((param_1[0x15] & 0x20U) != 0) {
        if (param_1[0x17] != 0) {
          param_1[0x17] = param_1[0x17] + -1;
          param_1[0x18] = iVar5 + 1;
          FUN_5cbaa380(param_1);
          return;
        }
        goto LAB_5cbab163;
      }
      param_1[0x18] = iVar5 + -1;
      if (iVar5 + -1 != 0) goto LAB_5cbab163;
      if (param_1[0x17] != 0) {
        param_1[0x17] = param_1[0x17] + -1;
        param_1[0x18] = 1;
        FUN_5cbaa380(param_1);
        return;
      }
    }
    param_1[0x18] = 1;
LAB_5cbab163:
    FUN_5cbaa380(param_1);
    return;
  case 0x26:
  case 0x28:
    SVar1 = GetAsyncKeyState(0x11);
    if (-1 < SVar1) {
      if (param_1[0x1d] == -1) {
        return;
      }
      GetCursorPos(&local_8);
      ScreenToClient((HWND)*param_1,&local_8);
      local_8.y = local_8.y + ((-(uint)(param_2 != 0x26) & 2) - 1);
      if (param_1[6] <= local_8.y) {
        return;
      }
      if (local_8.y < param_1[4]) {
        return;
      }
      SetCursorPos(local_8.x,local_8.y);
      return;
    }
    dVar6 = _DAT_5cc04240;
    if (param_2 == 0x26) {
      dVar6 = _DAT_5cc04598;
    }
    if (param_1[0x18] == 0) {
      return;
    }
    iVar5 = 0;
LAB_5cbaaf26:
    iVar2 = FUN_5cbab2b0((int)param_1,iVar2,iVar5,dVar6,1);
    if (iVar2 != 0) {
      FUN_5cbaa380(param_1);
      return;
    }
    break;
  case 0x2d:
    FUN_5cbab230(param_1,iVar2);
    FUN_5cbaa380(param_1);
    return;
  case 0x2e:
    FUN_5cbab1e0((int)param_1,iVar2);
    FUN_5cbaa380(param_1);
    return;
  case 0x41:
    SVar1 = GetAsyncKeyState(0x11);
    if (SVar1 < 0) {
      if (param_1[0x18] == 0) {
        param_1[0x17] = 0;
        param_1[0x18] = *(int *)(iVar2 + 0x28);
        FUN_5cbaa380(param_1);
        return;
      }
      param_1[0x17] = -1;
      param_1[0x18] = 0;
      FUN_5cbaa380(param_1);
      return;
    }
  }
  return;
}


