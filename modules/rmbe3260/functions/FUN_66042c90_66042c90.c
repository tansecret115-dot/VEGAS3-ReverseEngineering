/* Module: rmbe3260.dll
   Function: FUN_66042c90
   Address: 66042c90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66042c90(void *this,int *param_1,uint param_2)

{
  int *piVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = 0;
  pvVar3 = operator_new(0x14);
  piVar1 = param_1;
  *(void **)((int)this + 0xc) = pvVar3;
  if (pvVar3 != (void *)0x0) {
    if (1 < (uint)param_1[5]) {
      if (param_2 == param_1[5]) {
        iVar4 = *param_1;
      }
      else {
        iVar4 = param_1[param_2 * 2 + 7];
      }
      bVar2 = FUN_66042df0(this,(iVar4 - param_1[param_2 * 2 + 5]) + 0x20);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        operator_delete(*(void **)((int)this + 0xc));
        *(undefined4 *)((int)this + 0xc) = 0;
        iVar6 = -0x7ff8fff2;
      }
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar5 = (**(code **)(**(int **)((int)this + 4) + 0xc))(&param_1);
    *(undefined4 *)(*(int *)((int)this + 0xc) + 4) = uVar5;
    if (*(int *)(*(int *)((int)this + 0xc) + 4) != 0) {
      *(undefined2 *)(*(int *)((int)this + 0xc) + 0xc) = *(undefined2 *)((int)this + 0x24);
      *(short *)((int)this + 0x24) = *(short *)((int)this + 0x24) + 1;
      *(int *)(*(int *)((int)this + 0xc) + 8) = piVar1[2];
      *(undefined2 *)(*(int *)((int)this + 0xc) + 0xe) = *(undefined2 *)((int)piVar1 + 0xe);
      *(undefined4 *)(*(int *)((int)this + 0xc) + 0x10) = 0;
      **(undefined4 **)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x14);
      uVar5 = *(undefined4 *)(*(int *)((int)this + 0xc) + 4);
      *(undefined4 *)((int)this + 0x20) = 0;
      *(undefined4 *)((int)this + 0x1c) = uVar5;
      return 0;
    }
  }
  return -0x7ff8fff2;
}


