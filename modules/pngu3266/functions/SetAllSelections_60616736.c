/* Module: pngu3266.dll
   Function: SetAllSelections
   Address: 60616736
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNListBox::SetAllSelections(int) */

void __thiscall XPNListBox::SetAllSelections(XPNListBox *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x26736  1815  ?SetAllSelections@XPNListBox@@QAEXH@Z */
  iVar3 = (**(code **)(*(int *)this + 0x130))();
  iVar1 = iVar3 + -1;
  while (iVar2 = iVar1, iVar3 != 0) {
    iVar1 = iVar2 + -1;
    (**(code **)(*(int *)this + 0x140))(iVar1,param_1);
    iVar3 = iVar2;
  }
  return;
}


