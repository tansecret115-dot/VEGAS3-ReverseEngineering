/* Module: vidpcore.dll
   Function: FUN_5de74620
   Address: 5de74620
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de74620(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  undefined4 *puVar1;
  int iVar2;
  WPARAM wParam;
  LRESULT LVar3;
  UINT UVar4;
  int *unaff_EBX;
  uint uVar5;
  float10 fVar6;
  double local_118;
  int *local_110;
  CHAR local_10c [264];
  
  uVar5 = param_3 & 0xffff;
  param_3 = param_3 >> 0x10;
  if ((uVar5 < 0x9e34) || (40999 < uVar5)) {
    if (0x52e < uVar5) {
      if (41000 < uVar5) {
        if (uVar5 != 0xa029) {
          return 0;
        }
        FUN_5de06da0(param_1[0xc]);
        return 0;
      }
      if (uVar5 == 41000) {
        FUN_5deb3eb0(1,param_1[0xc],0x3f9,0xf,0);
        return 0;
      }
      if (uVar5 != 0x52f) {
        if (uVar5 != 0x7f00) {
          return 0;
        }
        FUN_5de74cb0();
        return 0;
      }
      if (param_3 != 0x200) {
        return 0;
      }
      iVar2 = GetWindowTextA(param_4,local_10c,0x104);
      if (iVar2 != 0) {
        if (_DAT_5df18838 <= *(double *)(param_1 + 0x1a)) {
          local_118 = *(double *)(param_1 + 0x1a);
        }
        else {
          local_118 = 0.0;
        }
        fVar6 = (float10)FUN_5dec5e20(local_10c,0);
        if ((float10)local_118 <= fVar6) {
          fVar6 = (float10)FUN_5dec5e20(local_10c,0);
          if (fVar6 <= (float10)_DAT_5df18830) {
            fVar6 = (float10)FUN_5dec5e20(local_10c,0);
          }
          else {
            fVar6 = (float10)_DAT_5df18830;
          }
        }
        else if (_DAT_5df18838 <= *(double *)(param_1 + 0x1a)) {
          fVar6 = (float10)*(double *)(param_1 + 0x1a);
        }
        else {
          fVar6 = (float10)_DAT_5df18838;
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar6 - (float10)*(double *)(param_1 + 0x1c))) {
          *(double *)(param_1 + 0x1c) = (double)fVar6;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      goto LAB_5de74af4;
    }
    if (uVar5 == 0x52e) {
      if (param_3 != 0x200) {
        return 0;
      }
      iVar2 = GetWindowTextA(param_4,local_10c,0x104);
      if (iVar2 != 0) {
        fVar6 = (float10)FUN_5dec5e20(local_10c,0);
        if ((float10)_DAT_5df18838 <= fVar6) {
          if (*(double *)(param_1 + 0x1c) <= _DAT_5df18830) {
            local_118 = *(double *)(param_1 + 0x1c);
          }
          else {
            local_118 = 1.0;
          }
          fVar6 = (float10)FUN_5dec5e20(local_10c,0);
          if (fVar6 <= (float10)local_118) {
            fVar6 = (float10)FUN_5dec5e20(local_10c,0);
          }
          else if (*(double *)(param_1 + 0x1c) <= _DAT_5df18830) {
            fVar6 = (float10)*(double *)(param_1 + 0x1c);
          }
          else {
            fVar6 = (float10)_DAT_5df18830;
          }
        }
        else {
          fVar6 = (float10)_DAT_5df18838;
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar6 - (float10)*(double *)(param_1 + 0x1a))) {
          *(double *)(param_1 + 0x1a) = (double)fVar6;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      goto LAB_5de74af4;
    }
  }
  else {
    puVar1 = *(undefined4 **)param_1[2];
    local_110 = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_5df17b40,&local_110);
    }
    iVar2 = (**(code **)*local_110)(local_110,&DAT_5df180c0,&local_118);
    if (-1 < iVar2) {
      (**(code **)(*local_118._0_4_ + 0x14))(local_118._0_4_,uVar5 - 0x9e34);
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    if (local_110 != (int *)0x0) {
      (**(code **)(*local_110 + 8))(local_110);
    }
    uVar5 = 0;
  }
  switch(uVar5) {
  case 0x430:
    UVar4 = IsDlgButtonChecked((HWND)param_1[0xc],0x430);
    param_1[0x1e] = UVar4;
    (**(code **)(*param_1 + 0x2c))(param_1);
    return 0;
  case 0x431:
    if (param_3 == 1) {
      wParam = SendMessageA(param_4,0x147,0,0);
      LVar3 = SendMessageA(param_4,0x150,wParam,0);
      param_1[0x14] = LVar3;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
    break;
  case 0x52c:
    if (param_3 == 0x200) {
      iVar2 = GetWindowTextA(param_4,local_10c,0x104);
      if (iVar2 != 0) {
        fVar6 = (float10)FUN_5dec5e20(local_10c,0);
        if ((float10)_DAT_5df18838 <= fVar6) {
          if (*(double *)(param_1 + 0x18) <= _DAT_5df18830) {
            local_118 = *(double *)(param_1 + 0x18);
          }
          else {
            local_118 = 1.0;
          }
          fVar6 = (float10)FUN_5dec5e20(local_10c,0);
          if (fVar6 <= (float10)local_118) {
            fVar6 = (float10)FUN_5dec5e20(local_10c,0);
          }
          else if (*(double *)(param_1 + 0x18) <= _DAT_5df18830) {
            fVar6 = (float10)*(double *)(param_1 + 0x18);
          }
          else {
            fVar6 = (float10)_DAT_5df18830;
          }
        }
        else {
          fVar6 = (float10)_DAT_5df18838;
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar6 - (float10)*(double *)(param_1 + 0x16))) {
          *(double *)(param_1 + 0x16) = (double)fVar6;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
LAB_5de74af4:
      FUN_5de74cb0();
      return 0;
    }
    break;
  case 0x52d:
    if (param_3 == 0x200) {
      iVar2 = GetWindowTextA(param_4,local_10c,0x104);
      if (iVar2 != 0) {
        if (_DAT_5df18838 <= *(double *)(param_1 + 0x16)) {
          local_118 = *(double *)(param_1 + 0x16);
        }
        else {
          local_118 = 0.0;
        }
        fVar6 = (float10)FUN_5dec5e20(local_10c,0);
        if ((float10)local_118 <= fVar6) {
          fVar6 = (float10)FUN_5dec5e20(local_10c,0);
          if (fVar6 <= (float10)_DAT_5df18830) {
            fVar6 = (float10)FUN_5dec5e20(local_10c,0);
          }
          else {
            fVar6 = (float10)_DAT_5df18830;
          }
        }
        else if (_DAT_5df18838 <= *(double *)(param_1 + 0x16)) {
          fVar6 = (float10)*(double *)(param_1 + 0x16);
        }
        else {
          fVar6 = (float10)_DAT_5df18838;
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar6 - (float10)*(double *)(param_1 + 0x18))) {
          *(double *)(param_1 + 0x18) = (double)fVar6;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      goto LAB_5de74af4;
    }
  }
  return 0;
}


