/* Module: pngu3266.dll
   Function: XPNWizardManager
   Address: 60613d64
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: __thiscall XPNWizardManager::XPNWizardManager(class CPNWindow *,char const *,unsigned
   long) */

XPNWizardManager * __thiscall
XPNWizardManager::XPNWizardManager
          (XPNWizardManager *this,CPNWindow *param_1,char *param_2,ulong param_3)

{
  CPNBitmapImage *this_00;
  int *piVar1;
  int iVar2;
  
                    /* 0x23d64  296  ??0XPNWizardManager@@IAE@PAVCPNWindow@@PBDK@Z */
  CPNDialog::CPNDialog((CPNDialog *)this,0x3e90065,param_1);
  *(undefined ***)(this + 0xd0) = &PTR_LAB_6062ba60;
  FUN_6061a4b0((undefined4 *)(this + 0xd4));
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined ***)this = &_vftable__for__CPNDialog__;
  *(undefined ***)(this + 0xd0) = &_vftable__for__IPNWizardManager__;
  Initialize(this);
  *(ulong *)(this + 8) = param_3;
  if (param_2 != (char *)0x0) {
    this_00 = operator_new(0x33);
    if (this_00 == (CPNBitmapImage *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)CPNBitmapImage::CPNBitmapImage(this_00);
    }
    *(int **)(this + 0x108) = piVar1;
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x1c))(param_2);
      if (iVar2 == 0) {
        if (*(undefined4 **)(this + 0x108) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(this + 0x108))(1);
        }
        *(undefined4 *)(this + 0x108) = 0;
      }
    }
  }
  return this;
}


