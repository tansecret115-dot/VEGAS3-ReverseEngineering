/* Module: pngu3266.dll
   Function: ~CPNTreeControl
   Address: 60604be2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNTreeControl::~CPNTreeControl(void) */

void __thiscall CPNTreeControl::~CPNTreeControl(CPNTreeControl *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  int local_2c [5];
  int local_18 [3];
  int local_c;
  
                    /* 0x14be2  371  ??1CPNTreeControl@@UAE@XZ */
  pvVar2 = *(void **)(this + 200);
  *(undefined ***)this = &_vftable_;
  if (pvVar2 != (void *)0x0) {
    FUN_605f2946(local_18,pvVar2,-(uint)(*(int *)((int)pvVar2 + 8) != 0));
    while( true ) {
      FUN_605f2946(local_2c,*(void **)(this + 200),0);
      if (local_18[0] == local_2c[0]) break;
      puVar1 = (undefined4 *)(local_c + 0x10);
      if (*(void **)(local_c + 0x10) != (void *)0x0) {
        operator_delete(*(void **)(local_c + 0x10));
        *puVar1 = 0;
      }
      FUN_60600c0a(local_18);
    }
    FUN_60619a50(*(undefined4 **)(this + 200));
    puVar1 = *(undefined4 **)(this + 200);
    if (puVar1 != (undefined4 *)0x0) {
      thunk_FUN_60619a50(puVar1);
      operator_delete(puVar1);
    }
    *(undefined4 *)(this + 200) = 0;
  }
  XPNTreeControl::~XPNTreeControl((XPNTreeControl *)this);
  return;
}


