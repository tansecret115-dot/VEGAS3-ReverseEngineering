/* Module: rmto3260.dll
   Function: FUN_662ce3c0
   Address: 662ce3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662ce3c0(void *param_1)

{
  void *pvVar1;
  int iVar2;
  uint local_18 [3];
  int local_a;
  
  if (*(void **)((int)param_1 + 0x2c) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x2c));
    *(undefined4 *)((int)param_1 + 0x2c) = 0;
  }
  pvVar1 = operator_new(*(uint *)((int)param_1 + 0x30));
  *(void **)((int)param_1 + 0x2c) = pvVar1;
  iVar2 = (**(code **)(**(int **)((int)param_1 + 0x24) + 0x20))
                    (*(undefined4 *)((int)param_1 + 0x38),0);
  if ((-1 < iVar2) && (iVar2 = FUN_662d0470(param_1,local_18), -1 < iVar2)) {
    iVar2 = FUN_662ce630(param_1,(uint)local_18);
    while ((((-1 < iVar2 && (local_a != 0)) &&
            (iVar2 = (**(code **)(**(int **)((int)param_1 + 0x24) + 0x20))(local_a,0), -1 < iVar2))
           && (iVar2 = FUN_662d0470(param_1,local_18), -1 < iVar2))) {
      iVar2 = FUN_662ce710(param_1,(uint)local_18);
    }
  }
  return;
}


