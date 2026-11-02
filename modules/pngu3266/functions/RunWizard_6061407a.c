/* Module: pngu3266.dll
   Function: RunWizard
   Address: 6061407a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __stdcall XPNWizardManager::RunWizard(void) */

int XPNWizardManager::RunWizard(void)

{
  CPNRouter *pCVar1;
  CPNButton *pCVar2;
  CPNRouter *pCVar3;
  int in_stack_00000004;
  int local_4;
  
                    /* 0x2407a  1789  ?RunWizard@XPNWizardManager@@UAGHXZ */
  local_4 = 0;
  if (*(int *)(in_stack_00000004 + 8) < 1) {
    return 0;
  }
  pCVar2 = operator_new(0xfb);
  if (pCVar2 == (CPNButton *)0x0) {
    pCVar3 = (CPNRouter *)0x0;
  }
  else {
    pCVar3 = (CPNRouter *)CPNButton::CPNButton(pCVar2);
  }
  *(CPNRouter **)(in_stack_00000004 + 0x14) = pCVar3;
  if (pCVar3 != (CPNRouter *)0x0) {
    pCVar1 = (CPNRouter *)(in_stack_00000004 + -0xd0);
    CPNRouter::AddObserver(pCVar3,pCVar1,0x80000000,1);
    pCVar2 = operator_new(0xfb);
    if (pCVar2 == (CPNButton *)0x0) {
      pCVar3 = (CPNRouter *)0x0;
    }
    else {
      pCVar3 = (CPNRouter *)CPNButton::CPNButton(pCVar2);
    }
    *(CPNRouter **)(in_stack_00000004 + 0x18) = pCVar3;
    if (pCVar3 != (CPNRouter *)0x0) {
      CPNRouter::AddObserver(pCVar3,pCVar1,0x80000000,1);
      pCVar2 = operator_new(0xfb);
      if (pCVar2 == (CPNButton *)0x0) {
        pCVar3 = (CPNRouter *)0x0;
      }
      else {
        pCVar3 = (CPNRouter *)CPNButton::CPNButton(pCVar2);
      }
      *(CPNRouter **)(in_stack_00000004 + 0x1c) = pCVar3;
      if (pCVar3 != (CPNRouter *)0x0) {
        CPNRouter::AddObserver(pCVar3,pCVar1,0x80000000,1);
        pCVar2 = operator_new(0xfb);
        if (pCVar2 == (CPNButton *)0x0) {
          pCVar3 = (CPNRouter *)0x0;
        }
        else {
          pCVar3 = (CPNRouter *)CPNButton::CPNButton(pCVar2);
        }
        *(CPNRouter **)(in_stack_00000004 + 0x20) = pCVar3;
        if (pCVar3 != (CPNRouter *)0x0) {
          CPNRouter::AddObserver(pCVar3,pCVar1,0x80000000,1);
          if ((*(byte *)(in_stack_00000004 + -200) & 1) != 0) {
            pCVar2 = operator_new(0xfb);
            if (pCVar2 == (CPNButton *)0x0) {
              pCVar3 = (CPNRouter *)0x0;
            }
            else {
              pCVar3 = (CPNRouter *)CPNButton::CPNButton(pCVar2);
            }
            *(CPNRouter **)(in_stack_00000004 + 0x24) = pCVar3;
            if (pCVar3 == (CPNRouter *)0x0) goto LAB_6061418b;
            CPNRouter::AddObserver(pCVar3,pCVar1,0x80000000,1);
          }
          local_4 = (**(code **)(*(int *)pCVar1 + 0x11c))();
        }
      }
    }
  }
LAB_6061418b:
  if (*(undefined4 **)(in_stack_00000004 + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_stack_00000004 + 0x14))(1);
    *(undefined4 *)(in_stack_00000004 + 0x14) = 0;
  }
  if (*(undefined4 **)(in_stack_00000004 + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_stack_00000004 + 0x18))(1);
    *(undefined4 *)(in_stack_00000004 + 0x18) = 0;
  }
  if (*(undefined4 **)(in_stack_00000004 + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_stack_00000004 + 0x1c))(1);
    *(undefined4 *)(in_stack_00000004 + 0x1c) = 0;
  }
  if (*(undefined4 **)(in_stack_00000004 + 0x20) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_stack_00000004 + 0x20))(1);
    *(undefined4 *)(in_stack_00000004 + 0x20) = 0;
  }
  if (*(undefined4 **)(in_stack_00000004 + 0x24) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_stack_00000004 + 0x24))(1);
    *(undefined4 *)(in_stack_00000004 + 0x24) = 0;
  }
  return local_4;
}


