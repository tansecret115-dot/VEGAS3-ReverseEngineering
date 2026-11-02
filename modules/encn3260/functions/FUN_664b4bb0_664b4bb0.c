/* Module: encn3260.dll
   Function: FUN_664b4bb0
   Address: 664b4bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x664b4c0a) */

void __fastcall FUN_664b4bb0(int *param_1)

{
  bool bVar1;
  int local_2c [3];
  int local_20;
  int local_1c;
  int *local_18;
  void *local_14;
  int local_10 [3];
  
  local_20 = -(uint)(param_1[2] != 0);
  local_14 = (void *)0x0;
  local_1c = local_20;
  local_18 = param_1;
  FUN_664bb2c0(local_10);
  while( true ) {
    if (local_20 != 0) {
      FUN_664be080(local_18,&local_1c,local_10,&local_14);
    }
    FUN_664bb2c0(local_2c);
    bVar1 = local_20 == 0;
    FUN_664bb3e0(local_2c);
    if (bVar1) break;
    operator_delete(local_14);
    local_20 = local_1c;
  }
  FUN_664bdbe0(param_1);
  FUN_664bb3e0(local_10);
  thunk_FUN_664bdbe0(param_1);
  return;
}


