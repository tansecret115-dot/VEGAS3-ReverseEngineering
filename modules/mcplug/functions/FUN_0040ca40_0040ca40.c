/* Module: mcplug.dll
   Function: FUN_0040ca40
   Address: 0040ca40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0040ca40(void *this,HWND param_1,uint param_2,uint param_3,int param_4)

{
  short sVar1;
  LRESULT LVar2;
  uint uVar3;
  void *pvVar4;
  HWND pHVar5;
  float10 fVar6;
  UINT UVar7;
  WPARAM WVar8;
  uchar *lpString;
  LPARAM LVar9;
  int iVar10;
  void *local_58;
  HWND local_54;
  double local_50;
  uchar local_48 [68];
  
  local_58 = this;
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      *(HWND *)((int)this + 0x10) = param_1;
      FUN_00410a10(this);
      return 1;
    }
    if (param_2 != 2) {
      if (param_2 != 0x53) {
        return 0;
      }
      FUN_00418240(0,param_1,0,*(int *)(param_4 + 8),(int *)&DAT_00486080,(uchar *)0x0);
      return 1;
    }
    *(undefined4 *)((int)this + 0x10) = 0;
    return 0;
  }
  if (param_2 != 0x111) {
    return 0;
  }
  sVar1 = (short)(param_3 >> 0x10);
  switch(param_3 & 0xffff) {
  case 0x40c:
    FUN_004167c0(&local_50,param_1,(int *)&local_58,(int *)&local_54,0,
                 *(undefined1 **)((int)this + 0x5c));
    FUN_00415880(param_1,*(int *)((int)this + 0x5c));
    break;
  case 0x423:
    if (sVar1 == 0) {
      LVar9 = 0;
      WVar8 = 0;
      UVar7 = 0xf0;
      pHVar5 = GetDlgItem(param_1,0x423);
      LVar2 = SendMessageA(pHVar5,UVar7,WVar8,LVar9);
      uVar3 = (uint)(LVar2 != 1);
      pHVar5 = GetDlgItem(param_1,0x428);
      EnableWindow(pHVar5,uVar3);
      *(undefined4 *)((int)local_58 + 0x24) = 1;
      return 0;
    }
    break;
  case 0x424:
    if (sVar1 == 0) {
      LVar9 = 0;
      WVar8 = 0;
      UVar7 = 0xf0;
      pHVar5 = GetDlgItem(param_1,0x424);
      LVar2 = SendMessageA(pHVar5,UVar7,WVar8,LVar9);
      uVar3 = (uint)(LVar2 != 1);
      pHVar5 = GetDlgItem(param_1,0x464);
      EnableWindow(pHVar5,uVar3);
      *(undefined4 *)((int)local_58 + 0x24) = 1;
      return 0;
    }
    break;
  case 0x425:
    if (sVar1 == 0) {
      LVar9 = 0;
      WVar8 = 0;
      UVar7 = 0xf0;
      pHVar5 = GetDlgItem(param_1,0x425);
      LVar2 = SendMessageA(pHVar5,UVar7,WVar8,LVar9);
      pvVar4 = local_58;
      if (LVar2 != 1) {
        *(undefined4 *)((int)local_58 + 0x30) = 1;
      }
      else {
        *(undefined4 *)((int)local_58 + 0x30) = 0;
      }
      uVar3 = (uint)(LVar2 != 1);
      pHVar5 = GetDlgItem(param_1,0x427);
      EnableWindow(pHVar5,uVar3);
      *(undefined4 *)((int)pvVar4 + 0x24) = 1;
      return 0;
    }
    break;
  case 0x426:
    goto switchD_0040caf8_caseD_426;
  case 0x427:
    if (sVar1 == 0x300) {
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    }
    if (sVar1 == 0x200) {
      pHVar5 = GetDlgItem(param_1,0x427);
      GetWindowTextA(pHVar5,(LPSTR)local_48,0x40);
      fVar6 = FUN_00430830((LPCSTR)local_48,(undefined4 *)0x0);
      local_50 = (double)fVar6;
      if ((float10)_DAT_00476d88 <= fVar6) {
        if (_DAT_00476d80 < local_50) {
          local_50 = 13106800.0;
        }
      }
      else {
        local_50 = 400.0;
      }
      FUN_0042fbb0(local_48,local_50._0_4_,(int)((ulonglong)local_50 >> 0x20),0,1);
      SetWindowTextA(pHVar5,(LPCSTR)local_48);
      pHVar5 = GetDlgItem(param_1,0x427);
      GetWindowTextA(pHVar5,(LPSTR)local_48,0x40);
      local_58 = (void *)FUN_00430020((LPCSTR)local_48,(undefined4 *)0x0);
      if ((int)local_58 % 400 != 0) {
        local_58 = (void *)(((int)local_58 / 400 + 1) * 400);
      }
      FUN_0042fbb0(local_48,SUB84((double)(int)local_58,0),
                   (int)((ulonglong)(double)(int)local_58 >> 0x20),0,1);
      SetWindowTextA(pHVar5,(LPCSTR)local_48);
      return 0;
    }
    break;
  case 0x428:
    if (sVar1 == 0x300) goto switchD_0040caf8_caseD_46c;
    if (sVar1 == 0x200) {
      pHVar5 = GetDlgItem(param_1,0x428);
      GetWindowTextA(pHVar5,(LPSTR)local_48,0x40);
      fVar6 = FUN_00430830((LPCSTR)local_48,(undefined4 *)0x0);
      local_50 = (double)fVar6;
      if ((float10)_DAT_00476850 <= fVar6) {
        if (_DAT_00476d90 < local_50) {
          local_50 = 1000.0;
        }
      }
      else {
        local_50 = 1.0;
      }
      FUN_0042fbb0(local_48,local_50._0_4_,(int)((ulonglong)local_50 >> 0x20),0,1);
      SetWindowTextA(pHVar5,(LPCSTR)local_48);
      return 0;
    }
    break;
  case 0x42c:
    if (sVar1 == 0x300) {
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    }
    if (sVar1 != 0x200) {
      return 0;
    }
    pHVar5 = GetDlgItem(param_1,0x42c);
    GetWindowTextA(pHVar5,(LPSTR)local_48,0x40);
    pvVar4 = (void *)FUN_00430020((LPCSTR)local_48,(undefined4 *)0x0);
    if ((int)pvVar4 < 2) {
      pvVar4 = (void *)0x2;
    }
    else if (0x40 < (int)pvVar4) {
      pvVar4 = (void *)0x40;
    }
    goto LAB_0040cca3;
  case 0x42d:
    if (sVar1 == 0x300) {
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    }
    if (sVar1 == 0x200) {
      pHVar5 = GetDlgItem(param_1,0x42d);
      GetWindowTextA(pHVar5,(LPSTR)local_48,0x40);
      uVar3 = FUN_00430020((LPCSTR)local_48,(undefined4 *)0x0);
      if ((int)uVar3 < 0x17) {
        uVar3 = 0x17;
      }
      else if (0x100 < (int)uVar3) {
        uVar3 = 0x100;
      }
      FUN_0042f8b0(uVar3,local_48,0);
      SetWindowTextA(pHVar5,(LPCSTR)local_48);
      return 0;
    }
    break;
  case 0x45d:
    if (sVar1 == 0x300) {
      *(undefined4 *)((int)this + 0x24) = 1;
    }
    else if (sVar1 == 0x200) {
      LVar9 = 0;
      WVar8 = 0;
      UVar7 = 0x147;
      pHVar5 = GetDlgItem(param_1,0x45b);
      LVar2 = SendMessageA(pHVar5,UVar7,WVar8,LVar9);
      if (((LVar2 == 0) || (LVar2 == 1)) && (*(int *)((int)local_58 + 0x5c) != 2)) {
        local_54 = GetDlgItem(param_1,0x45d);
        GetWindowTextA(local_54,(LPSTR)local_48,0x40);
        uVar3 = FUN_00430020((LPCSTR)local_48,(undefined4 *)0x0);
        if ((int)uVar3 < 0x132) {
          uVar3 = 0x132;
        }
        else {
joined_r0x0040cbbe:
          if (0x1000 < (int)uVar3) {
            uVar3 = 0x1000;
          }
        }
      }
      else {
        local_54 = GetDlgItem(param_1,0x45d);
        GetWindowTextA(local_54,(LPSTR)local_48,0x40);
        uVar3 = FUN_00430020((LPCSTR)local_48,(undefined4 *)0x0);
        if (0x137 < (int)uVar3) goto joined_r0x0040cbbe;
        uVar3 = 0x138;
      }
      FUN_0042f8b0(uVar3,local_48,0);
      SetWindowTextA(local_54,(LPCSTR)local_48);
    }
switchD_0040caf8_caseD_426:
    if (sVar1 == 0x300) {
      *(undefined4 *)((int)local_58 + 0x24) = 1;
      return 0;
    }
    if (sVar1 != 0x200) {
      return 0;
    }
    LVar9 = 0;
    WVar8 = 0;
    UVar7 = 0x147;
    pHVar5 = GetDlgItem(param_1,0x45b);
    local_54 = (HWND)SendMessageA(pHVar5,UVar7,WVar8,LVar9);
    lpString = local_48;
    iVar10 = 0x40;
    pHVar5 = GetDlgItem(param_1,0x45d);
    GetWindowTextA(pHVar5,(LPSTR)lpString,iVar10);
    iVar10 = FUN_00430020((LPCSTR)local_48,(undefined4 *)0x0);
    if ((local_54 == (HWND)0x0) || (local_54 == (HWND)0x1)) {
      local_58 = (void *)((iVar10 + -0x21) / 0x106);
      pHVar5 = GetDlgItem(param_1,0x426);
      GetWindowTextA(pHVar5,(LPSTR)local_48,0x40);
      pvVar4 = (void *)FUN_00430020((LPCSTR)local_48,(undefined4 *)0x0);
      if ((int)pvVar4 < 1) {
        pvVar4 = (void *)0x1;
      }
      else if ((int)local_58 < (int)pvVar4) goto LAB_0040cca1;
    }
    else {
      local_58 = (void *)((iVar10 + -0x23) / 0x108);
      pHVar5 = GetDlgItem(param_1,0x426);
      GetWindowTextA(pHVar5,(LPSTR)local_48,0x40);
      pvVar4 = (void *)FUN_00430020((LPCSTR)local_48,(undefined4 *)0x0);
      if ((int)pvVar4 < 1) {
        pvVar4 = (void *)0x1;
      }
      else if ((int)local_58 < (int)pvVar4) {
LAB_0040cca1:
        pvVar4 = local_58;
      }
    }
LAB_0040cca3:
    FUN_0042f8b0((uint)pvVar4,local_48,0);
LAB_0040ccb0:
    SetWindowTextA(pHVar5,(LPCSTR)local_48);
    return 0;
  case 0x460:
    if (sVar1 == 0x300) {
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    }
    if (sVar1 == 0x200) {
      pHVar5 = GetDlgItem(param_1,0x460);
      GetWindowTextA(pHVar5,(LPSTR)local_48,0x40);
      fVar6 = FUN_00430830((LPCSTR)local_48,(undefined4 *)0x0);
      local_50 = (double)fVar6;
      if ((float10)_DAT_00476800 <= fVar6) {
        if (_DAT_00476d98 < local_50) {
          local_50 = 2147483648.0;
        }
      }
      else {
        local_50 = 0.0;
      }
      FUN_0042fbb0(local_48,local_50._0_4_,(int)((ulonglong)local_50 >> 0x20),0,1);
      SetWindowTextA(pHVar5,(LPCSTR)local_48);
      return 0;
    }
    break;
  case 0x464:
    if (sVar1 == 0x300) goto switchD_0040caf8_caseD_46a;
    if (sVar1 != 0x200) {
      return 0;
    }
    pHVar5 = GetDlgItem(param_1,0x464);
    GetWindowTextA(pHVar5,(LPSTR)local_48,0x40);
    fVar6 = FUN_00430830((LPCSTR)local_48,(undefined4 *)0x0);
    local_50 = (double)fVar6;
    if ((float10)_DAT_00476850 <= fVar6) {
      if (_DAT_00476d90 < local_50) {
        local_50 = 1000.0;
      }
    }
    else {
      local_50 = 1.0;
    }
    FUN_0042fbb0(local_48,local_50._0_4_,(int)((ulonglong)local_50 >> 0x20),0,1);
    goto LAB_0040ccb0;
  case 0x46a:
switchD_0040caf8_caseD_46a:
    *(undefined4 *)((int)this + 0x24) = 1;
    return 0;
  case 0x46c:
switchD_0040caf8_caseD_46c:
    *(undefined4 *)((int)this + 0x24) = 1;
    return 0;
  }
  return 0;
}


