/* Module: encn3260.dll
   Function: FUN_6648be00
   Address: 6648be00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648be00(void *this,int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  int local_8;
  
  local_c = *(int *)((int)this + 0x44);
  local_8 = (int)this + 0x40;
  if (local_c == 0) {
    return 0x80004005;
  }
  if (local_c != 0) goto LAB_6648be27;
  piVar3 = (int *)0x0;
  while( true ) {
    if (*piVar3 == param_1) {
      iVar2 = (**(code **)(piVar3[1] + 0x18))(param_2,0);
      if (iVar2 != 0) {
        (**(code **)(piVar3[1] + 0xc))(iVar2);
        return 0;
      }
    }
    FUN_664bab40(&local_c);
    if (local_c == 0) break;
LAB_6648be27:
    puVar1 = (undefined4 *)FUN_664bab80(local_c);
    piVar3 = (int *)*puVar1;
  }
  return 0x80004005;
}


