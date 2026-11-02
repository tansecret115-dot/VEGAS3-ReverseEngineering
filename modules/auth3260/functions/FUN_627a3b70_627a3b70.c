/* Module: auth3260.dll
   Function: FUN_627a3b70
   Address: 627a3b70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_627a3b70(void *this,char *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *_Str2;
  int iVar5;
  char *local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)((int)this + 0x2c) != 0) {
    FUN_627a19b0(&local_10);
    FUN_627a19b0(&local_c);
    FUN_627a19b0(&local_8);
    FUN_627a6150(&local_10,*(undefined4 **)((int)this + 0x2c));
    piVar1 = (int *)FUN_627a6140(&local_10);
    iVar3 = *piVar1;
    uVar2 = FUN_627a17b0(&local_8);
    iVar3 = (**(code **)(iVar3 + 0x78))(piVar1,s_config_AuthenticationRealms_627a80b4,uVar2);
    if (-1 < iVar3) {
      piVar1 = (int *)FUN_627a6140(&local_8);
      iVar3 = (**(code **)(*piVar1 + 0x14))(piVar1,&local_18,&local_14);
      while (-1 < iVar3) {
        FUN_627a6080(&local_c);
        piVar1 = param_2;
        puVar4 = (undefined4 *)FUN_627a17b0(&local_c);
        iVar3 = FUN_627a3d60(this,local_18,local_14,s_Realm_627a8094,puVar4,piVar1);
        if (-1 < iVar3) {
          piVar1 = (int *)FUN_627a6140(&local_c);
          _Str2 = (char *)(**(code **)(*piVar1 + 0x1c))(piVar1);
          iVar5 = _stricmp(param_1,_Str2);
          if (iVar5 == 0) {
            thunk_FUN_627a6080(&local_8);
            thunk_FUN_627a6080(&local_c);
            thunk_FUN_627a6080(&local_10);
            return iVar3;
          }
        }
        piVar1 = (int *)*param_2;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *param_2 = 0;
        }
        piVar1 = (int *)FUN_627a6140(&local_8);
        iVar3 = (**(code **)(*piVar1 + 0x18))(piVar1,&local_18,&local_14);
      }
    }
    thunk_FUN_627a6080(&local_8);
    thunk_FUN_627a6080(&local_c);
    thunk_FUN_627a6080(&local_10);
  }
  return -0x7fffbffb;
}


