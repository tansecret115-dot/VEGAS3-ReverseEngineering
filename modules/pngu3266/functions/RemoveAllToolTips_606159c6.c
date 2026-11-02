/* Module: pngu3266.dll
   Function: RemoveAllToolTips
   Address: 606159c6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNTipManager::RemoveAllToolTips(void) */

void __thiscall XPNTipManager::RemoveAllToolTips(XPNTipManager *this)

{
  undefined4 *puVar1;
  int local_8;
  
                    /* 0x259c6  1758  ?RemoveAllToolTips@XPNTipManager@@UAEXXZ */
  if (*(int *)(this + 8) != 0) {
    local_8 = *(int *)(*(int *)(this + 8) + 4);
    while (local_8 != 0) {
      puVar1 = (undefined4 *)FUN_6061a2c0(&local_8);
      puVar1 = (undefined4 *)*puVar1;
      operator_delete((void *)puVar1[1]);
      operator_delete((void *)*puVar1);
      operator_delete(puVar1);
    }
    (**(code **)(**(int **)(this + 8) + 8))();
  }
  return;
}


