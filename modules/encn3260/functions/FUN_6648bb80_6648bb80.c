/* Module: encn3260.dll
   Function: FUN_6648bb80
   Address: 6648bb80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648bb80(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_c;
  int local_8;
  
  local_c = *(int *)((int)this + 0x44);
  local_8 = (int)this + 0x40;
  if (local_c == 0) {
    return 0;
  }
  if (local_c != 0) goto LAB_6648bba3;
  puVar2 = (undefined4 *)0x0;
  while( true ) {
    iVar1 = (**(code **)(puVar2[1] + 0x18))(param_1,0);
    if (iVar1 != 0) {
      return *puVar2;
    }
    FUN_664bab40(&local_c);
    if (local_c == 0) break;
LAB_6648bba3:
    puVar2 = (undefined4 *)FUN_664bab80(local_c);
    puVar2 = (undefined4 *)*puVar2;
  }
  return 0;
}


