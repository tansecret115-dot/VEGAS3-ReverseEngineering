/* Module: rmme3260.dll
   Function: FUN_66249ee0
   Address: 66249ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66249f3a) */

void __thiscall FUN_66249ee0(void *this,RECT *param_1,uint *param_2)

{
  bool bVar1;
  int local_2c [3];
  int local_20;
  int local_1c;
  void *local_18;
  void *local_14;
  int local_10 [3];
  
  local_20 = -(uint)(*(int *)((int)this + 8) != 0);
  local_14 = (void *)0x0;
  local_1c = local_20;
  local_18 = this;
  FUN_662500f0(local_10);
  while( true ) {
    if (local_20 != 0) {
      FUN_66252bb0(local_18,&local_1c,local_10,&local_14);
    }
    FUN_662500f0(local_2c);
    bVar1 = local_20 == 0;
    FUN_66250210(local_2c);
    if (bVar1) break;
    FUN_66249c70(local_14,param_1,param_2);
    local_20 = local_1c;
  }
  FUN_66250210(local_10);
  return;
}


