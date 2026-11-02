/* Module: pngu3266.dll
   Function: InitDialog
   Address: 6061421b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual int __thiscall XPNWizardManager::InitDialog(void) */

int __thiscall XPNWizardManager::InitDialog(XPNWizardManager *this)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  CPNClientDC local_33c [484];
  char local_158;
  undefined4 local_157;
  int local_54 [4];
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34 [4];
  int local_24 [2];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
                    /* 0x2421b  1461  ?InitDialog@XPNWizardManager@@MAEHXZ */
  iVar5 = 0;
  *(undefined4 *)(this + 0xfc) = 1;
  *(undefined4 *)(this + 0xf8) = 0;
  iVar4 = *(int *)(this + 0xd8);
  local_8 = *(int **)(*(int *)(this + 0xd4) + *(int *)(this + 0x100) * 4);
  if (0 < iVar4) {
    do {
      uVar3 = (**(code **)(*(int *)this + 0xd8))();
      piVar1 = *(int **)(*(int *)(this + 0xd4) + iVar5 * 4);
      (**(code **)(*piVar1 + 0x1c))(piVar1,uVar3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  local_158 = DAT_60649ac0;
  puVar6 = &local_157;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  iVar4 = *(int *)(this + 0xf4);
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  if (iVar4 != 0) {
    FUN_6061db60(0x3e90007,&local_158,0x104);
    (**(code **)(**(int **)(this + 0xf4) + 300))(0x69,this,0,0,0x4b,0x17,0x10000600,0x10,&local_158)
    ;
  }
  FUN_6061db60(0x3e90001,&local_158,0x104);
  (**(code **)(**(int **)(this + 0xe4) + 300))(2,this,0,0,0x4b,0x17,0x10000600,0x10,&local_158);
  FUN_6061db60(0x3e90003,&local_158,0x104);
  (**(code **)(**(int **)(this + 0xf0) + 300))(0x67,this,0,0,0x4b,0x17,0x10000600,0x10,&local_158);
  FUN_6061db60(0x3e90002,&local_158,0x104);
  (**(code **)(**(int **)(this + 0xec) + 300))(0x66,this,0,0,0x4b,0x17,0x10000600,0x10,&local_158);
  FUN_6061db60(0x3e90004,&local_158,0x104);
  (**(code **)(**(int **)(this + 0xe8) + 300))(0x68,this,0,0,0x4b,0x17,0x10000600,0x10,&local_158);
  ChangeBtnStates(this);
  piVar1 = local_8;
  (**(code **)(*local_8 + 0x10))(local_8,1);
  (**(code **)(*piVar1 + 0x44))(piVar1);
  local_34[2] = 0;
  local_34[3] = 0;
  (**(code **)(*piVar1 + 0x24))(piVar1,local_34 + 2);
  local_14 = 0;
  local_10 = 0;
  CPNSystemInfo::GetFrameSize((CPNxSize *)&local_14,0);
  local_14 = local_14 + local_34[2] + 0x18;
  local_10 = local_10 + local_34[3] + 0x49;
  if (*(int **)(this + 0x108) != (int *)0x0) {
    local_c = 0;
    local_8 = (int *)0x0;
    (**(code **)(**(int **)(this + 0x108) + 0x40))(&local_c);
    local_14 = local_14 + 0xc + local_c;
    if (local_34[3] < (int)local_8) {
      local_10 = (int)local_8 + (local_10 - local_34[3]);
    }
  }
  (**(code **)(*(int *)this + 0x34))(&local_14);
  local_54[0] = 0;
  local_54[1] = 0;
  local_54[2] = 0;
  local_54[3] = 0;
  (**(code **)(*(int *)this + 0x3c))(local_54);
  CPNClientDC::CPNClientDC(local_33c,(CPNWindow *)this);
  local_8 = (int *)0x4b;
  if (*(int *)(this + 0xf4) != 0) {
    FUN_6061db60(0x3e90007,&local_158,0x104);
    CPNDC::GetTextExtent((CPNDC *)local_33c,&local_158,(CPNxSize *)local_24);
    if (0x4b < local_24[0] + 6) {
      local_8 = (int *)(local_24[0] + 6);
    }
  }
  FUN_6061db60(0x3e90001,&local_158,0x104);
  CPNDC::GetTextExtent((CPNDC *)local_33c,&local_158,(CPNxSize *)local_24);
  if ((int)local_8 < local_24[0] + 6) {
    local_8 = (int *)(local_24[0] + 6);
  }
  FUN_6061db60(0x3e90003,&local_158,0x104);
  CPNDC::GetTextExtent((CPNDC *)local_33c,&local_158,(CPNxSize *)local_24);
  if ((int)local_8 < local_24[0] + 6) {
    local_8 = (int *)(local_24[0] + 6);
  }
  FUN_6061db60(0x3e90002,&local_158,0x104);
  CPNDC::GetTextExtent((CPNDC *)local_33c,&local_158,(CPNxSize *)local_24);
  if ((int)local_8 < local_24[0] + 6) {
    local_8 = (int *)(local_24[0] + 6);
  }
  FUN_6061db60(0x3e90004,&local_158,0x104);
  CPNDC::GetTextExtent((CPNDC *)local_33c,&local_158,(CPNxSize *)local_24);
  if ((int)local_8 < local_24[0] + 6) {
    local_8 = (int *)(local_24[0] + 6);
  }
  piVar2 = local_8;
  local_1c = local_54[2] - ((int)local_8 * 4 + 0x30);
  local_18 = local_54[3] + -0x23;
  local_34[1] = 0x17;
  local_34[0] = (int)local_8;
  if (*(int **)(this + 0xf4) != (int *)0x0) {
    local_c = local_54[0] + 0xc;
    local_8 = (int *)local_18;
    (**(code **)(**(int **)(this + 0xf4) + 0x58))(&local_c,local_34);
  }
  (**(code **)(**(int **)(this + 0xe4) + 0x58))(&local_1c,local_34);
  local_1c = local_1c + 0xc + (int)piVar2;
  (**(code **)(**(int **)(this + 0xf0) + 0x58))(&local_1c,local_34);
  local_1c = local_1c + 0xc + (int)piVar2;
  (**(code **)(**(int **)(this + 0xec) + 0x58))(&local_1c,local_34);
  local_1c = local_1c + 0xc + (int)piVar2;
  (**(code **)(**(int **)(this + 0xe8) + 0x58))(&local_1c,local_34);
  iVar4 = *(int *)this;
  uVar3 = (**(code **)(*piVar1 + 0x18))(piVar1);
  (**(code **)(iVar4 + 0x20))(uVar3);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  (**(code **)(*(int *)this + 0x40))(&local_44);
  iVar4 = CPNSystemInfo::AdjustRectToFitOnScreen((CPNxRect *)&local_44);
  if (iVar4 != 0) {
    local_c = local_44;
    local_8 = (int *)local_40;
    (**(code **)(*(int *)this + 0x44))(&local_c);
  }
  CPNClientDC::~CPNClientDC(local_33c);
  return 0;
}


