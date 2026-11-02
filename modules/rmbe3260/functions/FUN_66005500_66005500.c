/* Module: rmbe3260.dll
   Function: FUN_66005500
   Address: 66005500
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66005500(CPNRouter *param_1)

{
  bool bVar1;
  CPNCheckButton *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CPNPopupList *this;
  int iVar6;
  CPNText *this_00;
  int iVar7;
  undefined3 extraout_var;
  int *piVar8;
  void *pvVar9;
  undefined3 extraout_var_00;
  uint uVar10;
  undefined1 local_148 [256];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_2c = 0;
  pCVar2 = operator_new(0xc0);
  if (pCVar2 == (CPNCheckButton *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = CPNCheckButton::CPNCheckButton(pCVar2);
  }
  *(int *)(param_1 + 0x110) = iVar3;
  pCVar2 = operator_new(0xc0);
  if (pCVar2 == (CPNCheckButton *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = CPNCheckButton::CPNCheckButton(pCVar2);
  }
  *(int *)(param_1 + 0x114) = iVar4;
  pCVar2 = operator_new(0xc0);
  if (pCVar2 == (CPNCheckButton *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = CPNCheckButton::CPNCheckButton(pCVar2);
  }
  *(int *)(param_1 + 0x118) = iVar5;
  this = operator_new(0xc4);
  if (this == (CPNPopupList *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = CPNPopupList::CPNPopupList(this);
  }
  *(int *)(param_1 + 0x11c) = iVar6;
  this_00 = operator_new(0xc0);
  if (this_00 == (CPNText *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = CPNText::CPNText(this_00);
  }
  *(int *)(param_1 + 0x120) = iVar7;
  if ((((iVar3 != 0 && iVar4 != 0) && iVar5 != 0) && iVar6 != 0) && iVar7 != 0) {
    (**(code **)(**(int **)(param_1 + 0x110) + 0xb8))(0x471,param_1);
    (**(code **)(**(int **)(param_1 + 0x114) + 0xb8))(0x469,param_1);
    (**(code **)(**(int **)(param_1 + 0x118) + 0xb8))(0x478,param_1);
    (**(code **)(**(int **)(param_1 + 0x11c) + 0xb8))(0x402,param_1);
    (**(code **)(**(int **)(param_1 + 0x120) + 0xb8))(0x467,param_1);
    local_24 = (int *)0x0;
    iVar3 = FUN_660130d0(&local_24);
    if (-1 < iVar3) {
      FUN_660145d0(&local_c);
      local_20 = (int *)0x0;
      iVar3 = (**(code **)(*local_24 + 0x10))(local_24,&local_20);
      FUN_660146a0(&local_c,local_20);
      if ((-1 < iVar3) && (bVar1 = FUN_66014680(&local_c), CONCAT31(extraout_var,bVar1) != 0)) {
        piVar8 = (int *)FUN_660145e0(&local_c);
        (**(code **)(*piVar8 + 0x14))(piVar8,&local_30);
        pvVar9 = operator_new(local_30 * 4);
        *(void **)(param_1 + 0x124) = pvVar9;
        local_8 = (int *)0x0;
        piVar8 = (int *)FUN_660145e0(&local_c);
        iVar3 = (**(code **)(*piVar8 + 0xc))(piVar8,&local_8);
        FUN_660145d0(&local_10);
        while ((-1 < iVar3 && (iVar3 != 0x40012))) {
          FUN_660146d0(&local_10,local_8);
          bVar1 = FUN_66014680(&local_10);
          if (CONCAT31(extraout_var_00,bVar1) != 0) {
            bVar1 = true;
            if (*(int *)(param_1 + 300) == 0) {
              FUN_660143a0(&local_38,(undefined4 *)s_01VR0_6606c2bc);
              iVar4 = FUN_66004760();
              if (iVar4 != 0) {
                FUN_66051690(&local_38);
              }
              piVar8 = (int *)FUN_660145e0(&local_10);
              (**(code **)(*piVar8 + 0xc))(piVar8,&local_40);
              if ((local_38 == local_40) && (local_34 == local_3c)) {
                bVar1 = false;
              }
            }
            if (bVar1) {
              *(int **)(*(int *)(param_1 + 0x124) + *(int *)(param_1 + 0x128) * 4) = local_8;
              piVar8 = *(int **)(*(int *)(param_1 + 0x124) + *(int *)(param_1 + 0x128) * 4);
              (**(code **)(*piVar8 + 4))(piVar8);
              piVar8 = (int *)FUN_660145e0(&local_10);
              (**(code **)(*piVar8 + 0x10))(piVar8,local_148,0xff);
              (**(code **)(**(int **)(param_1 + 0x11c) + 0x148))(local_148);
              *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
            }
          }
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 8))(local_8);
            local_8 = (int *)0x0;
          }
          if (iVar3 < 0) break;
          piVar8 = (int *)FUN_660145e0(&local_c);
          iVar3 = (**(code **)(*piVar8 + 0x10))(piVar8,&local_8);
        }
        if (local_20 != (int *)0x0) {
          (**(code **)(*local_20 + 8))(local_20);
          local_20 = (int *)0x0;
        }
        thunk_FUN_66014790(&local_10);
      }
      if (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 8))(local_24);
        local_24 = (int *)0x0;
      }
      CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x11c),param_1,0x80000000,2);
      if (*(short *)(param_1 + 0x13c) == 0) {
        CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x110),param_1,0x80000000,1);
        CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x114),param_1,0x80000000,1);
        CPNRouter::AddObserver(*(CPNRouter **)(param_1 + 0x118),param_1,0x80000000,1);
      }
      piVar8 = *(int **)(param_1 + 0x134);
      if (piVar8 != (int *)0x0) {
        local_1c = (int *)0x0;
        local_14 = (int *)0x0;
        local_18 = (int *)0x0;
        uVar10 = (**(code **)(*piVar8 + 0xc))(piVar8,0,&local_1c);
        if (((uVar10 & 0x80000000) == 0) &&
           (uVar10 = (**(code **)(*local_1c + 0x10))(local_1c,0xc,&local_14),
           (uVar10 & 0x80000000) == 0)) {
          (**(code **)(*local_14 + 0xc))(local_14,&local_48);
          uVar10 = FUN_66005cc0(param_1,local_48,local_44);
          FUN_66005d50(param_1,uVar10);
          uVar10 = (**(code **)*local_14)(local_14,&DAT_66065c38,&local_18);
          if ((uVar10 & 0x80000000) == 0) {
            if (*(undefined4 **)(param_1 + 0x138) != (undefined4 *)0x0) {
              local_2c = **(undefined4 **)(param_1 + 0x138);
            }
            (**(code **)(**(int **)(param_1 + 0x110) + 0x130))(local_2c);
            (**(code **)(*local_18 + 0x24))(local_18,&local_28);
            (**(code **)(**(int **)(param_1 + 0x114) + 0x130))(local_28);
            (**(code **)(*local_18 + 0x2c))(local_18,&local_28);
            (**(code **)(**(int **)(param_1 + 0x118) + 0x130))(local_28);
          }
        }
        if (local_1c != (int *)0x0) {
          (**(code **)(*local_1c + 8))(local_1c);
          local_1c = (int *)0x0;
        }
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 8))(local_14);
          local_14 = (int *)0x0;
        }
        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 8))(local_18);
          local_18 = (int *)0x0;
        }
      }
      thunk_FUN_66014790(&local_c);
    }
  }
  return;
}


