/* Module: sftrans1.dll
   Function: FUN_0045f120
   Address: 0045f120
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0045f120(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  undefined4 *puVar1;
  int iVar2;
  HWND hWnd;
  WPARAM wParam;
  int *unaff_EBX;
  uint uVar3;
  float10 fVar4;
  int *local_10c;
  int *local_108;
  CHAR local_104 [260];
  
  uVar3 = param_3 & 0xffff;
  param_3 = param_3 >> 0x10;
  if ((uVar3 < 0x9e34) || (40999 < uVar3)) {
    if (0x577 < uVar3) {
      if (0x5a7 < uVar3) {
        if (uVar3 == 41000) {
          FUN_004c5940(1,param_1[0xc],0x3f1,0xf,0);
          return 0;
        }
        if (uVar3 != 0xa029) {
          return 0;
        }
        FUN_00406390(param_1[0xc]);
        return 0;
      }
      if (uVar3 == 0x5a7) {
        if (param_3 != 0x200) {
          return 0;
        }
        iVar2 = GetWindowTextA(param_4,local_104,0x104);
        if (iVar2 != 0) {
          fVar4 = (float10)FUN_004d6ed0(local_104,0);
          if ((float10)_DAT_00555910 <= fVar4) {
            fVar4 = (float10)FUN_004d6ed0(local_104,0);
            if (fVar4 <= (float10)_DAT_00555908) {
              fVar4 = (float10)FUN_004d6ed0(local_104,0);
            }
            else {
              fVar4 = (float10)_DAT_00555908;
            }
          }
          else {
            fVar4 = (float10)_DAT_00555910;
          }
          if ((float10)_DAT_0055c078 <= ABS(fVar4 - (float10)(float)param_1[0x16])) {
            param_1[0x16] = (int)(float)fVar4;
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
        }
      }
      else {
        if (uVar3 == 0x578) {
          param_1[0x1b] = 1;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
        if (uVar3 == 0x5a5) {
          if (param_3 != 1) {
            return 0;
          }
          hWnd = GetDlgItem((HWND)param_1[0xc],0x5a5);
          wParam = SendMessageA(hWnd,0x147,0,0);
          if ((int)wParam < 0) {
            return 0;
          }
          uVar3 = SendMessageA(hWnd,0x150,wParam,0);
          param_1[0x1c] = uVar3 & 0xffff;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
        if (uVar3 != 0x5a6) {
          return 0;
        }
        if (param_3 != 0x200) {
          return 0;
        }
        iVar2 = GetWindowTextA(param_4,local_104,0x104);
        if (iVar2 != 0) {
          fVar4 = (float10)FUN_004d6ed0(local_104,0);
          if ((float10)_DAT_00555910 <= fVar4) {
            fVar4 = (float10)FUN_004d6ed0(local_104,0);
            if (fVar4 <= (float10)_DAT_00555908) {
              fVar4 = (float10)FUN_004d6ed0(local_104,0);
            }
            else {
              fVar4 = (float10)_DAT_00555908;
            }
          }
          else {
            fVar4 = (float10)_DAT_00555910;
          }
          if ((float10)_DAT_0055c078 <= ABS(fVar4 - (float10)(float)param_1[0x15])) {
            param_1[0x15] = (int)(float)fVar4;
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
        }
      }
      goto LAB_0045f5c2;
    }
    if (uVar3 == 0x577) {
      param_1[0x1b] = 0;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
    if (0x56b < uVar3) {
      if (uVar3 == 0x572) {
        SendMessageA(param_4,0x702,0,(LPARAM)(param_1 + 0x17));
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
      if (uVar3 != 0x575) {
        return 0;
      }
      if (param_3 != 0x200) {
        return 0;
      }
      iVar2 = GetWindowTextA(param_4,local_104,0x104);
      if (iVar2 != 0) {
        fVar4 = (float10)FUN_004d6ed0(local_104,0);
        if ((float10)_DAT_00555910 <= fVar4) {
          fVar4 = (float10)FUN_004d6ed0(local_104,0);
          if (fVar4 <= (float10)_DAT_0055e5e0) {
            fVar4 = (float10)FUN_004d6ed0(local_104,0);
          }
          else {
            fVar4 = (float10)_DAT_0055e5e0;
          }
        }
        else {
          fVar4 = (float10)_DAT_00555910;
        }
        if ((float10)_DAT_0055e6d0 <= ABS(fVar4 - (float10)(float)param_1[0x1d])) {
          param_1[0x1d] = (int)(float)fVar4;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      goto LAB_0045f5c2;
    }
    if (uVar3 == 0x56b) {
      param_1[0x14] = 0;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
  }
  else {
    puVar1 = *(undefined4 **)param_1[2];
    local_10c = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_00554c80,&local_10c);
    }
    iVar2 = (**(code **)*local_10c)(local_10c,&DAT_00554ba0,&local_108);
    if (-1 < iVar2) {
      (**(code **)(*local_108 + 0x14))(local_108,uVar3 - 0x9e34);
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    if (local_10c != (int *)0x0) {
      (**(code **)(*local_10c + 8))(local_10c);
    }
    uVar3 = 0;
  }
  if (uVar3 == 1000) {
LAB_0045f5c2:
    FUN_0045f620();
    return 0;
  }
  if (uVar3 == 0x569) {
    if (param_3 == 0x200) {
      iVar2 = GetWindowTextA(param_4,local_104,0x104);
      if (iVar2 != 0) {
        fVar4 = (float10)FUN_004d6ed0(local_104,0);
        if ((float10)_DAT_00555910 <= fVar4) {
          fVar4 = (float10)FUN_004d6ed0(local_104,0);
          if (fVar4 <= (float10)_DAT_00557d68) {
            fVar4 = (float10)FUN_004d6ed0(local_104,0);
          }
          else {
            fVar4 = (float10)_DAT_00557d68;
          }
        }
        else {
          fVar4 = (float10)_DAT_00555910;
        }
        if ((float10)_DAT_0055ca40 <= ABS(fVar4 - (float10)(float)param_1[0x13])) {
          param_1[0x13] = (int)(float)fVar4;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      goto LAB_0045f5c2;
    }
  }
  else if (uVar3 == 0x56a) {
    param_1[0x14] = 1;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  }
  return 0;
}


