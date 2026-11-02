/* Module: sftrans1.dll
   Function: FUN_00458120
   Address: 00458120
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00458120(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  undefined4 *puVar1;
  int iVar2;
  HWND hWnd;
  WPARAM wParam;
  LRESULT LVar3;
  int *unaff_EBX;
  uint uVar4;
  float10 fVar5;
  int *local_10c;
  int *local_108;
  CHAR local_104 [260];
  
  uVar4 = param_3 & 0xffff;
  param_3 = param_3 >> 0x10;
  if ((uVar4 < 0x9e34) || (40999 < uVar4)) {
    if (0x4bc < uVar4) {
      if (0x5a4 < uVar4) {
        if (uVar4 == 41000) {
          FUN_004c5940(1,param_1[0xc],0x3f2,0xf,0);
          return 0;
        }
        if (uVar4 != 0xa029) {
          return 0;
        }
        FUN_00406390(param_1[0xc]);
        return 0;
      }
      if (uVar4 == 0x5a4) {
        if (param_3 != 0x200) {
          return 0;
        }
        iVar2 = GetWindowTextA(param_4,local_104,0x104);
        if (iVar2 != 0) {
          fVar5 = (float10)FUN_004d6ed0(local_104,0);
          if ((float10)_DAT_00555910 <= fVar5) {
            fVar5 = (float10)FUN_004d6ed0(local_104,0);
            if (fVar5 <= (float10)_DAT_00555908) {
              fVar5 = (float10)FUN_004d6ed0(local_104,0);
            }
            else {
              fVar5 = (float10)_DAT_00555908;
            }
          }
          else {
            fVar5 = (float10)_DAT_00555910;
          }
          if ((float10)_DAT_0055c078 <= ABS(fVar5 - (float10)(float)param_1[0x15])) {
            param_1[0x15] = (int)(float)fVar5;
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
        }
      }
      else {
        if (uVar4 == 0x4e5) {
          if (param_3 != 1) {
            return 0;
          }
          hWnd = GetDlgItem((HWND)param_1[0xc],0x4e5);
          wParam = SendMessageA(hWnd,0x147,0,0);
          if ((int)wParam < 0) {
            return 0;
          }
          LVar3 = SendMessageA(hWnd,0x150,wParam,0);
          *(short *)((int)param_1 + 0x4e) = (short)LVar3;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
        if (uVar4 != 0x5a3) {
          return 0;
        }
        if (param_3 != 0x200) {
          return 0;
        }
        iVar2 = GetWindowTextA(param_4,local_104,0x104);
        if (iVar2 != 0) {
          fVar5 = (float10)FUN_004d6ed0(local_104,0);
          if ((float10)_DAT_00555910 <= fVar5) {
            fVar5 = (float10)FUN_004d6ed0(local_104,0);
            if (fVar5 <= (float10)_DAT_00555908) {
              fVar5 = (float10)FUN_004d6ed0(local_104,0);
            }
            else {
              fVar5 = (float10)_DAT_00555908;
            }
          }
          else {
            fVar5 = (float10)_DAT_00555910;
          }
          if ((float10)_DAT_0055c078 <= ABS(fVar5 - (float10)(float)param_1[0x14])) {
            param_1[0x14] = (int)(float)fVar5;
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
        }
      }
      goto switchD_004581d9_caseD_3e8;
    }
    if (uVar4 == 0x4bc) {
      if (param_3 != 0x200) {
        return 0;
      }
      iVar2 = GetWindowTextA(param_4,local_104,0x104);
      if (iVar2 != 0) {
        fVar5 = (float10)FUN_004d6ed0(local_104,0);
        if ((float10)_DAT_00555910 <= fVar5) {
          fVar5 = (float10)FUN_004d6ed0(local_104,0);
          if (fVar5 <= (float10)_DAT_00555908) {
            fVar5 = (float10)FUN_004d6ed0(local_104,0);
          }
          else {
            fVar5 = (float10)_DAT_00555908;
          }
        }
        else {
          fVar5 = (float10)_DAT_00555910;
        }
        if ((float10)_DAT_0055c078 <= ABS(fVar5 - (float10)(float)param_1[0x1b])) {
          param_1[0x1b] = (int)(float)fVar5;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      goto switchD_004581d9_caseD_3e8;
    }
  }
  else {
    puVar1 = *(undefined4 **)param_1[2];
    local_10c = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_00554c30,&local_10c);
    }
    iVar2 = (**(code **)*local_10c)(local_10c,&DAT_00554ba0,&local_108);
    if (-1 < iVar2) {
      (**(code **)(*local_108 + 0x14))(local_108,uVar4 - 0x9e34);
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    if (local_10c != (int *)0x0) {
      (**(code **)(*local_10c + 8))(local_10c);
    }
    uVar4 = 0;
  }
  switch(uVar4) {
  case 1000:
    break;
  default:
    return 0;
  case 0x455:
    *(undefined2 *)(param_1 + 0x13) = 0;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  case 0x456:
    *(undefined2 *)(param_1 + 0x13) = 1;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  case 0x45f:
    SendMessageA(param_4,0x702,0,(LPARAM)(param_1 + 0x16));
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  case 0x4bb:
    if (param_3 != 0x200) {
      return 0;
    }
    iVar2 = GetWindowTextA(param_4,local_104,0x104);
    if (iVar2 != 0) {
      fVar5 = (float10)FUN_004d6ed0(local_104,0);
      if ((float10)_DAT_00555910 <= fVar5) {
        fVar5 = (float10)FUN_004d6ed0(local_104,0);
        if (fVar5 <= (float10)_DAT_00555908) {
          fVar5 = (float10)FUN_004d6ed0(local_104,0);
        }
        else {
          fVar5 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar5 = (float10)_DAT_00555910;
      }
      if ((float10)_DAT_0055c078 <= ABS(fVar5 - (float10)(float)param_1[0x1a])) {
        param_1[0x1a] = (int)(float)fVar5;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
  }
switchD_004581d9_caseD_3e8:
  FUN_004588a0();
  return 0;
}


