/* Module: encn3260.dll
   Function: FUN_6648bd90
   Address: 6648bd90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648bd90(void *this,int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int local_c;
  int local_8;
  
  local_c = *(int *)((int)this + 0x44);
  local_8 = (int)this + 0x40;
  if (local_c == 0) {
    return 0x80004005;
  }
  piVar2 = (int *)0x0;
  if (local_c == 0) goto LAB_6648bdb9;
  while( true ) {
    puVar1 = (undefined4 *)FUN_664bab80(local_c);
    piVar2 = (int *)*puVar1;
LAB_6648bdb9:
    if (*piVar2 == param_1) break;
    FUN_664bab40(&local_c);
    if (local_c == 0) {
      return 0x80004005;
    }
  }
  FUN_664baab0(piVar2 + 1,param_2);
  return 0;
}


