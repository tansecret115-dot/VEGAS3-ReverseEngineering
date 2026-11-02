/* Module: pngu3266.dll
   Function: RemoveAllTabs
   Address: 6060ba70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNTabControl::RemoveAllTabs(void) */

void __thiscall XPNTabControl::RemoveAllTabs(XPNTabControl *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int local_8;
  
                    /* 0x1ba70  1754  ?RemoveAllTabs@XPNTabControl@@UAEXXZ */
  *(undefined4 *)(this + 0xc0) = 0xffffffff;
  *(undefined4 *)(this + 0xc4) = 0xffffffff;
  *(undefined4 *)(this + 0xcc) = 0;
  local_8 = *(int *)(*(int *)(this + 0xd0) + 4);
  while (local_8 != 0) {
    puVar2 = (undefined4 *)FUN_6061a2c0(&local_8);
    piVar1 = *(int **)*puVar2;
    if (piVar1 != (int *)0x0) {
      FUN_60618cd0(piVar1);
      operator_delete(piVar1);
    }
  }
  (**(code **)(**(int **)(this + 0xd0) + 8))();
  return;
}


