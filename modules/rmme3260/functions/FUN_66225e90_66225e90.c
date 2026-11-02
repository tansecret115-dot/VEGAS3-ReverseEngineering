/* Module: rmme3260.dll
   Function: FUN_66225e90
   Address: 66225e90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_66225e90(void *this,undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)0x0;
  iVar1 = (**(code **)(**(int **)((int)this + 0x178) + 0x14))
                    (*(int **)((int)this + 0x178),param_1,param_2,param_3);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(**(int **)((int)this + 0x178) + 0x18))
                      (*(int **)((int)this + 0x178),&param_3);
    if (-1 < iVar1) {
      pvVar2 = operator_new(param_3);
      if (pvVar2 == (void *)0x0) {
        iVar1 = -0x7ff8fff2;
      }
      if (-1 < iVar1) {
        iVar1 = (**(code **)(**(int **)((int)this + 0x178) + 0x1c))
                          (*(int **)((int)this + 0x178),pvVar2,param_3,&param_2);
        if (-1 < iVar1) {
          *param_4 = pvVar2;
          *param_5 = param_2;
          return iVar1;
        }
      }
    }
  }
  operator_delete(pvVar2);
  *param_4 = 0;
  *param_5 = 0;
  return iVar1;
}


