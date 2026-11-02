/* Module: encn3260.dll
   Function: FUN_6648abe0
   Address: 6648abe0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6648ac02) */

void __fastcall FUN_6648abe0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int local_c;
  int *local_8;
  
  piVar1 = param_1 + 2;
  *param_1 = &PTR_FUN_664de158;
  local_c = param_1[3];
  local_8 = piVar1;
  while (local_c != 0) {
    puVar2 = (undefined4 *)FUN_664bab80(local_c);
    (**(code **)(*(int *)*puVar2 + 8))((int *)*puVar2);
    FUN_664bab40(&local_c);
  }
  (**(code **)(*piVar1 + 8))();
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
    param_1[8] = 0;
  }
  FUN_664ba950(piVar1);
  return;
}


