/* Module: pngu3266.dll
   Function: Create
   Address: 60610bd8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNMenuButton::Create(unsigned long,unsigned long,class CPNWindow
   *,long,long,long,long,unsigned long,unsigned long,char const *) */

int __thiscall
XPNMenuButton::Create
          (XPNMenuButton *this,ulong param_1,ulong param_2,CPNWindow *param_3,long param_4,
          long param_5,long param_6,long param_7,ulong param_8,ulong param_9,char *param_10)

{
  int iVar1;
  CPNMenu *this_00;
  int *piVar2;
  int iVar3;
  
                    /* 0x20bd8  925  ?Create@XPNMenuButton@@UAEHKKPAVCPNWindow@@JJJJKKPBD@Z */
  *(ulong *)(this + 0xdc) = param_9;
  iVar1 = XPNControl::Create((XPNControl *)this,param_1,param_3,param_4,param_5,param_6,param_7,
                             param_8 | 0x10000000,param_10,0);
  *(ulong *)(this + 0xc4) = param_2;
  this_00 = operator_new(0x1c);
  if (this_00 == (CPNMenu *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)CPNMenu::CPNMenu(this_00);
  }
  *(int **)(this + 0xc0) = piVar2;
  if ((param_9 & 2) == 0) {
    iVar3 = (**(code **)(*piVar2 + 0xc))(param_2);
  }
  else {
    iVar3 = (**(code **)(*piVar2 + 0x1c))();
  }
  if ((iVar1 == 0) || (iVar3 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


