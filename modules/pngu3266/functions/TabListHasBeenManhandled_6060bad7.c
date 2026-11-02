/* Module: pngu3266.dll
   Function: TabListHasBeenManhandled
   Address: 6060bad7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall XPNTabControl::TabListHasBeenManhandled(void) */

void __thiscall XPNTabControl::TabListHasBeenManhandled(XPNTabControl *this)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_8;
  
                    /* 0x1bad7  2085  ?TabListHasBeenManhandled@XPNTabControl@@QAEXXZ */
  local_8 = *(int *)(*(int *)(this + 0xd0) + 4);
  if (local_8 != 0) {
    piVar2 = (int *)FUN_6061a2c0(&local_8);
    iVar1 = *piVar2;
    *(undefined4 *)(this + 0xc0) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(this + 0xc4) = *(undefined4 *)(iVar1 + 4);
  }
  if (*(int *)(this + 0xd0) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(this + 0xd0) + 0x10);
  }
  *(undefined4 *)(this + 0xcc) = uVar3;
  return;
}


