/* Module: pngu3266.dll
   Function: InsertPageAt
   Address: 60613f8c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __stdcall XPNWizardManager::InsertPageAt(struct IPNWizardPage *,unsigned
   long,int,int) */

int XPNWizardManager::InsertPageAt(IPNWizardPage *param_1,ulong param_2,int param_3,int param_4)

{
  int iVar1;
  int in_stack_00000014;
  int local_14 [4];
  
                    /* 0x23f8c  1483  ?InsertPageAt@XPNWizardManager@@UAGHPAUIPNWizardPage@@KHH@Z */
  if ((*(uint *)(param_1 + 8) < (uint)param_3) || (param_2 == 0)) {
    return 0;
  }
  local_14[2] = 0xc;
  local_14[3] = 0xc;
  if ((param_4 != 0) && (*(int **)(param_1 + 0x38) != (int *)0x0)) {
    local_14[0] = 0;
    local_14[1] = 0;
    (**(code **)(**(int **)(param_1 + 0x38) + 0x40))(local_14);
    local_14[2] = local_14[2] + 0xc + local_14[0];
  }
  (**(code **)(*(int *)param_2 + 0x14))(param_2,local_14 + 2);
  iVar1 = param_3;
  if (in_stack_00000014 == 0) {
    if ((*(int *)(param_1 + 8) < 1) || (*(uint *)(param_1 + 0x34) < (uint)param_3))
    goto LAB_60613fff;
    iVar1 = *(uint *)(param_1 + 0x34) + 1;
  }
  *(int *)(param_1 + 0x34) = iVar1;
LAB_60613fff:
  (**(code **)(*(int *)param_2 + 4))(param_2);
  FUN_6061a670(param_1 + 4,param_3,param_2,1);
  return 1;
}


