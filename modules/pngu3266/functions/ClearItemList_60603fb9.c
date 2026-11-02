/* Module: pngu3266.dll
   Function: ClearItemList
   Address: 60603fb9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x60603fda) */
/* public: virtual void __thiscall CPNCheckedListbox::ClearItemList(void) */

void __thiscall CPNCheckedListbox::ClearItemList(CPNCheckedListbox *this)

{
  undefined4 *puVar1;
  int local_c;
  int local_8;
  
                    /* 0x13fb9  858  ?ClearItemList@CPNCheckedListbox@@UAEXXZ */
  local_8 = *(int *)(this + 0xc0);
  if (local_8 != 0) {
    local_c = *(int *)(local_8 + 4);
    while (local_c != 0) {
      puVar1 = (undefined4 *)FUN_6061a2e0(local_c);
      operator_delete((void *)*puVar1);
      FUN_6061a2c0(&local_c);
    }
    (**(code **)(**(int **)(this + 0xc0) + 8))();
  }
  return;
}


