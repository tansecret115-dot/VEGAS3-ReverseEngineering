/* Module: rmbe3260.dll
   Function: FUN_66010960
   Address: 66010960
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66010960(void *this,int param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  void *local_2c;
  uint local_28;
  void *local_24;
  uint local_20;
  int local_1c;
  undefined4 *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_1c = 0;
  local_14 = (int *)0x0;
  local_24 = this;
  iVar5 = FUN_660130d0(&local_14);
  piVar4 = param_2;
  if (iVar5 < 0) {
    return 0;
  }
  local_10 = (int *)0x0;
  local_8 = (int *)0x0;
  iVar5 = (**(code **)(*local_14 + 0x14))(local_14,param_1,param_2,&local_10);
  if ((-1 < iVar5) && (iVar5 = (**(code **)*local_10)(local_10,&DAT_66065908,&local_8), -1 < iVar5))
  {
    (**(code **)(*local_8 + 0xc))(local_8,&local_28);
    iVar5 = (**(code **)(*local_8 + 0x10))(local_8,&local_2c);
    if (-1 < iVar5) {
      uVar1 = *(uint *)((int)this + 0x100);
      uVar6 = 0;
      if (uVar1 != 0) {
        piVar7 = (int *)((int)this + 0x14);
        do {
          this = local_24;
          if ((param_1 == piVar7[-1]) && (piVar4 == (int *)*piVar7)) break;
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 < uVar1);
      }
      if ((uVar6 < uVar1) && (uVar6 != 0)) {
        local_18 = (undefined4 *)((int)this + uVar6 * 8 + 0xc);
        do {
          if (local_1c != 0) break;
          uVar2 = local_18[-1];
          uVar3 = *local_18;
          local_20 = 0;
          local_24 = (void *)0x0;
          param_2 = (int *)0x0;
          local_c = (int *)0x0;
          iVar5 = (**(code **)(*local_14 + 0x14))(local_14,uVar2,uVar3,&param_2);
          if ((-1 < iVar5) &&
             (iVar5 = (**(code **)*param_2)(param_2,&DAT_66065908,&local_c), -1 < iVar5)) {
            (**(code **)(*local_c + 0xc))(local_c,&local_20);
            iVar5 = (**(code **)(*local_c + 0x10))(local_c,&local_24);
            if (((-1 < iVar5) && (local_20 != local_28)) &&
               ((local_24 == local_2c || ((local_20 < 0x4daa && (local_2c == (void *)0x2)))))) {
              local_1c = 1;
              *param_3 = uVar2;
              param_3[1] = uVar3;
            }
          }
          local_18 = local_18 + -2;
          if (param_2 != (int *)0x0) {
            (**(code **)(*param_2 + 8))(param_2);
            param_2 = (int *)0x0;
          }
          if (local_c != (int *)0x0) {
            (**(code **)(*local_c + 8))(local_c);
          }
        } while (-1 < iVar5);
      }
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
    local_10 = (int *)0x0;
  }
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
  }
  return local_1c;
}


