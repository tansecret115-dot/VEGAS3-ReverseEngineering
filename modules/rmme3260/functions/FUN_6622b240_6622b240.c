/* Module: rmme3260.dll
   Function: FUN_6622b240
   Address: 6622b240
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6622b240(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int local_10;
  uint local_c;
  void *local_8;
  
  piVar3 = (int *)0x0;
  local_c = 0;
  local_10 = 0;
  local_8 = (void *)0x0;
  iVar1 = (**(code **)(**(int **)((int)this + 0x178) + 8))
                    (*(int **)((int)this + 0x178),param_1,param_2);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(**(int **)((int)this + 0x178) + 0xc))
                      (*(int **)((int)this + 0x178),&local_c);
    if (-1 < iVar1) {
      local_8 = operator_new(local_c);
      if (local_8 == (void *)0x0) {
        iVar1 = -0x7ff8fff2;
      }
      if (-1 < iVar1) {
        iVar1 = (**(code **)(**(int **)((int)this + 0x178) + 0x10))
                          (*(int **)((int)this + 0x178),local_8,local_c,&local_10);
        if (-1 < iVar1) {
          puVar2 = operator_new(0x28);
          if (puVar2 != (undefined4 *)0x0) {
            piVar3 = (int *)FUN_662522d0(puVar2);
          }
          (**(code **)(*piVar3 + 4))(piVar3);
          (**(code **)(*piVar3 + 0x10))(piVar3,local_8,local_10);
          *(int *)((int)this + 0x18c) = *(int *)((int)this + 0x18c) + local_10;
          (**(code **)(**(int **)((int)this + 0x184) + 0x1c))(*(int **)((int)this + 0x184),piVar3);
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))(piVar3);
          }
        }
      }
    }
  }
  if (local_8 != (void *)0x0) {
    operator_delete(local_8);
  }
  return iVar1;
}


