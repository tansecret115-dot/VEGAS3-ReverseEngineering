/* Module: rmbe3260.dll
   Function: FUN_66002570
   Address: 66002570
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_66002570(void *this,int param_1,int param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_17c;
  undefined4 local_17b [87];
  int local_1c [3];
  int local_10;
  undefined4 uStack_c;
  int local_8;
  
  FUN_660145d0(&local_8);
  local_17c = DAT_66075004;
  puVar4 = local_17b;
  for (iVar3 = 0x57; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar3 = *(int *)((int)this + 0x406);
  *(undefined1 *)puVar4 = 0;
  FUN_66014730(&local_8,*(undefined4 **)(iVar3 + param_2 * 4));
  bVar1 = FUN_66014680(&local_8);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    piVar2 = (int *)FUN_660145e0(&local_8);
    (**(code **)(*piVar2 + 0x1c))(piVar2,&local_17c,0x15e);
    (**(code **)(**(int **)((int)this + param_1 * 4 + 0x162) + 0x11c))(&local_17c);
    param_2 = 0;
    piVar2 = (int *)FUN_660145e0(&local_8);
    (**(code **)(*piVar2 + 0x20))(piVar2,&param_2);
    FUN_6605b650(local_1c);
    uStack_c = 0;
    local_10 = param_2;
    FUN_6605bfd0(local_1c,s___1f_kHz_6606c1a4);
    (**(code **)(**(int **)((int)this + param_1 * 4 + 0x172) + 0x11c))();
    FUN_6605b770(local_1c);
  }
  thunk_FUN_66014790(&local_8);
  return;
}


