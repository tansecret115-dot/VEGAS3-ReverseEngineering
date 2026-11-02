/* Module: rmto3260.dll
   Function: FUN_66302530
   Address: 66302530
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_66302530(char *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  char local_118;
  undefined4 local_117;
  int local_14 [3];
  int *local_8;
  
  piVar2 = FUN_662f0880(0);
  if (piVar2 == (int *)0x0) {
    return -0x7ff8fff2;
  }
  local_118 = DAT_66311c80;
  puVar5 = &local_117;
  for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  (**(code **)(*piVar2 + 8))(&DAT_66311bfc,&local_118);
  FUN_662ef2f0(param_2,&local_118);
  (**(code **)(*piVar2 + 0x44))(&local_118);
  uVar3 = FUN_662ef7f0(param_2,'.');
  if (uVar3 != 0xffffffff) {
    piVar4 = FUN_662ef7a0(param_2,local_14,uVar3);
    FUN_662ef280(param_2,piVar4);
    FUN_662ef0f0(local_14);
  }
  FUN_662ef520(param_2,&DAT_66311bf4);
  puVar5 = operator_new(0x30);
  if (puVar5 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_66302750(puVar5);
  }
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 4))(piVar4);
    (**(code **)(*piVar4 + 0x18))(piVar4,s_RealNetworks_66311be4);
    local_8 = (int *)0x0;
    iVar7 = (**(code **)(*piVar4 + 0xc))(piVar4,s_LastTempFile_66311bd4,&local_8);
    if (iVar7 == 0) {
      iVar7 = *piVar2;
      uVar6 = (**(code **)(*local_8 + 0x1c))(local_8);
      (**(code **)(iVar7 + 0x44))(uVar6);
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
    }
    puVar5 = operator_new(0x28);
    if (puVar5 == (undefined4 *)0x0) {
      local_8 = (int *)0x0;
    }
    else {
      local_8 = (int *)FUN_662eeb70(puVar5);
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 4))(local_8);
      (**(code **)(*local_8 + 0x10))(local_8,*param_2,*(int *)(*param_2 + -8) + 1);
      (**(code **)(*piVar4 + 0x10))(piVar4,s_LastTempFile_66311bd4,local_8);
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
    }
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  iVar7 = (**(code **)(*piVar2 + 0x10))(*param_2,0x301,1);
  if (-1 < iVar7) {
    FUN_662ef160(local_14,s_<HEAD>_<META_HTTP_EQUIV__refresh_66311ba0);
    iVar7 = (**(code **)(*piVar2 + 0x30))(local_14[0],*(undefined4 *)(local_14[0] + -8));
    if (-1 < iVar7) {
      uVar3 = 0xffffffff;
      pcVar8 = param_1;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      (**(code **)(*piVar2 + 0x30))(param_1,~uVar3 - 1);
      if (-1 < iVar7) {
        (**(code **)(*piVar2 + 0x30))(&DAT_66311b9c,3);
        (**(code **)(*piVar2 + 0x30))(s_<_HEAD>_66311b90,8);
      }
    }
    (**(code **)(*piVar2 + 0x18))();
    FUN_662ef0f0(local_14);
  }
  (**(code **)*piVar2)(1);
  return iVar7;
}


