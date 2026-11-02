/* Module: encn3260.dll
   Function: FUN_6649b7d0
   Address: 6649b7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6649b7d0(int param_1)

{
  char cVar1;
  char *_Dest;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int local_8;
  
  local_8 = 0;
  _Dest = operator_new(0x800);
  if (_Dest == (char *)0x0) {
    local_8 = -0x7ff8fff2;
  }
  iVar2 = *(int *)(param_1 + 0x38);
  iVar3 = *(int *)(iVar2 + 0x10) + -1;
  *(int *)(iVar2 + 8) = iVar3;
  *(int *)(iVar2 + 0xc) = iVar3;
  FUN_6649b950(param_1);
  if (local_8 == 0) {
    if (*(int *)(param_1 + 0x7b) == 0) {
      iVar2 = sprintf(_Dest,s_GET__SmpDsBhgRl_664e316c);
    }
    else if (*(ushort *)(param_1 + 0x34) == 0) {
      iVar2 = sprintf(_Dest,s_GET_http____s_SmpDsBhgRl_664e317c,*(undefined4 *)(param_1 + 0x2c));
    }
    else {
      iVar2 = sprintf(_Dest,s_GET_http____s__d_SmpDsBhgRl_664e3198,*(undefined4 *)(param_1 + 0x2c),
                      (uint)*(ushort *)(param_1 + 0x34));
    }
    (**(code **)(**(int **)(param_1 + 0x38) + 0x10))(_Dest,iVar2);
    uVar4 = 0xffffffff;
    pcVar5 = *(char **)(param_1 + 0x68);
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    (**(code **)(**(int **)(param_1 + 0x38) + 0x10))(*(undefined4 *)(param_1 + 0x68),~uVar4 - 1);
    if (*(int *)(param_1 + 0x7b) != 0) {
      iVar2 = sprintf(_Dest,s__1__1__664e3164);
      (**(code **)(**(int **)(param_1 + 0x38) + 0x10))(_Dest,iVar2);
    }
    iVar2 = sprintf(_Dest,s_HTTP_1_0_664e3108);
    (**(code **)(**(int **)(param_1 + 0x38) + 0x10))(_Dest,iVar2);
    iVar2 = sprintf(_Dest,s_User_Agent__RealPlayer_G2_664e30ec);
    (**(code **)(**(int **)(param_1 + 0x38) + 0x10))(_Dest,iVar2);
    iVar2 = sprintf(_Dest,s_Expires__Mon__18_May_1974_00_00__664e30ac);
    (**(code **)(**(int **)(param_1 + 0x38) + 0x10))(_Dest,iVar2);
    iVar2 = sprintf(_Dest,s_Pragma__no_cache_664e30d8);
    (**(code **)(**(int **)(param_1 + 0x38) + 0x10))(_Dest,iVar2);
    iVar2 = sprintf(_Dest,s_Accept______664e309c);
    (**(code **)(**(int **)(param_1 + 0x38) + 0x10))(_Dest,iVar2);
    iVar2 = sprintf(_Dest,&DAT_664e3044);
    (**(code **)(**(int **)(param_1 + 0x38) + 0x10))(_Dest,iVar2);
  }
  if (_Dest != (char *)0x0) {
    operator_delete(_Dest);
  }
  return local_8;
}


