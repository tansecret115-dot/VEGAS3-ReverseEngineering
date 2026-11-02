/* Module: pngu3266.dll
   Function: FUN_6061be50
   Address: 6061be50
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_6061be50(void *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined3 extraout_var;
  int local_a0 [13];
  int local_6c [13];
  int local_38 [13];
  
  FUN_6061c330(local_38);
  FUN_6061c330(local_6c);
  puVar2 = FUN_6061bde0(local_a0);
  FUN_6061c370(local_38,puVar2);
  thunk_FUN_60618cd0(local_a0);
  bVar1 = thunk_FUN_6061bf80((int)local_38);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    puVar2 = FUN_6061c2d0(local_38,local_a0);
    FUN_6061c370(local_6c,puVar2);
    thunk_FUN_60618cd0(local_a0);
  }
  FUN_6061c2a0(param_1,local_6c);
  thunk_FUN_60618cd0(local_6c);
  thunk_FUN_60618cd0(local_38);
  return param_1;
}


