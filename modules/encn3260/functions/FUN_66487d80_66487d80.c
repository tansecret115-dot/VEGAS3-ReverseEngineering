/* Module: encn3260.dll
   Function: FUN_66487d80
   Address: 66487d80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_66487d80(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5)

{
  bool bVar1;
  int *piVar2;
  int local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0x152) != 0) {
    return 0;
  }
  (**(code **)(**(int **)((int)this + 0x1a0) + 4))();
  if (param_1 == 0) {
    piVar2 = FUN_664bbe00(*(void **)((int)this + 0x136),param_5 & 0xffff);
    piVar2 = (int *)*piVar2;
    bVar1 = false;
    if (piVar2 == (int *)0x0) {
      piVar2 = FUN_664bbe00(*(void **)((int)this + 0x13a),param_5 & 0xffff);
      piVar2 = (int *)*piVar2;
      bVar1 = true;
      if (piVar2 == (int *)0x0) goto LAB_66487e63;
    }
    local_8 = (**(code **)(*piVar2 + 0x34))(param_2);
    if (*(int *)((int)this + 0x1aa) != 0) {
      (**(code **)(*piVar2 + 0x38))();
    }
    if (local_8 == 0) {
      if (bVar1) {
        piVar2 = (int *)(**(code **)(*piVar2 + 0x44))();
        local_8 = (**(code **)(*piVar2 + 0x14))(piVar2,0x1000);
      }
      else {
        piVar2 = (int *)(**(code **)(*piVar2 + 0x40))();
        local_8 = (**(code **)(*piVar2 + 0x14))(piVar2,0x1000);
      }
    }
  }
  else {
    local_8 = (**(code **)(*(int *)((int)this + 0x34) + 0xc))
                        ((int)this + 0x34,0x80004005,*(undefined4 *)((int)this + 0xe6),0);
  }
LAB_66487e63:
  (**(code **)(**(int **)((int)this + 0x1a0) + 8))();
  return local_8;
}


