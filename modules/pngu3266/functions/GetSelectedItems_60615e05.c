/* Module: pngu3266.dll
   Function: GetSelectedItems
   Address: 60615e05
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall XPNTreeControl::GetSelectedItems(unsigned long
   *,unsigned int)const  */

ulong __thiscall XPNTreeControl::GetSelectedItems(XPNTreeControl *this,ulong *param_1,uint param_2)

{
  ulong uVar1;
  int iVar2;
  uint local_8;
  
                    /* 0x25e05  1345  ?GetSelectedItems@XPNTreeControl@@UBEKPAKI@Z */
  uVar1 = (**(code **)(*(int *)this + 0x178))();
  local_8 = 0;
  do {
    if (uVar1 == 0) {
      return local_8;
    }
    iVar2 = (**(code **)(*(int *)this + 300))(uVar1);
    if (iVar2 != 0) {
      local_8 = local_8 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
      if (param_2 < local_8) {
        return param_2;
      }
    }
    uVar1 = uVar1 - 1;
  } while( true );
}


