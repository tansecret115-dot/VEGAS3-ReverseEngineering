/* Module: pngu3266.dll
   Function: AdjustFirstVisibleTab
   Address: 6060b7a1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* private: void __thiscall XPNTabControl::AdjustFirstVisibleTab(long) */

void __thiscall XPNTabControl::AdjustFirstVisibleTab(XPNTabControl *this,long param_1)

{
  void *this_00;
  undefined4 *puVar1;
  int *piVar2;
  
                    /* 0x1b7a1  790  ?AdjustFirstVisibleTab@XPNTabControl@@AAEXJ@Z */
  this_00 = *(void **)(this + 0xd0);
  if (((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 0x10) != 0)) &&
     (*(int *)(this + 200) != 0)) {
    puVar1 = FUN_6061a410(this_00,param_1);
    piVar2 = (int *)FUN_6061a2e0((int)puVar1);
    *(undefined4 *)(this + 0xc4) = *(undefined4 *)(*piVar2 + 4);
    (**(code **)(*(int *)this + 0x78))(0,1);
  }
  return;
}


