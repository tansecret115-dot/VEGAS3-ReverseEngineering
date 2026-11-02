/* Module: encn3260.dll
   Function: FUN_6648bd20
   Address: 6648bd20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648bd20(void *this,int param_1,char param_2)

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
  if (local_c == 0) goto LAB_6648bd49;
  while( true ) {
    puVar1 = (undefined4 *)FUN_664bab80(local_c);
    piVar2 = (int *)*puVar1;
LAB_6648bd49:
    if (*piVar2 == param_1) break;
    FUN_664bab40(&local_c);
    if (local_c == 0) {
      return 0x80004005;
    }
  }
  piVar2 = FUN_664bbe00(piVar2 + 6,(int)param_2);
  *piVar2 = param_1;
  return 0;
}


