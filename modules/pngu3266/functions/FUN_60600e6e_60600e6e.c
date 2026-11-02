/* Module: pngu3266.dll
   Function: FUN_60600e6e
   Address: 60600e6e
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_60600e6e(CPNWindow *param_1)

{
  CPNWindow *pCVar1;
  void *this;
  undefined4 uVar2;
  uint uVar3;
  CPNButton *this_00;
  CPNRouter *this_01;
  undefined4 *puVar4;
  int iVar5;
  uint local_3c;
  int local_38;
  undefined4 local_34;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  int local_10;
  uint *local_c;
  CPNWindow *local_8;
  
  iVar5 = 0;
  local_8 = param_1;
  this = operator_new(0x18);
  if (this == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_6061ff50(this,10);
  }
  *(undefined4 *)(param_1 + 0xdc) = uVar2;
  uVar3 = *(uint *)(param_1 + 0xd8) & 0xf;
  if (uVar3 == 0) {
    iVar5 = 1;
    local_3c = 1;
    goto LAB_60600f18;
  }
  if (uVar3 == 1) {
    local_3c = 1;
  }
  else {
    if (uVar3 == 2) {
      local_3c = 5;
      iVar5 = 3;
      local_38 = 6;
      local_34 = 7;
      goto LAB_60600f18;
    }
    if (uVar3 == 3) {
      local_38 = 4;
      iVar5 = 3;
      local_34 = 2;
      local_3c = 3;
      goto LAB_60600f18;
    }
    if (uVar3 == 4) {
      local_3c = 3;
      iVar5 = 2;
      local_38 = 4;
      goto LAB_60600f18;
    }
    if (uVar3 != 5) goto LAB_60600f18;
    local_3c = 6;
  }
  iVar5 = 2;
  local_38 = iVar5;
LAB_60600f18:
  CPNWindow::GetClientRect(param_1,(CPNxRect *)&local_28);
  uVar3 = ((local_20 + iVar5 * -0x50) - local_28) + 6U >> 1;
  if (iVar5 != 0) {
    local_c = &local_3c;
    local_10 = iVar5;
    do {
      this_00 = operator_new(0xfb);
      if (this_00 == (CPNButton *)0x0) {
        this_01 = (CPNRouter *)0x0;
      }
      else {
        this_01 = (CPNRouter *)CPNButton::CPNButton(this_00);
      }
      local_18 = *local_c;
      puVar4 = FUN_60619ba0(*(void **)(local_8 + 0xdc),local_18);
      *puVar4 = this_01;
      (**(code **)(*(int *)this_01 + 300))
                (local_18,local_8,uVar3,(local_1c - local_24) + -0x23,0x4a,0x17,0x10000000,0,
                 (&PTR_DAT_606491f8)[local_18]);
      CPNRouter::AddObserver(this_01,(CPNRouter *)local_8,0x80000000,1);
      uVar3 = uVar3 + 0x50;
      (**(code **)(*(int *)this_01 + 0x98))(1);
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  pCVar1 = local_8;
  (**(code **)(*(int *)local_8 + 0x140))(local_3c);
  local_14 = (int *)0x0;
  iVar5 = FUN_60619b60(*(void **)(pCVar1 + 0xdc),local_3c,&local_14);
  if (iVar5 != 0) {
    (**(code **)(*local_14 + 0x90))();
  }
  return;
}


