/* Module: encn3260.dll
   Function: FUN_664a38c0
   Address: 664a38c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_664a38c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char local_10c [256];
  int *local_c;
  int *local_8;
  
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  uVar2 = 0;
  iVar1 = (**(code **)**(undefined4 **)((int)this + 0x28))
                    (*(undefined4 **)((int)this + 0x28),&DAT_664dcb00,&local_8);
  if (iVar1 == 0) {
    sprintf(local_10c,s__s__s__dx_dx_d_664e3344,s_FullScreenData_664e3274,s_AvailiableModes_664e3354
            ,param_1,param_2,param_3);
    iVar1 = (**(code **)(*local_8 + 0xc))(local_8,local_10c,&local_c);
    if (iVar1 == 0) {
      uVar2 = 1;
      if (local_c != (int *)0x0) {
        (**(code **)(*local_c + 8))(local_c);
        local_c = (int *)0x0;
      }
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return uVar2;
}


