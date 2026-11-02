/* Module: rmto3260.dll
   Function: FUN_662f9000
   Address: 662f9000
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662f9000(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_66307edc;
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete((void *)param_1[1]);
  }
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0xffff;
  if (*(void **)((int)param_1 + 10) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 10));
  }
  if (*(void **)((int)param_1 + 0x26) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x26));
  }
  if ((void *)param_1[0xc] != (void *)0x0) {
    operator_delete((void *)param_1[0xc]);
  }
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete((void *)param_1[0xd]);
  }
  if ((void *)param_1[0xe] != (void *)0x0) {
    operator_delete((void *)param_1[0xe]);
  }
  if ((void *)param_1[0xf] != (void *)0x0) {
    operator_delete((void *)param_1[0xf]);
  }
  return;
}


