/* Module: sftrans1.dll
   Function: FUN_00465fb0
   Address: 00465fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00465fb0(int *param_1,undefined4 param_2,uint param_3,HWND param_4,undefined4 *param_5)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  HWND pHVar4;
  HWND pHVar5;
  int iVar6;
  LRESULT LVar7;
  WPARAM WVar8;
  double *pdVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  code *pcVar14;
  int *unaff_ESI;
  float10 fVar15;
  HWND local_3f4;
  double local_3f0;
  uint local_3e4;
  double local_3e0;
  int local_3d8;
  int local_3d4;
  double local_3d0;
  double local_3c8;
  CHAR local_3bc [260];
  int local_2b8;
  int local_2b4;
  int local_2b0;
  int local_2ac;
  double local_160;
  double local_158;
  
  local_3e4 = param_3 >> 0x10;
  param_3 = param_3 & 0xffff;
  pHVar5 = GetDlgItem((HWND)param_1[0xc],0x573);
  pcVar14 = SendMessageA_exref;
  if ((0x9e33 < param_3) && (param_3 < 41000)) {
    puVar2 = *(undefined4 **)param_1[2];
    local_3f0 = (double)((ulonglong)local_3f0 & 0xffffffff00000000);
    puVar12 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,&DAT_00554c60,&local_3f0);
      puVar12 = local_3f0._0_4_;
    }
    iVar6 = (**(code **)*puVar12)(puVar12,&DAT_00554ba0,&local_3f4);
    if (-1 < iVar6) {
      (**(code **)(local_3f4->unused + 0x14))(local_3f4,param_3 - 0x9e34);
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
    if (local_3f0._0_4_ != (int *)0x0) {
      (**(code **)(*local_3f0._0_4_ + 8))(local_3f0._0_4_);
    }
    param_3 = 0;
LAB_0046607a:
    if (param_3 == 1000) {
      FUN_00465450();
      *param_5 = 1;
      return 0;
    }
    if (param_3 == 0x580) {
      if (local_3e4 == 1) {
        pHVar5 = GetDlgItem((HWND)param_1[0xc],0x580);
        WVar8 = SendMessageA(pHVar5,0x147,0,0);
        LVar7 = SendMessageA(pHVar5,0x150,WVar8,0);
        param_1[0x1b] = LVar7;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
    else if (param_3 == 0x59a) {
      LVar7 = SendMessageA(pHVar5,0x806,0,0);
      if ((-1 < LVar7) && (LVar7 < 10)) {
        SendMessageA(param_4,0x702,0,(LPARAM)(param_1 + LVar7 * 4 + 0x1e));
      }
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    }
    return 0;
  }
  if (0x9c43 < param_3) {
    if (41000 < param_3) {
      if (param_3 != 0xa029) {
        return 0;
      }
      FUN_00406390(param_1[0xc]);
      return 0;
    }
    if (param_3 == 41000) {
      FUN_004c5940(1,param_1[0xc],0x3ee,0xf,0);
      return 0;
    }
    switch(param_3) {
    case 0x9c44:
      local_3f4 = (HWND)SendMessageA(pHVar5,0x806,0,0);
      if ((int)local_3f4 < 1) {
        return 0;
      }
      if (param_1[0x1a] < (int)local_3f4) {
        return 0;
      }
      iVar6 = param_1[0x1a] + -1;
      param_1[0x1a] = iVar6;
      if ((int)local_3f4 < iVar6) {
        piVar11 = param_1 + (int)local_3f4 * 4 + 0x1e;
        local_3f0 = (double)CONCAT44(local_3f0._4_4_,piVar11);
        piVar13 = param_1 + (int)local_3f4 * 2 + 0x46;
        do {
          *piVar11 = piVar11[4];
          piVar11[1] = piVar11[5];
          piVar11[2] = piVar11[6];
          piVar11[3] = piVar11[7];
          *piVar13 = piVar13[2];
          piVar13[1] = piVar13[3];
          piVar13[0x14] = piVar13[0x16];
          piVar13[0x15] = piVar13[0x17];
          local_3f4 = (HWND)((int)&local_3f4->unused + 1);
          piVar11 = (int *)((int)local_3f0._0_4_ + 0x10);
          local_3f0 = (double)CONCAT44(local_3f0._4_4_,piVar11);
          piVar13 = piVar13 + 2;
        } while ((int)local_3f4 < param_1[0x1a]);
      }
      SetFocus(pHVar5);
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    case 0x9c45:
      pHVar5 = GetDlgItem((HWND)param_1[0xc],0x573);
      pcVar14 = SendMessageA_exref;
      LVar7 = SendMessageA(pHVar5,0x806,0,0);
      if (LVar7 < 1) {
        return 0;
      }
      if (param_1[0x1a] <= LVar7) {
        return 0;
      }
      iVar6 = LVar7 + -1;
      break;
    case 0x9c46:
      LVar7 = SendMessageA(pHVar5,0x806,0,0);
      if (LVar7 < 0) {
        return 0;
      }
      if (param_1[0x1a] + -1 <= LVar7) {
        return 0;
      }
      iVar6 = LVar7 + 1;
      break;
    case 0x9c47:
      LVar7 = SendMessageA(pHVar5,0x806,0,0);
      if (LVar7 < 0) {
        return 0;
      }
      if (param_1[0x1a] + -1 <= LVar7) {
        return 0;
      }
      uVar1 = *(undefined8 *)(param_1 + LVar7 * 2 + 0x46);
      pdVar9 = (double *)(param_1 + LVar7 * 4 + 0x1e);
      local_3c8 = *(double *)(param_1 + LVar7 * 2 + 0x5a);
      iVar6 = *(int *)pdVar9;
      iVar3 = param_1[LVar7 * 4 + 0x1f];
      local_3e0 = *pdVar9;
      local_3d8 = param_1[LVar7 * 4 + 0x20];
      local_3d4 = param_1[LVar7 * 4 + 0x21];
      param_1[LVar7 * 2 + 0x46] = param_1[LVar7 * 2 + 0x48];
      param_1[LVar7 * 2 + 0x47] = param_1[LVar7 * 2 + 0x49];
      param_1[LVar7 * 2 + 0x5a] = param_1[LVar7 * 2 + 0x5c];
      param_1[LVar7 * 2 + 0x5b] = param_1[LVar7 * 2 + 0x5d];
      local_3f4 = (HWND)(param_1 + LVar7 * 4 + 0x22);
      WVar8 = LVar7 + 1;
      *(int *)pdVar9 = local_3f4->unused;
      param_1[LVar7 * 4 + 0x1f] = param_1[LVar7 * 4 + 0x23];
      param_1[LVar7 * 4 + 0x20] = param_1[LVar7 * 4 + 0x24];
      param_1[LVar7 * 4 + 0x21] = param_1[LVar7 * 4 + 0x25];
      *(undefined8 *)(param_1 + WVar8 * 2 + 0x46) = uVar1;
      *(double *)(param_1 + WVar8 * 2 + 0x5a) = local_3c8;
      local_3f4->unused = iVar6;
      param_1[LVar7 * 4 + 0x23] = iVar3;
      param_1[LVar7 * 4 + 0x24] = local_3d8;
      param_1[LVar7 * 4 + 0x25] = local_3d4;
      SendMessageA(pHVar5,0x811,WVar8,0);
      SetFocus(pHVar5);
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    case 0x9c48:
      local_3f4 = GetDlgItem((HWND)param_1[0xc],0x573);
      LVar7 = SendMessageA(local_3f4,0x806,0,0);
      pHVar5 = local_3f4;
      if (LVar7 < 2) {
        return 0;
      }
      if (param_1[0x1a] <= LVar7) {
        return 0;
      }
      uVar1 = *(undefined8 *)(param_1 + LVar7 * 2 + 0x46);
      local_3c8 = *(double *)(param_1 + LVar7 * 2 + 0x5a);
      pdVar9 = (double *)(param_1 + LVar7 * 4 + 0x1e);
      WVar8 = LVar7 - 1;
      iVar6 = *(int *)pdVar9;
      iVar3 = param_1[LVar7 * 4 + 0x1f];
      local_3e0 = *pdVar9;
      local_3d8 = param_1[LVar7 * 4 + 0x20];
      local_3d4 = param_1[LVar7 * 4 + 0x21];
      param_1[WVar8 * 2 + 0x48] = param_1[WVar8 * 2 + 0x46];
      param_1[WVar8 * 2 + 0x49] = param_1[WVar8 * 2 + 0x47];
      param_1[WVar8 * 2 + 0x5c] = param_1[WVar8 * 2 + 0x5a];
      param_1[WVar8 * 2 + 0x5d] = param_1[WVar8 * 2 + 0x5b];
      *(int *)pdVar9 = param_1[LVar7 * 4 + 0x1a];
      param_1[LVar7 * 4 + 0x1f] = param_1[LVar7 * 4 + 0x1b];
      param_1[LVar7 * 4 + 0x20] = param_1[LVar7 * 4 + 0x1c];
      param_1[LVar7 * 4 + 0x21] = param_1[LVar7 * 4 + 0x1d];
      *(undefined8 *)(param_1 + WVar8 * 2 + 0x46) = uVar1;
      *(double *)(param_1 + WVar8 * 2 + 0x5a) = local_3c8;
      param_1[LVar7 * 4 + 0x1a] = iVar6;
      param_1[LVar7 * 4 + 0x1b] = iVar3;
      param_1[LVar7 * 4 + 0x1c] = local_3d8;
      param_1[LVar7 * 4 + 0x1d] = local_3d4;
      SendMessageA(local_3f4,0x811,WVar8,0);
      SetFocus(pHVar5);
      (**(code **)(*param_1 + 0x2c))(param_1);
      return 0;
    default:
      return 0;
    }
    (*pcVar14)(pHVar5,0x811,iVar6,0);
    SetFocus(pHVar5);
    FUN_00465450();
    return 0;
  }
  if (param_3 == 0x9c43) {
    local_3f4 = (HWND)SendMessageA(pHVar5,0x806,0,0);
    WVar8 = param_1[0x1a];
    piVar11 = param_1 + (int)local_3f4 * 4 + 0x1e;
    piVar13 = param_1 + WVar8 * 4 + 0x1e;
    *piVar13 = *piVar11;
    piVar13[1] = piVar11[1];
    piVar13[2] = piVar11[2];
    piVar13[3] = piVar11[3];
    *(double *)(param_1 + WVar8 * 2 + 0x46) =
         (*(double *)(param_1 + (int)local_3f4 * 2 + 0x46) - *(double *)(param_1 + 0x46)) *
         _DAT_00560f30 + *(double *)(param_1 + 0x46);
    *(double *)(param_1 + WVar8 * 2 + 0x5a) =
         (*(double *)(param_1 + (int)local_3f4 * 2 + 0x5a) - *(double *)(param_1 + 0x5a)) *
         _DAT_00560f30 + *(double *)(param_1 + 0x5a);
    param_1[0x1a] = param_1[0x1a] + 1;
    (**(code **)(*param_1 + 0x2c))(param_1);
    SetFocus(pHVar5);
    FUN_00465450();
    SendMessageA(pHVar5,0x811,WVar8,0);
    return 0;
  }
  if (param_3 < 0x59c) {
    if (param_3 != 0x59b) goto LAB_0046607a;
    if (local_3e4 != 0x200) {
      return 0;
    }
    local_3f4 = (HWND)SendMessageA(pHVar5,0x806,0,0);
    SendMessageA(pHVar5,0x805,(WPARAM)local_3f4,(LPARAM)&local_2b8);
    SendMessageA(pHVar5,0x805,0,(LPARAM)&local_160);
    fVar15 = (float10)FUN_00465050(param_1 + 0x1a,local_2b8,local_2b4,local_2b0,local_2ac);
    local_3e0 = (double)fVar15;
    iVar6 = GetWindowTextA(param_4,local_3bc,0x104);
    if (iVar6 != 0) {
      local_3f0 = -1.0;
      if (param_1[0x1b] != 0) {
        local_3f0 = 0.0;
      }
      fVar15 = (float10)FUN_004d6ed0(local_3bc,0);
      if ((float10)local_3f0 <= fVar15) {
        fVar15 = (float10)FUN_004d6ed0(local_3bc,0);
        if (fVar15 <= (float10)_DAT_00555908) {
          fVar15 = (float10)FUN_004d6ed0(local_3bc,0);
          local_3f0 = (double)fVar15;
        }
        else {
          local_3f0 = 1.0;
        }
      }
      else if (param_1[0x1b] == 0) {
        local_3f0 = -1.0;
      }
      else {
        local_3f0 = 0.0;
      }
      if (_DAT_0055ca40 < ABS(local_3f0 - local_3e0)) {
        FUN_00466ba0(&local_3e0,&local_3d0);
        *(double *)(param_1 + (int)local_3f4 * 2 + 0x46) = local_3e0 * local_3f0 + local_160;
        *(double *)(param_1 + (int)local_3f4 * 2 + 0x5a) = local_3d0 * local_3f0 + local_158;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
  }
  else if (param_3 == 0x59c) {
    if (local_3e4 != 0x200) {
      return 0;
    }
    iVar6 = GetWindowTextA(param_4,local_3bc,0x104);
    if (iVar6 != 0) {
      fVar15 = (float10)FUN_004d6ed0(local_3bc,0);
      if ((float10)_DAT_00560f40 <= fVar15) {
        fVar15 = (float10)FUN_004d6ed0(local_3bc,0);
        if (fVar15 <= (float10)_DAT_00560f38) {
          fVar15 = (float10)FUN_004d6ed0(local_3bc,0);
        }
        else {
          fVar15 = (float10)_DAT_00560f38;
        }
      }
      else {
        fVar15 = (float10)_DAT_00560f40;
      }
      local_3d0 = (double)(fVar15 * (float10)_DAT_0055d680);
      if ((float10)_DAT_0055c078 <
          ABS(fVar15 * (float10)_DAT_0055d680 - (float10)*(double *)(param_1 + 0x1c))) {
        SendMessageA(pHVar5,0x805,0,(LPARAM)&local_2b8);
        local_3e0 = *(double *)(param_1 + 0x1c);
        uVar10 = ftol();
        iVar6 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f);
        local_3f4 = (HWND)0x0;
        local_3f0._0_4_ = (int *)(iVar6 + 1);
        local_3e4 = iVar6 + 2;
        if (0 < (int)local_3e4) {
          local_3c8 = (double)(int)local_3f0._0_4_;
          do {
            pHVar4 = local_3f4;
            *(double *)(param_1 + 0x1c) =
                 ((double)(int)local_3f0._0_4_ * local_3e0 + (double)(int)local_3f4 * local_3d0) /
                 local_3c8;
            FUN_00466bc0(pHVar5,0,&local_2b8);
            local_3f4 = (HWND)((int)&pHVar4->unused + 1);
            local_3f0._0_4_ = (int *)((int)local_3f0._0_4_ + -1);
          } while ((int)local_3f4 < (int)local_3e4);
        }
        local_3f4 = (HWND)SendMessageA(pHVar5,0x802,0,0);
        param_1[0x1a] = (int)local_3f4;
        local_3f0._0_4_ = (int *)0x0;
        WVar8 = (WPARAM)local_3f0._0_4_;
        local_3f0._0_4_ = (int *)0x0;
        if (0 < (int)local_3f4) {
          piVar11 = param_1 + 0x5a;
          do {
            SendMessageA(pHVar5,0x805,(WPARAM)local_3f0._0_4_,(LPARAM)&local_2b8);
            piVar11[-0x14] = local_2b8;
            piVar11[-0x13] = local_2b4;
            *piVar11 = local_2b0;
            piVar11[1] = local_2ac;
            local_3f0._0_4_ = (int *)((int)local_3f0._0_4_ + 1);
            piVar11 = piVar11 + 2;
            WVar8 = (WPARAM)local_3f0._0_4_;
          } while ((int)local_3f0._0_4_ < (int)local_3f4);
        }
        local_3f0._0_4_ = (int *)WVar8;
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
  }
  else if (param_3 == 0x59d) {
    if (local_3e4 != 0x200) {
      if (local_3e4 != 0x100) {
        return 0;
      }
      SendMessageA(param_4,0xb1,0,-1);
      return 0;
    }
    WVar8 = SendMessageA(pHVar5,0x806,0,0);
    SendMessageA(pHVar5,0x805,WVar8,(LPARAM)&local_160);
    iVar6 = GetWindowTextA(param_4,local_3bc,0x104);
    if (iVar6 != 0) {
      fVar15 = (float10)FUN_004d6ed0(local_3bc,0);
      if ((float10)_DAT_00555910 <= fVar15) {
        fVar15 = (float10)FUN_004d6ed0(local_3bc,0);
        if (fVar15 <= (float10)_DAT_00555908) {
          fVar15 = (float10)FUN_004d6ed0(local_3bc,0);
        }
        else {
          fVar15 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar15 = (float10)_DAT_00555910;
      }
      if ((float10)_DAT_0055ca40 < ABS(fVar15 - (float10)local_158)) {
        iVar6 = 1;
        local_3e0 = (double)(fVar15 - (float10)*(double *)(param_1 + WVar8 * 2 + 0x5a));
        *(double *)(param_1 + WVar8 * 2 + 0x5a) = (double)fVar15;
        if (1 < param_1[0x1a]) {
          pdVar9 = (double *)(param_1 + 0x5c);
          do {
            iVar6 = iVar6 + 1;
            *pdVar9 = local_3e0 + *pdVar9;
            pdVar9 = pdVar9 + 1;
          } while (iVar6 < param_1[0x1a]);
        }
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
  }
  else {
    if (param_3 != 0x59e) {
      return 0;
    }
    if (local_3e4 != 0x200) {
      if (local_3e4 != 0x100) {
        return 0;
      }
      SendMessageA(param_4,0xb1,0,-1);
      return 0;
    }
    WVar8 = SendMessageA(pHVar5,0x806,0,0);
    SendMessageA(pHVar5,0x805,WVar8,(LPARAM)&local_160);
    iVar6 = GetWindowTextA(param_4,local_3bc,0x104);
    if (iVar6 != 0) {
      fVar15 = (float10)FUN_004d6ed0(local_3bc,0);
      if ((float10)_DAT_00555910 <= fVar15) {
        fVar15 = (float10)FUN_004d6ed0(local_3bc,0);
        if (fVar15 <= (float10)_DAT_00555908) {
          fVar15 = (float10)FUN_004d6ed0(local_3bc,0);
        }
        else {
          fVar15 = (float10)_DAT_00555908;
        }
      }
      else {
        fVar15 = (float10)_DAT_00555910;
      }
      if ((float10)_DAT_0055ca40 < ABS(fVar15 - (float10)local_160)) {
        iVar6 = 1;
        local_3e0 = (double)(fVar15 - (float10)*(double *)(param_1 + WVar8 * 2 + 0x46));
        *(double *)(param_1 + WVar8 * 2 + 0x46) = (double)fVar15;
        if (1 < param_1[0x1a]) {
          pdVar9 = (double *)(param_1 + 0x48);
          do {
            iVar6 = iVar6 + 1;
            *pdVar9 = local_3e0 + *pdVar9;
            pdVar9 = pdVar9 + 1;
          } while (iVar6 < param_1[0x1a]);
        }
        (**(code **)(*param_1 + 0x2c))(param_1);
        return 0;
      }
    }
  }
  FUN_00465450();
  return 0;
}


