/* Module: pngu3266.dll
   Function: SetCurrentCell
   Address: 6060f9c9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNAnimateCtl::SetCurrentCell(unsigned long,int) */

int __thiscall XPNAnimateCtl::SetCurrentCell(XPNAnimateCtl *this,ulong param_1,int param_2)

{
  uint uVar1;
  
                    /* 0x1f9c9  1878  ?SetCurrentCell@XPNAnimateCtl@@UAEHKH@Z */
  uVar1 = *(uint *)(this + 0xf7);
  if (param_1 < uVar1) {
    *(ulong *)(this + 0xf3) = param_1;
    (**(code **)(*(int *)this + 0x78))(0,param_2);
  }
  return (uint)(param_1 < uVar1);
}


