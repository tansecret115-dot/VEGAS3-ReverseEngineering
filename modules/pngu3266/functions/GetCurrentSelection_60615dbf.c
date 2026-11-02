/* Module: pngu3266.dll
   Function: GetCurrentSelection
   Address: 60615dbf
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall XPNTreeControl::GetCurrentSelection(void)const  */

ulong __thiscall XPNTreeControl::GetCurrentSelection(XPNTreeControl *this)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  
                    /* 0x25dbf  1168  ?GetCurrentSelection@XPNTreeControl@@UBEKXZ */
  iVar1 = (**(code **)(*(int *)this + 0x174))();
  puVar2 = operator_new(iVar1 << 2);
  iVar1 = (**(code **)(*(int *)this + 0x17c))(puVar2,iVar1);
  if (iVar1 == 0) {
    operator_delete(puVar2);
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *puVar2;
    operator_delete(puVar2);
  }
  return uVar3;
}


