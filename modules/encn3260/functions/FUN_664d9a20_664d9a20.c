/* Module: encn3260.dll
   Function: FUN_664d9a20
   Address: 664d9a20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_664d9a20(void *this,undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_c;
  
  *param_1 = 2;
  param_1[1] = 0;
  param_1[3] = 0xcc;
  *(undefined4 *)(param_1 + 0x32) = **(undefined4 **)((int)this + 8);
  param_1[2] = 1;
  *(undefined2 *)(param_1 + 4) = 4;
  *(undefined4 *)(param_1 + 0x36) = _DAT_664e2ff0;
  iVar1 = *(int *)((int)this + 8);
  uVar2 = *(undefined4 *)(iVar1 + 6);
  local_c = CONCAT22(*(undefined2 *)(iVar1 + 4),CONCAT11(*(char *)(iVar1 + 10) != '\0',1));
  if (*(void **)(param_1 + 0x56) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x56));
    *(undefined4 *)(param_1 + 0x56) = 0;
  }
  puVar3 = operator_new(8);
  *(undefined4 **)(param_1 + 0x56) = puVar3;
  *puVar3 = local_c;
  puVar3[1] = uVar2;
  return 0;
}


