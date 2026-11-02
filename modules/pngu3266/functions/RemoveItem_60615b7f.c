/* Module: pngu3266.dll
   Function: RemoveItem
   Address: 60615b7f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall XPNTreeControl::RemoveItem(unsigned long) */

ulong __thiscall XPNTreeControl::RemoveItem(XPNTreeControl *this,ulong param_1)

{
  void *this_00;
  undefined4 *puVar1;
  XPNTreeControl *local_8;
  
                    /* 0x25b7f  1763  ?RemoveItem@XPNTreeControl@@UAEKK@Z */
  if ((*(void **)(this + 0xc0) != (void *)0x0) &&
     (local_8 = this, FUN_60619b60(*(void **)(this + 0xc0),param_1,&local_8),
     local_8 != (XPNTreeControl *)0x0)) {
    FUN_60619c00(*(void **)(this + 0xc0),param_1);
    if ((*(int *)(local_8 + 8) != 0) &&
       (this_00 = *(void **)(*(int *)(local_8 + 8) + 0xc), this_00 != (void *)0x0)) {
      FUN_60619c00(this_00,param_1);
    }
    if (*(undefined4 **)(local_8 + 0xc) != (undefined4 *)0x0) {
      FUN_60619a50(*(undefined4 **)(local_8 + 0xc));
      puVar1 = *(undefined4 **)(local_8 + 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        thunk_FUN_60619a50(puVar1);
        operator_delete(puVar1);
      }
    }
    if (*(void **)(local_8 + 4) != (void *)0x0) {
      operator_delete(*(void **)(local_8 + 4));
    }
    operator_delete(local_8);
    return 1;
  }
  return 0;
}


