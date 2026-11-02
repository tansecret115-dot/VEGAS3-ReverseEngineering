/* Module: rmto3260.dll
   Function: FUN_662d5110
   Address: 662d5110
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d5110(int *param_1,char *param_2)

{
  int *this;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 local_28 [3];
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  this = param_1;
  piVar3 = (int *)0x0;
  local_c = 0;
  local_1c = 0;
  local_18 = 0;
  iVar1 = FUN_662d5480(param_1,param_2,&local_c,0,0);
  puVar2 = operator_new(0x2c);
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = FUN_662d7830(puVar2);
  }
  if (piVar3 == (int *)0x0) {
    iVar1 = -0x7ff8fff2;
  }
  if (-1 < iVar1) {
    iVar1 = (**(code **)*piVar3)(piVar3,200);
  }
  if ((-1 < iVar1) && (local_c != 0)) {
    param_1 = (int *)0x0;
    local_8 = 0;
    local_14 = operator_new(0x7990);
    iVar1 = (**(code **)(*this + 0x14))(this,local_28,local_14,0x7990,&local_10);
    while (iVar1 == 0) {
      local_8 = local_8 + local_10;
      param_1 = (int *)((int)param_1 + 1);
      (**(code **)(*piVar3 + 0xc))(piVar3,local_28[0],local_10);
      iVar1 = (**(code **)(*this + 0x14))(this,local_28,local_14,0x7990,&local_10);
    }
    if (local_14 != (void *)0x0) {
      operator_delete(local_14);
    }
    if (iVar1 == -0x7ffbfc36) {
      iVar1 = 0;
    }
    if ((((-1 < iVar1) && (iVar1 = (**(code **)(*piVar3 + 8))(piVar3), -1 < iVar1)) &&
        (iVar1 = (**(code **)(*piVar3 + 0x14))(piVar3,&local_1c), -1 < iVar1)) &&
       (iVar1 = (**(code **)(*piVar3 + 0x10))(piVar3,&local_18), -1 < iVar1)) {
      if (param_1 == (int *)0x0) {
        this[5] = 0;
      }
      else {
        this[5] = local_8 / (uint)param_1;
      }
    }
    if (piVar3 != (int *)0x0) {
      FUN_662d7850(piVar3);
      operator_delete(piVar3);
    }
    FUN_662d5720((int)this);
    if (-1 < iVar1) {
      iVar1 = FUN_662d5480(this,param_2,&local_c,local_1c,local_18);
    }
  }
  return iVar1;
}


