/* Module: rmme3260.dll
   Function: FUN_66249db0
   Address: 66249db0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66249db0(int *param_1)

{
  void *pvVar1;
  bool bVar2;
  int local_3c;
  int local_38;
  void *local_34;
  void *local_30;
  int local_2c [3];
  int local_20;
  int local_1c;
  int *local_18;
  undefined4 local_14;
  int local_10 [3];
  
  FUN_66249e70(&local_3c,(int)param_1,-(uint)(param_1[2] != 0));
  while( true ) {
    local_20 = 0;
    local_1c = 0;
    local_14 = 0;
    local_18 = param_1;
    FUN_662500f0(local_10);
    if (local_20 != 0) {
      FUN_66252bb0(local_18,&local_1c,local_10,&local_14);
    }
    bVar2 = local_3c == local_20;
    FUN_66250210(local_10);
    pvVar1 = local_30;
    if (bVar2) break;
    if (local_30 != (void *)0x0) {
      FUN_66249950((int)local_30);
      operator_delete(pvVar1);
    }
    local_3c = local_38;
    if (local_38 != 0) {
      FUN_66252bb0(local_34,&local_38,local_2c,&local_30);
    }
  }
  FUN_66252710(param_1);
  FUN_66250210(local_2c);
  return;
}


