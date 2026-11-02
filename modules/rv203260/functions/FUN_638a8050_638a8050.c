/* Module: rv203260.dll
   Function: FUN_638a8050
   Address: 638a8050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_638a8050(int *param_1)

{
  undefined4 *puVar1;
  undefined4 local_8;
  
  local_8 = 0;
  if (*(code **)((int)param_1 + 0x7a) != (code *)0x0) {
    local_8 = (**(code **)((int)param_1 + 0x7a))(*(undefined4 *)((int)param_1 + 0x9a));
  }
  FUN_638ad140((int)param_1);
  if (*(void **)((int)param_1 + 0xce) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0xce));
    *(undefined4 *)((int)param_1 + 0xce) = 0;
  }
  if (*(void **)((int)param_1 + 0xd2) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0xd2));
    *(undefined4 *)((int)param_1 + 0xd2) = 0;
  }
  if (*(void **)((int)param_1 + 0xd6) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0xd6));
    *(undefined4 *)((int)param_1 + 0xd6) = 0;
  }
  if (*(void **)((int)param_1 + 0xda) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0xda));
    *(undefined4 *)((int)param_1 + 0xda) = 0;
  }
  if (*(void **)((int)param_1 + 0xde) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0xde));
    *(undefined4 *)((int)param_1 + 0xde) = 0;
  }
  puVar1 = (undefined4 *)param_1[8];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_638af190(puVar1);
    operator_delete(puVar1);
    param_1[8] = 0;
  }
  (**(code **)(*param_1 + 8))();
  return local_8;
}


