/* Module: rmbe3260.dll
   Function: FUN_6601df60
   Address: 6601df60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6601df60(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_c;
  int *local_8;
  
  piVar1 = (int *)(param_1 + 0x164);
  local_c = *(int *)(param_1 + 0x168);
  if (local_c == 0) {
    return 0x80004005;
  }
  local_8 = piVar1;
  if (local_c != 0) goto LAB_6601df8a;
  piVar4 = (int *)0x0;
  while( true ) {
    if ((int *)*piVar4 == param_2) {
      if (param_2 != (int *)0x0) {
        (**(code **)(*param_2 + 8))(param_2);
      }
      uVar3 = (**(code **)(*piVar1 + 0x18))(piVar4,0);
      (**(code **)(*piVar1 + 0xc))(uVar3);
      operator_delete(piVar4);
      return 0;
    }
    FUN_6605c5e0(&local_c);
    if (local_c == 0) break;
LAB_6601df8a:
    puVar2 = (undefined4 *)FUN_6605c600(local_c);
    piVar4 = (int *)*puVar2;
  }
  return 0x80004005;
}


