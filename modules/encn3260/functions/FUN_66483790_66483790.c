/* Module: encn3260.dll
   Function: FUN_66483790
   Address: 66483790
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_66483790(void *this,short param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *this_00;
  int local_c;
  int local_8;
  
  local_c = *(int *)((int)this + 0x11);
  local_8 = (int)this + 0xd;
  if (local_c == 0) {
    return (void *)0x0;
  }
  if (local_c != 0) goto LAB_664837b3;
  this_00 = (void *)0x0;
  while( true ) {
    iVar2 = FUN_664836a0(this_00,param_1);
    if (iVar2 != 0) {
      return this_00;
    }
    FUN_664bab40(&local_c);
    if (local_c == 0) break;
LAB_664837b3:
    puVar1 = (undefined4 *)FUN_664bab80(local_c);
    this_00 = (void *)*puVar1;
  }
  return (void *)0x0;
}


