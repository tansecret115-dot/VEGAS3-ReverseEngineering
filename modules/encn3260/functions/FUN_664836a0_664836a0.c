/* Module: encn3260.dll
   Function: FUN_664836a0
   Address: 664836a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664836a0(void *this,short param_1)

{
  short sVar1;
  undefined4 *puVar2;
  int local_c;
  int local_8;
  
  local_c = *(int *)((int)this + 0x10);
  local_8 = (int)this + 0xc;
  if (local_c == 0) {
    return 0;
  }
  sVar1 = 0;
  if (local_c == 0) goto LAB_664836ca;
  while( true ) {
    puVar2 = (undefined4 *)FUN_664bab80(local_c);
    sVar1 = (short)*puVar2;
LAB_664836ca:
    if (sVar1 == param_1) break;
    FUN_664bab40(&local_c);
    if (local_c == 0) {
      return 0;
    }
  }
  return 1;
}


