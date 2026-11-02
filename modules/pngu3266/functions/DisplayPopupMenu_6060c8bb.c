/* Module: pngu3266.dll
   Function: DisplayPopupMenu
   Address: 6060c8bb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall XPNButton::DisplayPopupMenu(void) */

int __thiscall XPNButton::DisplayPopupMenu(XPNButton *this)

{
  int iVar1;
  undefined4 local_1c [3];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x1c8bb  962  ?DisplayPopupMenu@XPNButton@@QAEHXZ */
  iVar1 = *(int *)(this + 0xd0);
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x3c))(local_1c);
    (**(code **)(*(int *)this + 0x5c))(local_1c);
    local_c = local_1c[0];
    local_8 = local_10;
    (**(code **)(**(int **)(this + 0xd0) + 0x20))(0x452,&local_c,this,local_1c);
  }
  return (uint)(iVar1 != 0);
}


