/* Module: vidpcore.dll
   Function: FUN_5de69b90
   Address: 5de69b90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_5de69b90(int *param_1,undefined4 param_2,uint param_3,HWND param_4,undefined4 *param_5)

{
  uint uVar1;
  HWND hWnd;
  int iVar2;
  short sVar3;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  uVar1 = param_3 & 0xffff;
  sVar3 = (short)(param_3 >> 0x10);
  if (uVar1 < 0x56a) {
    if (uVar1 == 0x569) {
      if (sVar3 == 0x200) {
        iVar2 = FUN_5de69ac0(param_4,param_1 + 0x1e,0,0,0,0x3ff00000);
        if (iVar2 != 0) {
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
    }
    else if (uVar1 < 0x568) {
      if (uVar1 == 0x567) {
        if (sVar3 == 0x200) {
          iVar2 = FUN_5de69ac0(param_4,param_1 + 0x1a,0,0,0,0x3ff00000);
          if (iVar2 != 0) {
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
        }
      }
      else if (uVar1 == 0xcc) {
        if (sVar3 == 1) {
          lParam = 0;
          wParam = 0;
          Msg = 0x147;
          hWnd = GetDlgItem((HWND)param_1[0xc],0xcc);
          uVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
          if (param_1[0x22] != uVar1) {
            param_1[0x22] = uVar1 & 0xff;
            (**(code **)(*param_1 + 0x2c))(param_1);
          }
          FUN_5de69420();
          *param_5 = 1;
          return 0;
        }
      }
      else if (uVar1 == 0xd7) {
        SendMessageA(param_4,0x702,0,(LPARAM)&local_18);
        *(double *)(param_1 + 0x1a) = (double)local_10;
        *(double *)(param_1 + 0x1c) = (double)local_14;
        *(double *)(param_1 + 0x1e) = (double)local_18;
        *(double *)(param_1 + 0x20) = (double)local_c;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
    else if ((uVar1 == 0x568) && (sVar3 == 0x200)) {
      iVar2 = FUN_5de69ac0(param_4,param_1 + 0x1c,0,0,0,0x3ff00000);
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
  }
  else if (uVar1 < 0xa029) {
    if (uVar1 == 41000) {
      FUN_5deb3eb0(1,param_1[0xc],0x401,0xf,0);
      return 0;
    }
    if (uVar1 == 0x56a) {
      if (sVar3 == 0x200) {
        iVar2 = FUN_5de69ac0(param_4,param_1 + 0x20,0,0,0,0x3ff00000);
        if (iVar2 != 0) {
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
    }
    else if (uVar1 == 0x7f00) {
      FUN_5de69420();
      *param_5 = 1;
      return 0;
    }
  }
  else if (uVar1 == 0xa029) {
    FUN_5de06da0(param_1[0xc]);
  }
  return 0;
}


