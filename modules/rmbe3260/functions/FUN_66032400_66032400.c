/* Module: rmbe3260.dll
   Function: FUN_66032400
   Address: 66032400
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66032400(void *this,undefined4 param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  iVar1 = (**(code **)(**(int **)((int)this + 0xbc) + 8))
                    (*(int **)((int)this + 0xbc),param_1,param_2);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(**(int **)((int)this + 0xbc) + 0xc))(*(int **)((int)this + 0xbc),&param_2);
    if (-1 < iVar1) {
      pvVar2 = operator_new(param_2);
      if (pvVar2 == (void *)0x0) {
        iVar1 = -0x7ff8fff2;
      }
      if (-1 < iVar1) {
        iVar1 = (**(code **)(**(int **)((int)this + 0xbc) + 0x10))
                          (*(int **)((int)this + 0xbc),pvVar2,param_2,&param_1);
        if (-1 < iVar1) {
          iVar1 = (**(code **)(*(int *)this + 0x38))(pvVar2,param_1);
        }
      }
    }
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  return iVar1;
}


