/* Module: encn3260.dll
   Function: FUN_6649e8a0
   Address: 6649e8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6649e8c4) */

undefined4 FUN_6649e8a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int local_c;
  int *local_8;
  
  local_8 = param_1 + 4;
  local_c = param_1[5];
  if (local_c == 0) {
    return 0x80004005;
  }
  do {
    piVar1 = (int *)FUN_664bab80(local_c);
    piVar1 = *(int **)(*piVar1 + 0x10);
    if ((piVar1 != (int *)0x0) &&
       (iVar2 = (**(code **)(*piVar1 + 0x24))(piVar1,&param_1), iVar2 == 0)) {
      iVar2 = (**(code **)(*param_1 + 0x18))(param_1);
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
    FUN_664bab40(&local_c);
  } while (local_c != 0);
  return 0x80004005;
}


