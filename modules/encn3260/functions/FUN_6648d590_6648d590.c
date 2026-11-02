/* Module: encn3260.dll
   Function: FUN_6648d590
   Address: 6648d590
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_6648d590(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void *this_00;
  int iVar4;
  
  piVar3 = param_1;
  this_00 = (void *)FUN_6648dfd0(this,(uint)param_1);
  if (this_00 == (void *)0x0) {
    return -0x7fffbffb;
  }
  iVar4 = FUN_664952a0(this_00,&param_1);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*param_1 + 0xc))();
    piVar2 = param_2;
    *param_2 = iVar4;
    if (iVar4 == 0) {
      iVar4 = (**(code **)(**(int **)((int)this + 0xc) + 0xc))
                        (*(int **)((int)this + 0xc),&DAT_664dcf70,param_2);
      if (iVar4 != 0) {
        return iVar4;
      }
      piVar1 = (int *)*piVar2;
      (**(code **)(*piVar1 + 0x2c))(piVar1,0,0,piVar3,0,0);
      piVar2 = (int *)*piVar2;
      (**(code **)(*piVar2 + 0x28))(piVar2);
    }
    piVar3 = param_1;
    if (param_1 != (int *)0x0) {
      *param_1 = (int)&PTR_FUN_664dc580;
      piVar2 = (int *)param_1[7];
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      operator_delete(piVar3);
    }
    iVar4 = 0;
  }
  return iVar4;
}


