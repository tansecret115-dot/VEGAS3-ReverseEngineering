/* Module: encn3260.dll
   Function: FUN_664ad010
   Address: 664ad010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664ad010(char *param_1,byte *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  int *local_14;
  int *local_10;
  undefined4 local_c;
  int *local_8;
  
  local_c = 0;
  local_8 = (int *)0x0;
  iVar1 = (**(code **)*param_4)(param_4,&DAT_664dd890,&local_8);
  if (iVar1 != 0) {
    return 0x80004005;
  }
  if (param_1 == (char *)0x0) {
    return 0x80004005;
  }
  iVar1 = (**(code **)(*local_8 + 0x2c))(local_8,s_FileShort_664e36c4,param_1,0,0,0,0,&param_4);
  if (iVar1 != 0) {
    return 0x80004005;
  }
  (**(code **)(*local_8 + 0x14))(local_8,param_4,&local_10);
  (**(code **)(*local_10 + 0x30))(local_10,s_FileProtocol_664e36b4,&local_14);
  pcVar2 = (char *)(**(code **)(*local_14 + 0x1c))(local_14);
  pvVar3 = operator_new(0x2c);
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    FUN_664bb2c0((undefined4 *)((int)pvVar3 + 4));
    FUN_664bb2c0((undefined4 *)((int)pvVar3 + 0x10));
    FUN_664bb2c0((undefined4 *)((int)pvVar3 + 0x1c));
  }
  FUN_664bb5e0((void *)((int)pvVar3 + 4),(char *)param_2);
  FUN_664bb5e0((void *)((int)pvVar3 + 0x10),pcVar2);
  FUN_664bb5e0((void *)((int)pvVar3 + 0x1c),param_1);
  *(undefined4 *)((int)pvVar3 + 0x28) = param_3;
  FUN_664bdd00(&DAT_664f07f8,param_2,(int)pvVar3);
  FUN_664bdd00(&DAT_664f0830,param_2,(int)pvVar3);
  FUN_664baab0(&DAT_664f0818,pvVar3);
  return local_c;
}


