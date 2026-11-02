/* Module: rmbe3260.dll
   Function: FUN_66009e60
   Address: 66009e60
   Source: Ghidra pseudocode (Stage 10 batch) */


XPNWizardPage * __thiscall
FUN_66009e60(void *this,ulong param_1,char *param_2,int *param_3,undefined4 param_4)

{
  XPNWizardPage::XPNWizardPage(this,param_1,param_2);
  *(undefined ***)this = &PTR_FUN_66064208;
  *(undefined ***)((int)this + 0xd0) = &PTR_LAB_660641b8;
  *(undefined ***)((int)this + 0xd4) = &PTR_LAB_660641a0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  FUN_6605b7e0((void *)((int)this + 0x100),"RealProducer");
  FUN_6605b650((undefined4 *)((int)this + 0x10c));
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = param_4;
  *(undefined ***)this = &PTR_FUN_660643c0;
  *(undefined ***)((int)this + 0xd0) = &PTR_LAB_66064370;
  *(undefined ***)((int)this + 0xd4) = &PTR_LAB_66064358;
  if (param_3 != (int *)0x0) {
    *(int **)((int)this + 0x118) = param_3;
    (**(code **)(*param_3 + 4))(param_3);
    return this;
  }
  *(undefined4 *)((int)this + 0x118) = 0;
  return this;
}


