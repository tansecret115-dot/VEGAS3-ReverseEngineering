/* Module: auth3260.dll
   Function: FUN_627a2860
   Address: 627a2860
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_627a2860(int param_1)

{
  void *this;
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar4;
  undefined3 extraout_var_01;
  uint uVar5;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_18 = -0x7fffbffb;
  if (*(int *)(param_1 + 0x28) != 0) {
    this = (void *)(param_1 + 0x44);
    piVar2 = FUN_627a1880(this,&local_10);
    piVar3 = FUN_627a1860(this,&local_14);
    bVar1 = FUN_627a1a20(piVar3,piVar2);
    FUN_627a19d0();
    FUN_627a19d0();
    if (CONCAT31(extraout_var,bVar1) != 0) {
      FUN_627a19b0(&local_14);
      FUN_627a19b0(&local_c);
      FUN_627a19b0(&local_10);
      uVar5 = 0;
      local_8 = (int *)0x0;
      FUN_627a60a0(&local_c,*(undefined4 **)(param_1 + 0x28));
      bVar1 = FUN_627a5f40(&local_c);
      if (CONCAT31(extraout_var_00,bVar1) != 0) {
        piVar2 = (int *)FUN_627a6140(&local_c);
        uVar4 = (**(code **)(*piVar2 + 0xc))();
        if (uVar4 != 0) {
          do {
            if (local_8 != (int *)0x0) {
              (**(code **)(*local_8 + 8))();
              local_8 = (int *)0x0;
            }
            piVar2 = (int *)FUN_627a6140(&local_c);
            (**(code **)(*piVar2 + 0x10))(piVar2);
            FUN_627a5fe0(&local_14,local_8);
            bVar1 = FUN_627a5f40(&local_14);
            if (CONCAT31(extraout_var_01,bVar1) != 0) {
              FUN_627a5f10(&local_10,local_8);
              piVar2 = (int *)FUN_627a6140(&local_10);
              (**(code **)(*piVar2 + 0xc))();
              FUN_627a5f80(&local_18,&local_8);
              piVar2 = &local_18;
              piVar3 = piVar2;
              FUN_627a1880(this,&stack0xffffffc8);
              FUN_627a18a0(local_1c,piVar2,piVar3);
              FUN_627a19d0();
              thunk_FUN_627a6080(&local_18);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar4);
        }
        local_18 = 0;
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))();
        local_8 = (int *)0x0;
      }
      thunk_FUN_627a6080(&local_10);
      thunk_FUN_627a6080(&local_c);
      thunk_FUN_627a6080(&local_14);
    }
  }
  return local_18;
}


