/* Module: vidpcore.dll
   Function: FUN_5de72c40
   Address: 5de72c40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5de72c40(int *param_1,undefined4 param_2,uint param_3,HWND param_4)

{
  undefined4 *puVar1;
  int iVar2;
  HWND hWnd;
  WPARAM wParam;
  LRESULT LVar3;
  int *unaff_EBX;
  uint uVar4;
  float10 fVar5;
  double local_118;
  int *local_110;
  CHAR aCStack_10c [264];
  
  uVar4 = param_3 & 0xffff;
  param_3 = param_3 >> 0x10;
  if ((uVar4 < 0x9e34) || (40999 < uVar4)) {
    if (0x7f00 < uVar4) {
      if (uVar4 == 41000) {
        FUN_5deb3eb0(1,param_1[0xc],0x3ee,0xf,0);
        return 0;
      }
      if (uVar4 != 0xa029) {
        return 0;
      }
      FUN_5de06da0(param_1[0xc]);
      return 0;
    }
    if (uVar4 == 0x7f00) goto LAB_5de7310f;
  }
  else {
    puVar1 = *(undefined4 **)param_1[2];
    local_110 = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_5df17b30,&local_110);
    }
    iVar2 = (**(code **)*local_110)(local_110,&DAT_5df180c0,&local_118);
    if (-1 < iVar2) {
      (**(code **)(*local_118._0_4_ + 0x14))(local_118._0_4_,uVar4 - 0x9e34);
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    if (local_110 != (int *)0x0) {
      (**(code **)(*local_110 + 8))(local_110);
    }
    uVar4 = 0;
  }
  switch(uVar4) {
  case 0x427:
    if (param_3 == 1) {
      hWnd = GetDlgItem((HWND)param_1[0xc],0x427);
      wParam = SendMessageA(hWnd,0x147,0,0);
      LVar3 = SendMessageA(hWnd,0x150,wParam,0);
      param_1[0x1e] = LVar3;
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
    break;
  case 0x428:
    if (param_3 == 0x200) {
      iVar2 = GetWindowTextA(param_4,aCStack_10c,0x104);
      if (iVar2 != 0) {
        fVar5 = (float10)FUN_5dec5e20(aCStack_10c,0);
        if ((float10)_DAT_5df18838 <= fVar5) {
          if (_DAT_5df18830 <= *(double *)(param_1 + 0x16)) {
            local_118 = 1.0;
          }
          else {
            local_118 = *(double *)(param_1 + 0x16);
          }
          fVar5 = (float10)FUN_5dec5e20(aCStack_10c,0);
          if (fVar5 <= (float10)local_118) {
            fVar5 = (float10)FUN_5dec5e20(aCStack_10c,0);
          }
          else if (_DAT_5df18830 <= *(double *)(param_1 + 0x16)) {
            fVar5 = (float10)_DAT_5df18830;
          }
          else {
            fVar5 = (float10)*(double *)(param_1 + 0x16);
          }
        }
        else {
          fVar5 = (float10)_DAT_5df18838;
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar5 - (float10)*(double *)(param_1 + 0x14))) {
          *(double *)(param_1 + 0x14) = (double)fVar5;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
LAB_5de7310f:
      FUN_5de731c0();
      return 0;
    }
    break;
  case 0x429:
    if (param_3 == 0x200) {
      iVar2 = GetWindowTextA(param_4,aCStack_10c,0x104);
      if (iVar2 != 0) {
        if (*(double *)(param_1 + 0x14) <= _DAT_5df18838) {
          local_118 = 0.0;
        }
        else {
          local_118 = *(double *)(param_1 + 0x14);
        }
        fVar5 = (float10)FUN_5dec5e20(aCStack_10c,0);
        if ((float10)local_118 <= fVar5) {
          fVar5 = (float10)FUN_5dec5e20(aCStack_10c,0);
          if (fVar5 <= (float10)_DAT_5df18830) {
            fVar5 = (float10)FUN_5dec5e20(aCStack_10c,0);
          }
          else {
            fVar5 = (float10)_DAT_5df18830;
          }
        }
        else if (*(double *)(param_1 + 0x14) <= _DAT_5df18838) {
          fVar5 = (float10)_DAT_5df18838;
        }
        else {
          fVar5 = (float10)*(double *)(param_1 + 0x14);
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar5 - (float10)*(double *)(param_1 + 0x16))) {
          *(double *)(param_1 + 0x16) = (double)fVar5;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      goto LAB_5de7310f;
    }
    break;
  case 0x42a:
    if (param_3 == 0x200) {
      iVar2 = GetWindowTextA(param_4,aCStack_10c,0x104);
      if (iVar2 != 0) {
        fVar5 = (float10)FUN_5dec5e20(aCStack_10c,0);
        if ((float10)_DAT_5df18838 <= fVar5) {
          if (_DAT_5df18830 <= *(double *)(param_1 + 0x1a)) {
            local_118 = 1.0;
          }
          else {
            local_118 = *(double *)(param_1 + 0x1a);
          }
          fVar5 = (float10)FUN_5dec5e20(aCStack_10c,0);
          if (fVar5 <= (float10)local_118) {
            fVar5 = (float10)FUN_5dec5e20(aCStack_10c,0);
          }
          else if (_DAT_5df18830 <= *(double *)(param_1 + 0x1a)) {
            fVar5 = (float10)_DAT_5df18830;
          }
          else {
            fVar5 = (float10)*(double *)(param_1 + 0x1a);
          }
        }
        else {
          fVar5 = (float10)_DAT_5df18838;
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar5 - (float10)*(double *)(param_1 + 0x18))) {
          *(double *)(param_1 + 0x18) = (double)fVar5;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      goto LAB_5de7310f;
    }
    break;
  case 0x42b:
    if (param_3 == 0x200) {
      iVar2 = GetWindowTextA(param_4,aCStack_10c,0x104);
      if (iVar2 != 0) {
        if (*(double *)(param_1 + 0x18) <= _DAT_5df18838) {
          local_118 = 0.0;
        }
        else {
          local_118 = *(double *)(param_1 + 0x18);
        }
        fVar5 = (float10)FUN_5dec5e20(aCStack_10c,0);
        if ((float10)local_118 <= fVar5) {
          fVar5 = (float10)FUN_5dec5e20(aCStack_10c,0);
          if (fVar5 <= (float10)_DAT_5df18830) {
            fVar5 = (float10)FUN_5dec5e20(aCStack_10c,0);
          }
          else {
            fVar5 = (float10)_DAT_5df18830;
          }
        }
        else if (*(double *)(param_1 + 0x18) <= _DAT_5df18838) {
          fVar5 = (float10)_DAT_5df18838;
        }
        else {
          fVar5 = (float10)*(double *)(param_1 + 0x18);
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar5 - (float10)*(double *)(param_1 + 0x1a))) {
          *(double *)(param_1 + 0x1a) = (double)fVar5;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      goto LAB_5de7310f;
    }
    break;
  case 0x42c:
    if (param_3 == 0x200) {
      iVar2 = GetWindowTextA(param_4,aCStack_10c,0x104);
      if (iVar2 != 0) {
        fVar5 = (float10)FUN_5dec5e20(aCStack_10c,0);
        if ((float10)_DAT_5df22b68 <= fVar5) {
          fVar5 = (float10)FUN_5dec5e20(aCStack_10c,0);
          if (fVar5 <= (float10)_DAT_5df22b78) {
            fVar5 = (float10)FUN_5dec5e20(aCStack_10c,0);
          }
          else {
            fVar5 = (float10)_DAT_5df22b78;
          }
        }
        else {
          fVar5 = (float10)_DAT_5df22b68;
        }
        if ((float10)_DAT_5df1f300 <= ABS(fVar5 - (float10)*(double *)(param_1 + 0x1c))) {
          *(double *)(param_1 + 0x1c) = (double)fVar5;
          (**(code **)(*param_1 + 0x2c))(param_1);
          return 0;
        }
      }
      goto LAB_5de7310f;
    }
  }
  return 0;
}


