/* Module: rmme3260.dll
   Function: FUN_66225de0
   Address: 66225de0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66225de0(void *this,int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  pvVar3 = (void *)0x0;
  iVar1 = (**(code **)(**(int **)((int)this + 0x178) + 8))
                    (*(int **)((int)this + 0x178),param_1,param_2);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(**(int **)((int)this + 0x178) + 0xc))
                      (*(int **)((int)this + 0x178),&param_2);
    if (-1 < iVar1) {
      pvVar3 = operator_new(param_2);
      if (pvVar3 == (void *)0x0) {
        iVar1 = -0x7ff8fff2;
      }
      if (-1 < iVar1) {
        iVar1 = (**(code **)(**(int **)((int)this + 0x178) + 0x10))
                          (*(int **)((int)this + 0x178),pvVar3,param_2,&param_1);
        if (-1 < iVar1) {
          iVar2 = (**(code **)(**(int **)((int)this + 0x142) + 0x30))(pvVar3,param_1);
          if (iVar2 != param_1) {
            iVar1 = (**(code **)(**(int **)((int)this + 0x142) + 4))();
          }
        }
      }
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  return iVar1;
}


