/* Module: auth3260.dll
   Function: FUN_627a4090
   Address: 627a4090
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_627a4090(void *this,int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  uint uVar3;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined4 uVar4;
  undefined3 extraout_var_03;
  char *_Str2;
  char *_Str1;
  int iVar5;
  undefined4 *puVar6;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_627a19b0(&local_20);
  FUN_627a19b0(&local_10);
  FUN_627a19b0(&local_c);
  FUN_627a19b0(&local_18);
  FUN_627a19b0(&local_1c);
  FUN_627a19b0(&local_8);
  FUN_627a19b0(&local_14);
  local_24 = -0x7fffbffb;
  FUN_627a60a0(&local_c,*(undefined4 **)((int)this + 0x2c));
  bVar1 = FUN_627a5f40(&local_c);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    piVar2 = (int *)FUN_627a6140(&local_c);
    uVar3 = (**(code **)(*piVar2 + 0xc))(piVar2);
    local_28 = 0;
    if (uVar3 != 0) {
      do {
        piVar2 = (int *)*param_3;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
          *param_3 = 0;
        }
        piVar2 = (int *)FUN_627a6140(&local_c);
        (**(code **)(*piVar2 + 0x10))(piVar2,local_28,param_3);
        FUN_627a6020(&local_20,(undefined4 *)*param_3);
        bVar1 = FUN_627a5f40(&local_20);
        if (CONCAT31(extraout_var_00,bVar1) != 0) {
          FUN_627a5f10(&local_10,(undefined4 *)*param_3);
          FUN_627a5f50(&local_14,(undefined4 *)*param_3);
          bVar1 = FUN_627a5f40(&local_14);
          if ((CONCAT31(extraout_var_01,bVar1) != 0) &&
             (bVar1 = FUN_627a5f40(&local_10), CONCAT31(extraout_var_02,bVar1) != 0)) {
            uVar4 = *(undefined4 *)((int)this + 0x2c);
            piVar2 = (int *)FUN_627a6140(&local_10);
            (**(code **)(*piVar2 + 0xc))(piVar2,uVar4);
            FUN_627a6080(&local_18);
            piVar2 = (int *)FUN_627a6140(&local_14);
            iVar5 = *piVar2;
            uVar4 = FUN_627a17b0(&local_18);
            (**(code **)(iVar5 + 0xc))(piVar2,uVar4);
            FUN_627a6080(&local_8);
            piVar2 = (int *)FUN_627a6140(&local_18);
            iVar5 = *piVar2;
            uVar4 = FUN_627a17b0(&local_8);
            (**(code **)(iVar5 + 0x30))(piVar2,s_PluginID_627a80d0,uVar4);
            bVar1 = FUN_627a5f40(&local_8);
            if (CONCAT31(extraout_var_03,bVar1) != 0) {
              _Str2 = (char *)(**(code **)(*param_1 + 0x1c))(param_1);
              piVar2 = (int *)FUN_627a6140(&local_8);
              _Str1 = (char *)(**(code **)(*piVar2 + 0x1c))(piVar2);
              iVar5 = _stricmp(_Str1,_Str2);
              if (iVar5 == 0) {
                puVar6 = (undefined4 *)FUN_627a17b0(&local_1c);
                FUN_627a42d0(this,param_2,puVar6);
                piVar2 = (int *)FUN_627a6140(&local_10);
                iVar5 = *piVar2;
                uVar4 = FUN_627a6140(&local_1c);
                (**(code **)(iVar5 + 0x10))(piVar2,uVar4);
                local_24 = 0;
                break;
              }
            }
          }
        }
        local_28 = local_28 + 1;
      } while (local_28 < uVar3);
    }
    if ((local_24 < 0) && (piVar2 = (int *)*param_3, piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *param_3 = 0;
    }
  }
  thunk_FUN_627a6080(&local_14);
  thunk_FUN_627a6080(&local_8);
  thunk_FUN_627a6080(&local_1c);
  thunk_FUN_627a6080(&local_18);
  thunk_FUN_627a6080(&local_c);
  thunk_FUN_627a6080(&local_10);
  thunk_FUN_627a6080(&local_20);
  return local_24;
}


