/* Module: vidpcore.dll
   Function: FUN_5de88c70
   Address: 5de88c70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de88c70(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  undefined4 *puVar1;
  int iVar2;
  UINT UVar3;
  LRESULT LVar4;
  int *unaff_EBX;
  uint nIDButton;
  float10 fVar5;
  int *local_10c;
  int *local_108;
  CHAR local_104 [260];
  
  nIDButton = param_3 & 0xffff;
  param_3 = param_3 >> 0x10;
  if ((nIDButton < 0x9e34) || (40999 < nIDButton)) {
    if (0x529 < nIDButton) {
      if (41000 < nIDButton) {
        if (nIDButton != 0xa029) {
          return 0;
        }
        FUN_5de06da0(param_1[0xc]);
        return 0;
      }
      if (nIDButton == 41000) {
        FUN_5deb3eb0(1,param_1[0xc],0x3eb,0xf,0);
        return 0;
      }
      if (nIDButton != 0x52a) {
        if (nIDButton != 0x7f00) {
          return 0;
        }
        FUN_5de887d0();
        return 0;
      }
      if (param_1[0x18] == 0) {
        if (param_3 != 0x200) {
          return 0;
        }
        iVar2 = GetWindowTextA(param_4,local_104,0x104);
        if (iVar2 != 0) {
          fVar5 = (float10)FUN_5dec5e20(local_104,0);
          if ((float10)_DAT_5df18838 <= fVar5) {
            fVar5 = (float10)FUN_5dec5e20(local_104,0);
            if (fVar5 <= (float10)_DAT_5df18830) {
              fVar5 = (float10)FUN_5dec5e20(local_104,0);
            }
            else {
              fVar5 = (float10)_DAT_5df18830;
            }
          }
          else {
            fVar5 = (float10)_DAT_5df18838;
          }
          if ((float10)_DAT_5df1f300 <= ABS(fVar5 - (float10)(float)param_1[0x20])) {
            param_1[0x20] = (int)(float)fVar5;
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
        }
      }
      else {
        if (param_3 != 0x200) {
          return 0;
        }
        iVar2 = GetWindowTextA(param_4,local_104,0x104);
        if (iVar2 != 0) {
          fVar5 = (float10)FUN_5dec5e20(local_104,0);
          if ((float10)_DAT_5df18838 <= fVar5) {
            fVar5 = (float10)FUN_5dec5e20(local_104,0);
            if (fVar5 <= (float10)_DAT_5df18830) {
              fVar5 = (float10)FUN_5dec5e20(local_104,0);
            }
            else {
              fVar5 = (float10)_DAT_5df18830;
            }
          }
          else {
            fVar5 = (float10)_DAT_5df18838;
          }
          if ((float10)_DAT_5df1f300 <= ABS(fVar5 - (float10)(float)param_1[0x1c])) {
            param_1[0x1c] = (int)(float)fVar5;
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
        }
      }
      goto LAB_5de89213;
    }
    if (nIDButton == 0x529) {
      if (param_1[0x18] == 0) {
        if (param_3 != 0x200) {
          return 0;
        }
        iVar2 = GetWindowTextA(param_4,local_104,0x104);
        if (iVar2 != 0) {
          fVar5 = (float10)FUN_5dec5e20(local_104,0);
          if ((float10)_DAT_5df18838 <= fVar5) {
            fVar5 = (float10)FUN_5dec5e20(local_104,0);
            if (fVar5 <= (float10)_DAT_5df18830) {
              fVar5 = (float10)FUN_5dec5e20(local_104,0);
            }
            else {
              fVar5 = (float10)_DAT_5df18830;
            }
          }
          else {
            fVar5 = (float10)_DAT_5df18838;
          }
          if ((float10)_DAT_5df1f300 <= ABS(fVar5 - (float10)(float)param_1[0x1e])) {
            param_1[0x1e] = (int)(float)fVar5;
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
        }
      }
      else {
        if (param_3 != 0x200) {
          return 0;
        }
        iVar2 = GetWindowTextA(param_4,local_104,0x104);
        if (iVar2 != 0) {
          fVar5 = (float10)FUN_5dec5e20(local_104,0);
          if ((float10)_DAT_5df18838 <= fVar5) {
            fVar5 = (float10)FUN_5dec5e20(local_104,0);
            if (fVar5 <= (float10)_DAT_5df18830) {
              fVar5 = (float10)FUN_5dec5e20(local_104,0);
            }
            else {
              fVar5 = (float10)_DAT_5df18830;
            }
          }
          else {
            fVar5 = (float10)_DAT_5df18838;
          }
          if ((float10)_DAT_5df1f300 <= ABS(fVar5 - (float10)(float)param_1[0x1a])) {
            param_1[0x1a] = (int)(float)fVar5;
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
        }
      }
      goto LAB_5de89213;
    }
  }
  else {
    puVar1 = *(undefined4 **)param_1[2];
    local_10c = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_5df17c10,&local_10c);
    }
    iVar2 = (**(code **)*local_10c)(local_10c,&DAT_5df180c0,&local_108);
    if (-1 < iVar2) {
      (**(code **)(*local_108 + 0x14))(local_108,nIDButton - 0x9e34);
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    if (local_10c != (int *)0x0) {
      (**(code **)(*local_10c + 8))(local_10c);
    }
    nIDButton = 0;
  }
  switch(nIDButton) {
  case 0x489:
    UVar3 = IsDlgButtonChecked((HWND)param_1[0xc],nIDButton);
    param_1[0x17] = UVar3;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  case 0x48e:
    if (param_3 == 1) {
      LVar4 = SendMessageA(param_4,0x147,0,0);
      param_1[0x18] = LVar4;
      (**(code **)(*param_1 + 0x2c))(param_1);
      FUN_5de887d0();
      return 0;
    }
    break;
  case 0x48f:
    SendMessageA(param_4,0x702,0,(LPARAM)(param_1 + 0x13));
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  case 0x528:
    if (param_1[0x18] == 0) {
      if (param_3 == 0x200) {
        iVar2 = GetWindowTextA(param_4,local_104,0x104);
        if (iVar2 != 0) {
          fVar5 = (float10)FUN_5dec5e20(local_104,0);
          if ((float10)_DAT_5df18838 <= fVar5) {
            fVar5 = (float10)FUN_5dec5e20(local_104,0);
            if (fVar5 <= (float10)_DAT_5df18830) {
              fVar5 = (float10)FUN_5dec5e20(local_104,0);
            }
            else {
              fVar5 = (float10)_DAT_5df18830;
            }
          }
          else {
            fVar5 = (float10)_DAT_5df18838;
          }
          if ((float10)_DAT_5df1f300 <= ABS(fVar5 - (float10)(float)param_1[0x1d])) {
            param_1[0x1d] = (int)(float)fVar5;
            (**(code **)(*param_1 + 0x2c))(param_1);
            return 0;
          }
        }
        goto LAB_5de89213;
      }
    }
    else if (param_3 == 0x200) {
      iVar2 = GetWindowTextA(param_4,local_104,0x104);
      if (iVar2 != 0) {
        fVar5 = (float10)FUN_5dec5e20(local_104,0);
        if ((float10)_DAT_5df18838 <= fVar5) {
          fVar5 = (float10)FUN_5dec5e20(local_104,0);
          if (fVar5 <= (float10)_DAT_5df18830) {
            fVar5 = (float10)FUN_5dec5e20(local_104,0);
          }
          else {
            fVar5 = (float10)_DAT_5df18830;
          }
        }
        else {
          fVar5 = (float10)_DAT_5df18838;
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar5 - (float10)(float)param_1[0x19])) {
          param_1[0x19] = (int)(float)fVar5;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
LAB_5de89213:
      FUN_5de887d0();
      return 0;
    }
  }
  return 0;
}


