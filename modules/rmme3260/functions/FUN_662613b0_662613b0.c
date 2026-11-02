/* Module: rmme3260.dll
   Function: FUN_662613b0
   Address: 662613b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662613b0(void *this,undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined3 extraout_var;
  undefined1 local_20 [8];
  undefined4 local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_18 = 0;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_10 = (int *)0x0;
  local_14 = (int *)0x0;
  iVar4 = (**(code **)*param_1)(param_1,&DAT_6626ab58,&local_8);
  if (((iVar4 == 0) && (iVar4 = (**(code **)*param_1)(param_1,&DAT_6626a598,&local_c), iVar4 == 0))
     && (iVar4 = (**(code **)*local_8)(local_8,&DAT_6626a598,&local_10), iVar4 == 0)) {
    puVar5 = (undefined4 *)
             (**(code **)(**(int **)((int)this + 0x4c) + 0x18))
                       (*(int **)((int)this + 0x4c),local_20);
    uVar1 = puVar5[1];
    uVar2 = *puVar5;
    iVar4 = (**(code **)(*local_8 + 0xc))(local_8,uVar2,uVar1,&local_14);
    if ((iVar4 == 0) && (local_c == local_10)) {
      pcVar6 = (char *)(**(code **)(*local_14 + 0x1c))(local_14);
      uVar3 = FUN_662665e0(param_2,uVar2,uVar1,"5281112705689675123",local_c,
                           "Copyright(c) RealNetworks, Inc 1995-1998",pcVar6);
      if (CONCAT31(extraout_var,uVar3) != 0) {
        local_18 = 1;
      }
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
    local_10 = (int *)0x0;
  }
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
  }
  return local_18;
}


