/* Module: auth3260.dll
   Function: FUN_627a3ee0
   Address: 627a3ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_627a3ee0(void *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int **ppiVar7;
  undefined1 local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  if (*(int *)((int)param_1 + 0x2c) != 0) {
    bVar1 = FUN_627a5f40((int *)((int)param_1 + 0x30));
    if (CONCAT31(extraout_var,bVar1) != 0) {
      FUN_627a19b0(&local_14);
      FUN_627a19b0(&local_10);
      FUN_627a19b0(&local_c);
      FUN_627a19b0(&local_18);
      local_8 = (int *)0x0;
      piVar2 = (int *)FUN_627a6140((int *)((int)param_1 + 0x30));
      iVar3 = *piVar2;
      FUN_627a17b0(&local_18);
      iVar3 = (**(code **)(iVar3 + 0x30))();
      if (-1 < iVar3) {
        piVar2 = (int *)FUN_627a6140(&local_18);
        piVar4 = (int *)FUN_627a17b0(&local_14);
        pcVar5 = (char *)(**(code **)(*piVar2 + 0x1c))();
        iVar3 = FUN_627a3b70(param_1,pcVar5,piVar4);
        if (-1 < iVar3) {
          piVar2 = (int *)FUN_627a17b0(&local_10);
          piVar4 = (int *)FUN_627a17b0(&local_c);
          piVar6 = (int *)FUN_627a6140(&local_14);
          iVar3 = FUN_627a3cb0(param_1,piVar6,piVar4,piVar2);
          while (-1 < iVar3) {
            if (local_8 != (int *)0x0) {
              (**(code **)(*local_8 + 8))();
              local_8 = (int *)0x0;
            }
            ppiVar7 = &local_8;
            piVar2 = (int *)FUN_627a6140(&local_10);
            piVar4 = (int *)FUN_627a6140(&local_c);
            FUN_627a4090(param_1,piVar4,piVar2,(int *)ppiVar7);
            if (local_8 != (int *)0x0) {
              FUN_627a5f80(&local_1c,&local_8);
              piVar2 = &local_1c;
              piVar4 = piVar2;
              FUN_627a1880((void *)((int)param_1 + 0x40),&stack0xffffffc0);
              FUN_627a18a0(local_20,piVar2,piVar4);
              FUN_627a19d0();
              thunk_FUN_627a6080(&local_1c);
            }
            FUN_627a6080(&local_10);
            FUN_627a6080(&local_c);
            piVar2 = (int *)FUN_627a17b0(&local_10);
            piVar4 = (int *)FUN_627a17b0(&local_c);
            piVar6 = (int *)FUN_627a6140(&local_14);
            iVar3 = FUN_627a3e50(param_1,piVar6,piVar4,piVar2);
          }
        }
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))();
        local_8 = (int *)0x0;
      }
      thunk_FUN_627a6080(&local_18);
      thunk_FUN_627a6080(&local_c);
      thunk_FUN_627a6080(&local_10);
      thunk_FUN_627a6080(&local_14);
    }
  }
  return 0;
}


