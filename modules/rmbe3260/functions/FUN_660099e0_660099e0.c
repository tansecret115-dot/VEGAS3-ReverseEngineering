/* Module: rmbe3260.dll
   Function: FUN_660099e0
   Address: 660099e0
   Source: Ghidra pseudocode (Stage 10 batch) */


XPNWizardPage * __thiscall
FUN_660099e0(void *this,ulong param_1,char *param_2,int *param_3,undefined4 param_4)

{
  XPNWizardPage::XPNWizardPage(this,param_1,param_2);
  *(undefined ***)this = &PTR_FUN_66064208;
  *(undefined ***)((int)this + 0xd0) = &PTR_LAB_660641b8;
  *(undefined ***)((int)this + 0xd4) = &PTR_LAB_660641a0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  FUN_6605b7e0((void *)((int)this + 0xfc),"RealProducer");
  *(undefined4 *)((int)this + 0x10c) = param_4;
  *(undefined ***)this = &PTR_FUN_66064050;
  *(undefined ***)((int)this + 0xd0) = &PTR_LAB_66064000;
  *(undefined ***)((int)this + 0xd4) = &PTR_LAB_66063fe8;
  if (param_3 != (int *)0x0) {
    *(int **)((int)this + 0x108) = param_3;
    (**(code **)(*param_3 + 4))(param_3);
    return this;
  }
  *(undefined4 *)((int)this + 0x108) = 0;
  return this;
}


