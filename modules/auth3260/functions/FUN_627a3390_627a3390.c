/* Module: auth3260.dll
   Function: FUN_627a3390
   Address: 627a3390
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_627a3390(int param_1,undefined4 param_2)

{
  void *this;
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined3 extraout_var;
  undefined4 *puVar4;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar5;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  int local_8;
  
  this = (void *)(param_1 + 0x24);
  piVar2 = FUN_627a1880(this,local_10);
  piVar3 = FUN_627a1860(this,local_c);
  bVar1 = FUN_627a1a20(piVar3,piVar2);
  FUN_627a19d0();
  FUN_627a19d0();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    return -0x7ffbfff7;
  }
  FUN_627a19b0(&local_8);
  FUN_627a19b0(&param_1);
  iVar5 = -0x7fffbffb;
  puVar4 = FUN_627a1860(this,local_10);
  FUN_627a19e0(&param_1,puVar4);
  FUN_627a19d0();
  while( true ) {
    piVar2 = FUN_627a1880(this,local_10);
    bVar1 = FUN_627a1a40(&param_1,piVar2);
    if ((CONCAT31(extraout_var_00,bVar1) == 0) || (-1 < iVar5)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    FUN_627a19d0();
    if (!bVar1) break;
    puVar4 = (undefined4 *)FUN_627a19f0(&param_1);
    puVar4 = (undefined4 *)FUN_627a6140(puVar4);
    FUN_627a6100(&local_8,puVar4);
    FUN_627a1a00(&param_1);
    bVar1 = FUN_627a6130(&local_8);
    if (CONCAT31(extraout_var_01,bVar1) == 0) {
      piVar2 = (int *)FUN_627a6140(&local_8);
      iVar5 = (**(code **)(*piVar2 + 0xc))(piVar2,param_2);
    }
    else {
      iVar5 = -0x7fffbffe;
    }
  }
  FUN_627a19d0();
  thunk_FUN_627a6080(&local_8);
  return iVar5;
}


