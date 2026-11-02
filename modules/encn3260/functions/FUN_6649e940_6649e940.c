/* Module: encn3260.dll
   Function: FUN_6649e940
   Address: 6649e940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6649e940(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_c;
  int *local_8;
  
  uVar1 = param_2;
  if (param_1[8] != 0) {
    local_8 = param_1 + 4;
    uVar4 = 0x80004005;
    local_c = param_1[5];
    if (local_c != 0) {
      if (local_c != 0) goto LAB_6649e97f;
      iVar2 = 0;
      while( true ) {
        piVar3 = *(int **)(iVar2 + 0x10);
        if ((piVar3 != (int *)0x0) &&
           (iVar2 = (**(code **)(*piVar3 + 0x24))(piVar3,&param_1), iVar2 == 0)) {
          iVar2 = (**(code **)(*param_1 + 0x1c))(param_1,uVar1);
          if (iVar2 == 0) {
            uVar4 = 0;
          }
          if (param_1 != (int *)0x0) {
            (**(code **)(*param_1 + 8))(param_1);
            param_1 = (int *)0x0;
          }
        }
        FUN_664bab40(&local_c);
        if (local_c == 0) break;
LAB_6649e97f:
        piVar3 = (int *)FUN_664bab80(local_c);
        iVar2 = *piVar3;
      }
    }
    return uVar4;
  }
  return 0x80004005;
}


