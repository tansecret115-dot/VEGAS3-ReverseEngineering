/* Module: vidpcore.dll
   Function: FUN_5de71560
   Address: 5de71560
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de71560(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  HWND pHVar4;
  LRESULT LVar5;
  int *unaff_EBX;
  float10 fVar6;
  int *local_120;
  int *local_11c;
  HWND local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  CHAR aCStack_104 [260];
  
  uVar2 = param_3 >> 0x10;
  param_3 = param_3 & 0xffff;
  GetDlgItem((HWND)param_1[0xc],0x40f);
  local_118 = GetDlgItem((HWND)param_1[0xc],0x417);
  if ((param_3 < 0x9e34) || (40999 < param_3)) {
    if (param_3 < 0x567) {
      if (param_3 == 0x566) {
        if (uVar2 != 1) {
          return 0;
        }
        pHVar4 = GetDlgItem((HWND)param_1[0xc],0x566);
        LVar5 = SendMessageA(pHVar4,0x147,0,0);
        param_1[0x20] = (uint)(LVar5 == 0);
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
      goto LAB_5de71624;
    }
    if (param_3 != 0x7f00) {
      if (param_3 == 41000) {
        FUN_5deb3eb0(1,param_1[0xc],0x3fc,0xf,0);
        return 0;
      }
      if (param_3 != 0xa029) {
        return 0;
      }
      FUN_5de06da0(param_1[0xc]);
      return 0;
    }
  }
  else {
    puVar1 = *(undefined4 **)param_1[2];
    local_120 = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_5df17b20,&local_120);
    }
    iVar3 = (**(code **)*local_120)(local_120,&DAT_5df180c0,&local_11c);
    if (-1 < iVar3) {
      (**(code **)(*local_11c + 0x14))(local_11c,param_3 - 0x9e34);
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    if (local_120 != (int *)0x0) {
      (**(code **)(*local_120 + 8))(local_120);
    }
    param_3 = 0;
LAB_5de71624:
    switch(param_3) {
    case 0x409:
      if (uVar2 != 0x200) {
        return 0;
      }
      iVar3 = GetWindowTextA(param_4,aCStack_104,0x104);
      if (iVar3 != 0) {
        fVar6 = (float10)FUN_5dec5e20(aCStack_104,0);
        if ((float10)_DAT_5df18838 <= fVar6) {
          fVar6 = (float10)FUN_5dec5e20(aCStack_104,0);
          if (fVar6 <= (float10)_DAT_5df18830) {
            fVar6 = (float10)FUN_5dec5e20(aCStack_104,0);
          }
          else {
            fVar6 = (float10)_DAT_5df18830;
          }
        }
        else {
          fVar6 = (float10)_DAT_5df18838;
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar6 - (float10)(float)param_1[0x16])) {
          param_1[0x16] = (int)(float)fVar6;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      break;
    case 0x40a:
      if (uVar2 != 0x200) {
        return 0;
      }
      iVar3 = GetWindowTextA(param_4,aCStack_104,0x104);
      if (iVar3 != 0) {
        fVar6 = (float10)FUN_5dec5e20(aCStack_104,0);
        if ((float10)_DAT_5df18838 <= fVar6) {
          fVar6 = (float10)FUN_5dec5e20(aCStack_104,0);
          if (fVar6 <= (float10)_DAT_5df18830) {
            fVar6 = (float10)FUN_5dec5e20(aCStack_104,0);
          }
          else {
            fVar6 = (float10)_DAT_5df18830;
          }
        }
        else {
          fVar6 = (float10)_DAT_5df18838;
        }
        if ((float10)_DAT_5df224b8 <= ABS(fVar6 - (float10)(float)param_1[0x13])) {
          param_1[0x13] = (int)(float)fVar6;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      break;
    case 0x40b:
      if (uVar2 != 0x200) {
        return 0;
      }
      iVar3 = GetWindowTextA(param_4,aCStack_104,0x104);
      if (iVar3 != 0) {
        fVar6 = (float10)FUN_5dec5e20(aCStack_104,0);
        if ((float10)_DAT_5df18838 <= fVar6) {
          fVar6 = (float10)FUN_5dec5e20(aCStack_104,0);
          if (fVar6 <= (float10)_DAT_5df18830) {
            fVar6 = (float10)FUN_5dec5e20(aCStack_104,0);
          }
          else {
            fVar6 = (float10)_DAT_5df18830;
          }
        }
        else {
          fVar6 = (float10)_DAT_5df18838;
        }
        if ((float10)_DAT_5df224b8 <= ABS(fVar6 - (float10)(float)param_1[0x14])) {
          param_1[0x14] = (int)(float)fVar6;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      break;
    case 0x40c:
      if (uVar2 != 0x200) {
        return 0;
      }
      iVar3 = GetWindowTextA(param_4,aCStack_104,0x104);
      if (iVar3 != 0) {
        fVar6 = (float10)FUN_5dec5e20(aCStack_104,0);
        if ((float10)_DAT_5df18838 <= fVar6) {
          fVar6 = (float10)FUN_5dec5e20(aCStack_104,0);
          if (fVar6 <= (float10)_DAT_5df224b0) {
            fVar6 = (float10)FUN_5dec5e20(aCStack_104,0);
          }
          else {
            fVar6 = (float10)_DAT_5df224b0;
          }
        }
        else {
          fVar6 = (float10)_DAT_5df18838;
        }
        if ((float10)_DAT_5df18830 <= ABS(fVar6 - (float10)param_1[0x1c])) {
          iVar3 = ftol();
          param_1[0x1c] = iVar3;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      break;
    case 0x40d:
      if (uVar2 != 0x200) {
        return 0;
      }
      iVar3 = GetWindowTextA(param_4,aCStack_104,0x104);
      if (iVar3 != 0) {
        fVar6 = (float10)FUN_5dec5e20(aCStack_104,0);
        if ((float10)_DAT_5df18838 <= fVar6) {
          fVar6 = (float10)FUN_5dec5e20(aCStack_104,0);
          if (fVar6 <= (float10)_DAT_5df224b0) {
            fVar6 = (float10)FUN_5dec5e20(aCStack_104,0);
          }
          else {
            fVar6 = (float10)_DAT_5df224b0;
          }
        }
        else {
          fVar6 = (float10)_DAT_5df18838;
        }
        if ((float10)_DAT_5df18830 <= ABS(fVar6 - (float10)param_1[0x1d])) {
          iVar3 = ftol();
          param_1[0x1d] = iVar3;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      break;
    case 0x40e:
      if (uVar2 != 0x200) {
        return 0;
      }
      iVar3 = GetWindowTextA(param_4,aCStack_104,0x104);
      if (iVar3 != 0) {
        fVar6 = (float10)FUN_5dec5e20(aCStack_104,0);
        if ((float10)_DAT_5df18838 <= fVar6) {
          fVar6 = (float10)FUN_5dec5e20(aCStack_104,0);
          if (fVar6 <= (float10)_DAT_5df18830) {
            fVar6 = (float10)FUN_5dec5e20(aCStack_104,0);
          }
          else {
            fVar6 = (float10)_DAT_5df18830;
          }
        }
        else {
          fVar6 = (float10)_DAT_5df18838;
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar6 - (float10)(float)param_1[0x15])) {
          param_1[0x15] = (int)(float)fVar6;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      break;
    default:
      goto switchD_5de7163b_caseD_40f;
    case 0x416:
      if (uVar2 != 1) {
        return 0;
      }
      pHVar4 = GetDlgItem((HWND)param_1[0xc],param_3);
      LVar5 = SendMessageA(pHVar4,0x147,0,0);
      param_1[0x1e] = LVar5;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    case 0x417:
      SendMessageA(local_118,0x702,0,(LPARAM)&iStack_114);
      param_1[0x18] = iStack_114;
      param_1[0x19] = iStack_110;
      param_1[0x1a] = iStack_10c;
      param_1[0x1b] = iStack_108;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
  }
  FUN_5de71ba0();
switchD_5de7163b_caseD_40f:
  return 0;
}


