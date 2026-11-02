/* Module: pngu3266.dll
   Function: StopAnimationAtCell
   Address: 6060fc72
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNAnimateCtl::StopAnimationAtCell(unsigned long) */

void __thiscall XPNAnimateCtl::StopAnimationAtCell(XPNAnimateCtl *this,ulong param_1)

{
  uint uVar1;
  int iVar2;
  
                    /* 0x1fc72  2077  ?StopAnimationAtCell@XPNAnimateCtl@@QAEXK@Z */
  if ((param_1 < *(uint *)(this + 0xf7)) && (*(void **)(this + 0xc0) != (void *)0x0)) {
    uVar1 = *(uint *)(this + 0xf3);
    if (param_1 < uVar1) {
      iVar2 = (param_1 - uVar1) + *(uint *)(this + 0xf7);
    }
    else {
      if (param_1 <= uVar1) {
        (**(code **)(*(int *)this + 0x138))();
        return;
      }
      iVar2 = param_1 - uVar1;
    }
    FUN_6060fcb7(*(void **)(this + 0xc0),iVar2);
  }
  return;
}


