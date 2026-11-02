/* Module: rmto3260.dll
   Function: FUN_662d0100
   Address: 662d0100
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662d0100(void *this,int param_1)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  iVar4 = 0;
  pvVar2 = operator_new(uVar1);
  if (pvVar2 == (void *)0x0) {
    iVar4 = -0x7ff8fff2;
  }
  if (-1 < iVar4) {
    uVar3 = (**(code **)(**(int **)((int)this + 0x24) + 0x28))(pvVar2,uVar1);
    if (uVar3 != uVar1) {
      iVar4 = -0x7ffbff7f;
    }
    if (-1 < iVar4) {
      iVar4 = FUN_662cfc20(this,(int)pvVar2,uVar1);
    }
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  return iVar4;
}


