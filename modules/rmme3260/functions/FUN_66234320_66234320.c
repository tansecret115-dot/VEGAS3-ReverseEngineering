/* Module: rmme3260.dll
   Function: FUN_66234320
   Address: 66234320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6623433c) */

undefined4 FUN_66234320(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_c;
  int *local_8;
  
  piVar1 = param_1;
  local_c = param_1[8];
  local_8 = param_1 + 7;
  if (local_c == 0) {
    return 0x80004005;
  }
  while( true ) {
    piVar2 = (int *)FUN_66250c10(local_c);
    piVar2 = *(int **)(*piVar2 + 0x10);
    if ((piVar2 != (int *)0x0) &&
       (iVar3 = (**(code **)(*piVar2 + 0x24))(piVar2,&param_1), iVar3 == 0)) break;
    FUN_66250bf0(&local_c);
    if (local_c == 0) {
      return 0x80004005;
    }
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
    param_1 = (int *)0x0;
  }
  (**(code **)piVar1[-1])(piVar1 + -1,&DAT_6626ad58,param_2);
  return 0;
}


