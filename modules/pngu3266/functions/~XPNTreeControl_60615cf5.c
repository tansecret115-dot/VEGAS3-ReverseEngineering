/* Module: pngu3266.dll
   Function: ~XPNTreeControl
   Address: 60615cf5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual __thiscall XPNTreeControl::~XPNTreeControl(void) */

void __thiscall XPNTreeControl::~XPNTreeControl(XPNTreeControl *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  int local_2c [5];
  int local_18 [3];
  void *local_c;
  
                    /* 0x25cf5  425  ??1XPNTreeControl@@MAE@XZ */
  pvVar2 = *(void **)(this + 0xc0);
  *(undefined ***)this = &_vftable_;
  if (pvVar2 != (void *)0x0) {
    FUN_605f2946(local_18,pvVar2,-(uint)(*(int *)((int)pvVar2 + 8) != 0));
    while( true ) {
      FUN_605f2946(local_2c,*(void **)(this + 0xc0),0);
      pvVar2 = local_c;
      if (local_18[0] == local_2c[0]) break;
      puVar1 = (undefined4 *)((int)local_c + 0xc);
      if (*(undefined4 **)((int)local_c + 0xc) != (undefined4 *)0x0) {
        FUN_60619a50(*(undefined4 **)((int)local_c + 0xc));
        puVar1 = (undefined4 *)*puVar1;
        if (puVar1 != (undefined4 *)0x0) {
          thunk_FUN_60619a50(puVar1);
          operator_delete(puVar1);
        }
      }
      pvVar3 = *(void **)((int)pvVar2 + 4);
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
      operator_delete(pvVar2);
      FUN_60600c0a(local_18);
    }
    FUN_60619a50(*(undefined4 **)(this + 0xc0));
    puVar1 = *(undefined4 **)(this + 0xc0);
    if (puVar1 != (undefined4 *)0x0) {
      thunk_FUN_60619a50(puVar1);
      operator_delete(puVar1);
    }
  }
  CPNControl::~CPNControl((CPNControl *)this);
  return;
}


