/* Module: encn3260.dll
   Function: FUN_664ab800
   Address: 664ab800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664ab800(void *this,int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int local_8;
  
  local_8 = *(int *)((int)this + 0x9c);
  if (local_8 != 0) {
    do {
      puVar2 = (undefined4 *)FUN_664bab80(local_8);
      pvVar1 = (void *)*puVar2;
      if (*(int *)((int)pvVar1 + 4) == param_1) {
        local_8 = (**(code **)(*(int *)((int)this + 0x98) + 0xc))(local_8);
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
        }
      }
      else {
        FUN_664bab40(&local_8);
      }
    } while (local_8 != 0);
  }
  return;
}


