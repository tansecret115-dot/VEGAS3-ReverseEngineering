/* Module: rmme3260.dll
   Function: FUN_662031d0
   Address: 662031d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662031d0(void *this,void *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_18 = 0;
  local_c = 0;
  local_1c = 0;
  local_8 = 0;
  local_14 = 0;
  iVar2 = FUN_66217fa0(param_1,&local_18,&local_c);
  local_10 = param_2[1];
  do {
    iVar1 = local_10;
    local_10 = iVar1;
    if (iVar1 == 0) goto LAB_66203256;
    puVar5 = &local_8;
    puVar4 = &local_1c;
    puVar3 = (undefined4 *)FUN_66250bf0(&local_10);
    iVar2 = FUN_66217fa0((void *)*puVar3,puVar4,puVar5);
    if (iVar2 < 0) goto LAB_66203256;
  } while (local_8 <= local_c);
  (**(code **)(*param_2 + 0x10))(iVar1,param_1);
  local_14 = 1;
LAB_66203256:
  if (-1 < iVar2) {
    if (local_14 == 0) {
      FUN_66250b60(param_2,param_1);
    }
    if (-1 < iVar2) {
      iVar2 = FUN_66203290(this,param_1);
    }
  }
  return iVar2;
}


