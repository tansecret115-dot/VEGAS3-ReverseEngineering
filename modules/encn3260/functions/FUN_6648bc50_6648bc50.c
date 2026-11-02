/* Module: encn3260.dll
   Function: FUN_6648bc50
   Address: 6648bc50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648bc50(void *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 local_10;
  int local_8;
  
  (**(code **)(**(int **)((int)this + 0x6e) + 4))();
  local_8 = *(int *)((int)this + 0x44);
  local_10 = 0x80004005;
  if (local_8 != 0) {
    do {
      puVar2 = (undefined4 *)FUN_664bab80(local_8);
      piVar1 = (int *)*puVar2;
      if (*piVar1 == param_1) {
        if (piVar1 != (int *)0x0) {
          thunk_FUN_664bbcb0(piVar1 + 6);
          FUN_664ba950(piVar1 + 1);
          operator_delete(piVar1);
        }
        (**(code **)(*(int *)((int)this + 0x40) + 0xc))(local_8);
        local_10 = 0;
        break;
      }
      FUN_664bab40(&local_8);
    } while (local_8 != 0);
  }
  (**(code **)(**(int **)((int)this + 0x6e) + 8))();
  return local_10;
}


