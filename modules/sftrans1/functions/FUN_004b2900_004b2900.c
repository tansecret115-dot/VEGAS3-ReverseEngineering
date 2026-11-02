/* Module: sftrans1.dll
   Function: FUN_004b2900
   Address: 004b2900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_004b2900(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 *param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  HWND hWnd;
  short sVar4;
  UINT Msg;
  WPARAM wParam;
  float *lParam;
  float local_18;
  float fStack_14;
  float fStack_10;
  
  uVar1 = param_3 & 0xffff;
  sVar4 = (short)(param_3 >> 0x10);
  if (uVar1 < 0x6fc) {
    if (uVar1 == 0x6fb) {
      if (sVar4 == 0) {
        if (param_1[0x22] == 0) {
          param_1[0x22] = 1;
          (**(code **)(*param_1 + 0x2c))(param_1);
        }
        else if (param_1[0x22] == 1) {
          param_1[0x22] = 0;
          (**(code **)(*param_1 + 0x2c))(param_1);
        }
        else {
          FUN_004b1f00();
        }
      }
LAB_004b2aa6:
      lParam = &local_18;
      wParam = 0;
      Msg = 0x702;
      hWnd = GetDlgItem((HWND)param_1[0xc],0x70d);
      SendMessageA(hWnd,Msg,wParam,(LPARAM)lParam);
      *(double *)(param_1 + 0x2e) = (double)local_18;
      *(double *)(param_1 + 0x2c) = (double)fStack_14;
      *(double *)(param_1 + 0x2a) = (double)fStack_10;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
    if (uVar1 < 0x6f2) {
      if (uVar1 != 0x6f1) {
        if (uVar1 == 1000) {
          FUN_004b1f00();
          *param_5 = 1;
          return 0;
        }
        if (uVar1 == 0x6eb) {
          if (sVar4 != 0x200) {
            return 0;
          }
          piVar2 = param_1 + 0x1a;
        }
        else {
          if ((uVar1 != 0x6ed) || (sVar4 != 0x200)) {
            return 0;
          }
          piVar2 = param_1 + 0x1c;
        }
        goto LAB_004b298d;
      }
      if (sVar4 != 0x200) {
        return 0;
      }
      piVar2 = param_1 + 0x1e;
    }
    else if (uVar1 == 0x6f4) {
      if (sVar4 != 0x200) {
        return 0;
      }
      piVar2 = param_1 + 0x20;
    }
    else if (uVar1 == 0x6f8) {
      if (sVar4 != 0x200) {
        return 0;
      }
      piVar2 = param_1 + 0x24;
    }
    else {
      if (uVar1 != 0x6fa) {
        return 0;
      }
      if (sVar4 != 0x200) {
        return 0;
      }
      piVar2 = param_1 + 0x28;
    }
    iVar3 = FUN_004b1d40(param_4,piVar2,0,0,0,0x3ff00000,3);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
  }
  else {
    if (0x70d < uVar1) {
      if (uVar1 == 41000) {
        FUN_004c5940(1,param_1[0xc],0x401,0xf,0);
        return 0;
      }
      if (uVar1 != 0xa029) {
        return 0;
      }
      FUN_00406390(param_1[0xc]);
      return 0;
    }
    if (uVar1 == 0x70d) goto LAB_004b2aa6;
    if (uVar1 == 0x702) {
      if (sVar4 != 0x200) {
        return 0;
      }
      piVar2 = param_1 + 0x26;
    }
    else {
      if (uVar1 != 0x709) {
        if (uVar1 != 0x70c) {
          return 0;
        }
        if (sVar4 != 0x200) {
          return 0;
        }
        iVar3 = FUN_004b1d40(param_4,param_1 + 0x32,0,0,0,0x3ff00000,3);
        if (iVar3 != 0) {
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
        goto LAB_004b2b75;
      }
      if (sVar4 != 0x200) {
        return 0;
      }
      piVar2 = param_1 + 0x30;
    }
LAB_004b298d:
    iVar3 = FUN_004b1d40(param_4,piVar2,0,0,0,0x3ff00000,3);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
  }
LAB_004b2b75:
  FUN_004b1f00();
  return 0;
}


