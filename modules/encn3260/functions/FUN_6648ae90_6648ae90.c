/* Module: encn3260.dll
   Function: FUN_6648ae90
   Address: 6648ae90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648ae90(void *this,int param_1)

{
  int *this_00;
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined4 local_10;
  int local_8;
  
  (**(code **)(**(int **)((int)this + 0x20) + 4))();
  local_8 = *(int *)((int)this + 0xc);
  local_10 = 0x80004005;
  if (local_8 != 0) {
    do {
      puVar2 = (undefined4 *)FUN_664bab80(local_8);
      this_00 = (int *)*puVar2;
      iVar3 = FUN_6648bc50(this_00,param_1);
      if (iVar3 == 0) {
        bVar1 = FUN_6648bcf0((int)this_00);
        if (CONCAT31(extraout_var,bVar1) != 0) {
          FUN_6648b480((int)this_00);
          (**(code **)(*this_00 + 8))(this_00);
          (**(code **)(*(int *)((int)this + 8) + 0xc))(local_8);
        }
        local_10 = 0;
        break;
      }
      FUN_664bab40(&local_8);
    } while (local_8 != 0);
  }
  (**(code **)(**(int **)((int)this + 0x20) + 8))();
  return local_10;
}


