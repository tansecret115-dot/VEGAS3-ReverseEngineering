/* Module: auth3260.dll
   Function: FUN_627a18f0
   Address: 627a18f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_627a18f0(void *this,int *param_1)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *local_8;
  int iVar3;
  
  local_8 = this;
  if ((param_1 != (int *)((int)this + 0xc)) && (param_1 != this)) {
    FUN_627a19b0(&local_8);
    FUN_627a19e0(&local_8,&param_1);
    bVar2 = FUN_627a1a40((int *)&local_8,(int *)&stack0x00000008);
    iVar3 = CONCAT31(extraout_var,bVar2);
    piVar1 = local_8;
    while (local_8 = piVar1, iVar3 != 0) {
      FUN_627a1a00((int *)&local_8);
      FUN_627a1740((int)piVar1);
      if (piVar1 != (int *)0x0) {
        FUN_627a1720(piVar1);
        operator_delete(piVar1);
      }
      bVar2 = FUN_627a1a40((int *)&local_8,(int *)&stack0x00000008);
      piVar1 = local_8;
      iVar3 = CONCAT31(extraout_var_00,bVar2);
    }
    FUN_627a19d0();
  }
  FUN_627a19d0();
  FUN_627a19d0();
  return;
}


