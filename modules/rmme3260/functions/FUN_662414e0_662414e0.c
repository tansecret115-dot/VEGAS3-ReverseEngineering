/* Module: rmme3260.dll
   Function: FUN_662414e0
   Address: 662414e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_662414e0(void *this,HWND param_1,uint param_2,int *param_3,HWND param_4,int *param_5)

{
  int *piVar1;
  HWND hWnd;
  SHORT SVar2;
  int iVar3;
  LRESULT LVar4;
  uint uVar5;
  SCROLLINFO *pSVar6;
  undefined4 uVar7;
  int *piVar8;
  HWND *ppHVar9;
  tagPAINTSTRUCT local_ac;
  SCROLLINFO local_6c;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  HWND local_1c;
  tagRECT local_18;
  HWND local_8;
  
  hWnd = param_1;
  if (*(int *)((int)this + 0x140) != 0) {
    FUN_6624a320((byte *)(*(int *)((int)this + 0x140) + 0x48),(int)param_1,param_2);
  }
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  (**(code **)(*(int *)this + 4))(this);
  piVar8 = param_3;
  piVar1 = *(int **)((int)this + 0x60);
  if (piVar1 != (int *)0x0) {
    local_20 = param_2;
    local_1c = hWnd;
    local_18.left = (LONG)param_3;
    local_18.top = (LONG)param_4;
    local_18.right = 0;
    local_18.bottom = 0;
    if ((param_2 == 2) && (*(int *)((int)this + 0x1d8) != 0)) {
      *(undefined4 *)((int)this + 0x1d8) = 0;
      local_20 = 0x4002;
      iVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,&local_20);
      if (iVar3 == 0) {
        *param_5 = local_18.right;
      }
      local_20 = 2;
    }
    if (local_18.bottom != 0) goto LAB_66241adc;
    piVar1 = *(int **)((int)this + 0x60);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(piVar1,&local_20);
    }
    if (local_18.bottom != 0) goto LAB_66241adc;
    piVar1 = *(int **)((int)this + 0x60);
    if ((piVar1 != (int *)0x0) && (iVar3 = (**(code **)(*piVar1 + 0x18))(piVar1), iVar3 != 0)) {
      (**(code **)(*(int *)this + 8))(this);
      return 0;
    }
  }
  if ((param_2 == 0x114) || (param_2 == 0x115)) {
    local_8 = param_4;
    iVar3 = FUN_66251030(&DAT_6627cfa0,(uint)param_4,(int *)&param_5);
    if (iVar3 != 0) {
      param_3 = (int *)((uint)piVar8 & 0xffff);
      pSVar6 = &local_6c;
      for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
        pSVar6->cbSize = 0;
        pSVar6 = (SCROLLINFO *)&pSVar6->fMask;
      }
      uVar5 = (uint)piVar8 >> 0x10;
      local_6c.cbSize = 0x1c;
      local_6c.fMask = 4;
      local_6c.nPos = uVar5;
      FUN_6623f390(param_5,&local_18);
      local_44 = local_18.bottom - local_18.top;
      iVar3 = local_18.right - local_18.left;
      if ((param_3 == (int *)0x4) || (param_3 == (int *)0x5)) {
        SetScrollInfo(local_8,2,&local_6c,0);
        if (param_2 == 0x114) {
          param_5[0x86] = uVar5;
        }
        else {
          param_5[0x87] = uVar5;
        }
        (**(code **)(*param_5 + 0x40))(param_5);
      }
      if (param_3 == (int *)0x0) {
        if (param_2 == 0x114) {
          if (param_5[0x86] != 0) {
            param_5[0x86] = param_5[0x86] + -1;
          }
          local_6c.nPos = param_5[0x86];
        }
        else {
          if (param_5[0x87] != 0) {
            param_5[0x87] = param_5[0x87] + -1;
          }
          local_6c.nPos = param_5[0x87];
        }
        SetScrollInfo(local_8,2,&local_6c,1);
        (**(code **)(*param_5 + 0x40))(param_5);
      }
      if (param_3 == (int *)0x1) {
        if (param_2 == 0x114) {
          if (param_5[0x86] < param_5[0x88] - iVar3) {
            param_5[0x86] = param_5[0x86] + 1;
          }
          local_6c.nPos = param_5[0x86];
        }
        else {
          if (param_5[0x87] < param_5[0x89] - local_44) {
            param_5[0x87] = param_5[0x87] + 1;
          }
          local_6c.nPos = param_5[0x87];
        }
        SetScrollInfo(local_8,2,&local_6c,1);
        (**(code **)(*param_5 + 0x40))(param_5);
      }
      if (param_3 == (int *)0x2) {
        if (param_2 == 0x114) {
          param_5[0x86] = param_5[0x86] - iVar3;
          if (param_5[0x86] < 0) {
            param_5[0x86] = 0;
          }
          local_6c.nPos = param_5[0x86];
        }
        else {
          param_5[0x87] = param_5[0x87] - local_44;
          if (param_5[0x87] < 0) {
            param_5[0x87] = 0;
          }
          local_6c.nPos = param_5[0x87];
        }
        SetScrollInfo(local_8,2,&local_6c,1);
        (**(code **)(*param_5 + 0x40))(param_5);
      }
      if (param_3 == (int *)0x3) {
        if (param_2 == 0x114) {
          param_5[0x86] = param_5[0x86] + iVar3;
          if (param_5[0x88] - iVar3 < param_5[0x86]) {
            param_5[0x86] = param_5[0x88] - iVar3;
          }
          local_6c.nPos = param_5[0x86];
        }
        else {
          param_5[0x87] = param_5[0x87] + local_44;
          if (param_5[0x89] - local_44 < param_5[0x87]) {
            param_5[0x87] = param_5[0x89] - local_44;
          }
          local_6c.nPos = param_5[0x87];
        }
        SetScrollInfo(local_8,2,&local_6c,1);
        (**(code **)(*param_5 + 0x40))(param_5);
      }
    }
    goto LAB_66241adc;
  }
  local_28 = ((uint)param_4 & 0xffff) - *(int *)((int)this + 400);
  local_24 = ((uint)param_4 >> 0x10) - *(int *)((int)this + 0x194);
  param_1 = (HWND)(uint)(((uint)piVar8 & 4) != 0);
  if (((uint)piVar8 & 8) != 0) {
    param_1 = (HWND)((int)&param_1->unused + 2);
  }
  SVar2 = GetAsyncKeyState(0x12);
  if (((int)SVar2 & 0x10000U) != 0) {
    param_1 = param_1 + 1;
  }
  if (param_2 < 0x1d) {
    if (param_2 == 0x1c) {
switchD_6624167d_caseD_6:
      if (((*(int *)((int)this + 0xf8) != 0) &&
          (piVar1 = *(int **)((int)this + 0x60), piVar1 != (int *)0x0)) &&
         (((uint)piVar8 & 0xffff) == 0)) {
        local_1c = *(HWND *)((int)this + 0x144);
        local_20 = 0x102;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        local_18.left = 0x1b;
        (**(code **)(*piVar1 + 0x14))(piVar1,&local_20);
        (**(code **)(*(int *)this + 8))(this);
        return 0;
      }
      goto LAB_66241805;
    }
    switch(param_2) {
    case 3:
    case 5:
      goto switchD_6624167d_caseD_3;
    case 6:
      goto switchD_6624167d_caseD_6;
    case 7:
      *param_5 = 1;
      break;
    case 8:
      *param_5 = 1;
      break;
    case 0xf:
      BeginPaint(hWnd,&local_ac);
      local_48 = local_ac.rcPaint.right;
      local_4c = local_ac.rcPaint.top;
      local_44 = local_ac.rcPaint.bottom;
      FUN_66242010(*(void **)((int)this + 0x6c),local_ac.hdc);
      EndPaint(hWnd,&local_ac);
      FUN_66240de0((int)this);
      if ((((*(int *)((int)this + 0x214) == 0) ||
           (local_ac.rcPaint.left < *(int *)((int)this + 0x204))) ||
          (*(int *)((int)this + 0x20c) < local_48)) ||
         ((local_4c < *(int *)((int)this + 0x208) || (*(int *)((int)this + 0x210) < local_44)))) {
        FUN_662420d0((int)this);
        if (*(int *)((int)this + 0x68) == 0) {
          FUN_6623c580(*(int **)((int)this + 0x6c));
        }
        else {
          *(undefined4 *)((int)this + 0x1a8) = 1;
          (**(code **)(*(int *)this + 0x40))(this);
          *(undefined4 *)((int)this + 0x1a8) = 0;
        }
        FUN_6623f3b0(this);
      }
      *(undefined4 *)((int)this + 0x204) = 0;
      *(undefined4 *)((int)this + 0x208) = 0;
      *(undefined4 *)((int)this + 0x20c) = 0;
      *(undefined4 *)((int)this + 0x210) = 0;
      *(undefined4 *)((int)this + 0x214) = 0;
      *param_5 = 0;
      goto LAB_66241adc;
    case 0x10:
      if ((*(int *)((int)this + 0xf8) != 0) &&
         (piVar8 = *(int **)((int)this + 0x60), piVar8 != (int *)0x0)) {
        local_1c = *(HWND *)((int)this + 0x144);
        local_20 = 0x102;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        local_18.left = 0x1b;
        (**(code **)(*piVar8 + 0x14))(piVar8,&local_20);
        *param_5 = 1;
        goto LAB_66241adc;
      }
      goto LAB_66241805;
    }
    goto switchD_6624167d_caseD_4;
  }
  if (param_2 < 0x85) {
    if (param_2 == 0x84) {
LAB_66241ba9:
      ppHVar9 = &param_4;
      uVar5 = param_2;
      goto LAB_66241cc5;
    }
    if ((0x45 < param_2) && (param_2 < 0x48)) goto switchD_6624167d_caseD_3;
    goto switchD_6624167d_caseD_4;
  }
  if (param_2 < 0x201) {
    if (param_2 == 0x200) {
      FUN_66240e80((int)this);
      FUN_66240d90(this,hWnd,0x200,piVar8,param_4);
      uVar7 = 0x3005;
      goto LAB_66241c8c;
    }
    if ((0xff < param_2) && (param_2 < 0x103)) goto LAB_66241ba9;
    goto switchD_6624167d_caseD_4;
  }
  switch(param_2) {
  case 0x201:
    FUN_66240e80((int)this);
    FUN_66240d90(this,hWnd,param_2,piVar8,param_4);
    ppHVar9 = &param_1;
    piVar8 = &local_28;
    uVar5 = 0x3001;
    goto LAB_66241cc5;
  case 0x202:
    FUN_66240e80((int)this);
    FUN_66240d90(this,hWnd,param_2,piVar8,param_4);
    uVar7 = 0x3002;
LAB_66241c8c:
    FUN_66240d60(&local_40,uVar7,hWnd,&local_28,&param_1);
    break;
  case 0x204:
    FUN_66240e80((int)this);
    FUN_66240d90(this,hWnd,param_2,piVar8,param_4);
    FUN_66240d60(&local_40,0x3003,hWnd,&local_28,&param_1);
    break;
  case 0x205:
    FUN_66240e80((int)this);
    FUN_66240d90(this,hWnd,param_2,piVar8,param_4);
    ppHVar9 = &param_1;
    piVar8 = &local_28;
    uVar5 = 0x3004;
LAB_66241cc5:
    FUN_66240d60(&local_40,uVar5,hWnd,piVar8,ppHVar9);
    break;
  case 0x214:
  case 0x216:
switchD_6624167d_caseD_3:
    if (*(int *)((int)this + 0xf8) != 0) {
      LVar4 = DefWindowProcA(hWnd,param_2,(WPARAM)piVar8,(LPARAM)param_4);
      *param_5 = LVar4;
      goto LAB_66241adc;
    }
    goto LAB_66241805;
  case 0x215:
    *(uint *)(*(int *)((int)this + 0x6c) + 0x1f8) = (uint)(param_4 == *(HWND *)((int)this + 0x144));
    iVar3 = *(int *)((int)this + 0x6c);
    if (*(int *)(iVar3 + 0x1f8) == 0) {
      *(undefined4 *)(iVar3 + 0x1fc) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x1fc) = *(undefined4 *)(iVar3 + 0x200);
    }
  }
switchD_6624167d_caseD_4:
  if (local_3c != 0) {
    (**(code **)(*(int *)((int)this + 0xc) + 0xc))((int)this + 0xc,&local_40);
    iVar3 = local_2c;
    *param_5 = local_2c;
    (**(code **)(*(int *)this + 8))(this);
    return iVar3;
  }
  if (param_2 == 0x20) {
    *param_5 = 1;
LAB_66241adc:
    (**(code **)(*(int *)this + 8))(this);
    return 1;
  }
LAB_66241805:
  (**(code **)(*(int *)this + 8))(this);
  return 0;
}


