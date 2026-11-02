/* Module: rmme3260.dll
   Function: FUN_66201660
   Address: 66201660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66201660(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  piVar2 = operator_new(0xa8);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_66201090(piVar2);
  }
  param_1[1] = piVar2;
  (**(code **)(*piVar2 + 4))(piVar2);
  iVar3 = FUN_66262c80(*(void **)(*(int *)(param_1[1] + 0xa4) + 0x10),(byte *)s_pn_local_6626f0a8,
                       param_1 + 2);
  if (iVar3 == 0) {
    FUN_66263580((void *)param_1[2],&local_8);
    iVar3 = (**(code **)*local_8)(local_8,&DAT_6626a8b8,param_1 + 4);
    if (iVar3 == 0) {
      puVar1 = (undefined4 *)param_1[4];
      iVar3 = (**(code **)*puVar1)(puVar1,&DAT_6626ab08,&local_c);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(*local_c + 0x10))(local_c,param_1[1]);
        if (iVar3 == 0) goto LAB_66201706;
      }
    }
  }
  *param_1 = 0x80004005;
LAB_66201706:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return *param_1;
}


