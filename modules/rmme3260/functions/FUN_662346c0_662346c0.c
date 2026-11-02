/* Module: rmme3260.dll
   Function: FUN_662346c0
   Address: 662346c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662346c0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  int *local_8;
  
  uVar1 = param_2;
  if (param_1[8] == 0) {
    return 0x80004005;
  }
  local_8 = param_1 + 4;
  local_c = param_1[5];
  if (local_c == 0) {
    return 0x80004005;
  }
  if (local_c != 0) goto LAB_662346ff;
  iVar2 = 0;
  while( true ) {
    piVar3 = *(int **)(iVar2 + 0x10);
    if ((piVar3 != (int *)0x0) &&
       (iVar2 = (**(code **)(*piVar3 + 0x24))(piVar3,&param_1), iVar2 == 0)) {
      iVar2 = (**(code **)(*param_1 + 0x20))(param_1,uVar1);
      if (iVar2 == 0) {
        if (param_1 != (int *)0x0) {
          (**(code **)(*param_1 + 8))(param_1);
        }
        return 0;
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
        param_1 = (int *)0x0;
      }
    }
    FUN_66250bf0(&local_c);
    if (local_c == 0) break;
LAB_662346ff:
    piVar3 = (int *)FUN_66250c10(local_c);
    iVar2 = *piVar3;
  }
  return 0x80004005;
}


