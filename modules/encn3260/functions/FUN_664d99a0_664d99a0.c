/* Module: encn3260.dll
   Function: FUN_664d99a0
   Address: 664d99a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d99a0(void *this,undefined1 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = 2;
  param_1[1] = 0;
  param_1[3] = 0xcb;
  *(undefined2 *)(param_1 + 4) = 1;
  param_1[2] = 1;
  puVar1 = *(undefined4 **)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(void **)(param_1 + 0x2e) != (void *)0x0) {
      operator_delete(*(void **)(param_1 + 0x2e));
    }
    puVar2 = operator_new(4);
    *(undefined4 **)(param_1 + 0x2e) = puVar2;
    *puVar2 = *puVar1;
    return 0;
  }
  puVar1 = *(undefined4 **)this;
  if (*(void **)(param_1 + 0x2e) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x2e));
  }
  puVar2 = operator_new(4);
  *(undefined4 **)(param_1 + 0x2e) = puVar2;
  *puVar2 = *puVar1;
  return 0;
}


