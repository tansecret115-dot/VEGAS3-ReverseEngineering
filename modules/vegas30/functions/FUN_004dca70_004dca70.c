/* Module: vegas30.exe
   Function: FUN_004dca70
   Address: 004dca70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004dca70(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  SHORT SVar1;
  SHORT SVar2;
  LRESULT LVar3;
  int iVar4;
  tagPOINT local_8;
  
  if (param_3 < 0x146c) {
    if (param_3 == 0x146b) {
switchD_004dced8_caseD_a7f5:
      FUN_004dd0f0(param_1);
      return;
    }
    switch(param_3) {
    case 0x1450:
      FUN_004dcfd0(param_1);
      return;
    case 0x1451:
      FUN_004dd490(param_1,0x301,0,0);
      return;
    case 0x1452:
      FUN_004bc630(param_1,param_1 + 0x6c0,0xa158,0,0);
      return;
    case 0x1453:
      FUN_004bc630(param_1,param_1 + 0x6c0,0xa15b,0,0);
      return;
    case 0x1454:
      if ((DAT_0064762c != 0) &&
         (LVar3 = SendMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0x70) + 0xf1c),0x150,
                               *(WPARAM *)(*(int *)(DAT_0064762c + 0x70) + 0xf30),0), LVar3 != 0)) {
        FUN_004dc360(param_1,LVar3,1);
        return;
      }
      break;
    case 0x1455:
      local_8.x = *(LONG *)(param_1 + 0x35c);
      local_8.y = *(LONG *)(param_1 + 0x360);
      ScreenToClient(*(HWND *)(param_1 + 4),&local_8);
      FUN_004dd150(param_1,local_8.x,local_8.y);
      return;
    case 0x1456:
      FUN_004dd490(param_1,0x302,0,0);
      return;
    case 0x1457:
    case 0x1458:
      FUN_004dc0b0(param_1,param_3 == 0x1458);
      return;
    case 0x1464:
      SVar1 = GetKeyState(0x10);
      SVar2 = GetKeyState(0x11);
      if ((-1 < SVar1) && (-1 < SVar2)) {
        FUN_004dc660(param_1,1);
        return;
      }
      FUN_004dc660(param_1,0);
      return;
    }
  }
  else if (param_3 < 0x9d76) {
    if (param_3 == 0x9d75) {
      if ((*(uint *)(param_1 + 0x18) & 0x100) == 0) {
        FUN_00458480(param_1);
      }
      if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
        FUN_004db2f0(param_1,0);
        return;
      }
    }
    else {
      if (0x9d70 < param_3) {
        switch(param_3) {
        case 0x9d71:
          FUN_00453970(param_1,0,0,1);
          FUN_00455090(param_1,0xf);
          return;
        case 0x9d72:
          FUN_00453970(param_1,*(undefined4 *)(param_1 + 0x600),*(undefined4 *)(param_1 + 0x604),1);
          FUN_00455090(param_1,0xf);
          return;
        case 0x9d73:
          goto switchD_004dcd12_caseD_9d73;
        case 0x9d74:
          FUN_004db2f0(param_1,1);
          return;
        default:
          goto switchD_004dcaa0_caseD_1459;
        }
      }
      if (param_3 == 0x9d70) {
switchD_004dcd12_caseD_9d73:
        if (param_4 == 2) {
          FUN_00458050(param_1,(-(uint)(param_3 != 0x9d70) & 100) - 0x32,0,0);
          return;
        }
        if (param_4 == 3) {
          FUN_00458050(param_1,0,0,1);
          return;
        }
        if (param_4 == 0x2a) {
          FUN_00458050(param_1,(-(uint)(param_3 != 0x9d70) & 100) - 0x32,0,0);
          return;
        }
      }
      else if (param_3 < 0x9d6f) {
        if (param_3 == 0x9d6e) {
          FUN_004db540(param_1,0);
          return;
        }
        if (0x146f < param_3) {
          if (param_3 < 0x1473) {
            if (*(int *)(param_1 + 0xd94) == 2) {
              iVar4 = param_3 - 0x1470;
              if (iVar4 < 0) {
                iVar4 = 0;
              }
              else if (2 < iVar4) {
                iVar4 = 2;
              }
              if (DAT_0064a578 != iVar4) {
                FUN_004dd180(param_1,iVar4);
                FUN_004530a0(param_1,0x7fff);
                return;
              }
            }
          }
          else if (param_3 == 0x9d6d) {
            FUN_004db2f0(param_1,0);
            return;
          }
        }
      }
      else if (param_3 == 0x9d6f) {
        FUN_004db540(param_1,1);
        return;
      }
    }
  }
  else if (param_3 < 0xa7d1) {
    if (0xa7cd < param_3) {
      *(uint *)(param_1 + 0xd98) = param_3 - 0xa7ce;
      FUN_004df2c0(param_1);
      FUN_004530a0(param_1,0);
      return;
    }
    if (param_3 < 0x9e90) {
      if (param_3 == 0x9e8f) {
        SendMessageA(DAT_00647624,0x111,0x9e8f,0);
        return;
      }
      if (param_3 == 0x9d7a) {
        FUN_00458480(param_1);
        return;
      }
      if (param_3 == 0x9dd4) {
        FUN_00458dc0(param_1);
        return;
      }
    }
    else if (param_3 == 0xa7ab) {
      FUN_004530a0(param_1,0);
      return;
    }
  }
  else {
    switch(param_3) {
    case 0xa7d1:
      DAT_006495dc = (uint)(DAT_006495dc == 0);
      break;
    case 0xa7d2:
    case 0xa7d3:
      FUN_004e2440(param_1,param_3 == 0xa7d2);
      return;
    case 0xa7e0:
    case 0xa7e1:
      FUN_004e24a0(param_1,param_3 == 0xa7e0);
      return;
    case 0xa7f5:
      goto switchD_004dced8_caseD_a7f5;
    }
  }
switchD_004dcaa0_caseD_1459:
  return;
}


