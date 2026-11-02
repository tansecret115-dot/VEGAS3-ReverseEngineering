/* Module: pngu3266.dll
   Function: RemoveAll
   Address: 6060500e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNTreeControl::RemoveAll(void) */

void __thiscall CPNTreeControl::RemoveAll(CPNTreeControl *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  int local_10;
  int local_c;
  int local_8;
  
  while( true ) {
    local_c = -(uint)(*(int *)((int)*(void **)(this + 0xc0) + 8) != 0);
    if (local_c == 0) break;
    local_8 = 0;
    local_10 = 0;
    FUN_60619c50(*(void **)(this + 0xc0),&local_c,&local_8,&local_10);
    (**(code **)(*(int *)this + 0x184))(local_8);
  }
  FUN_60619a50(*(undefined4 **)(this + 200));
  puVar1 = *(undefined4 **)(this + 200);
  if (puVar1 != (undefined4 *)0x0) {
    thunk_FUN_60619a50(puVar1);
    operator_delete(puVar1);
  }
  puVar1 = *(undefined4 **)(this + 0xc0);
  if (puVar1 != (undefined4 *)0x0) {
    thunk_FUN_60619a50(puVar1);
    operator_delete(puVar1);
  }
  pvVar2 = operator_new(0x18);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_6061ff50(pvVar2,10);
  }
  *(undefined4 *)(this + 200) = uVar3;
  *(undefined4 *)(this + 0xc4) = 1;
  pvVar2 = operator_new(0x18);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_6061ff50(pvVar2,10);
  }
  *(undefined4 *)(this + 0xc0) = uVar3;
  return;
}


