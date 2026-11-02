/* Module: rmbe3260.dll
   Function: FUN_66042d70
   Address: 66042d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66042d70(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = *(int **)((int)this + 8);
  if ((piVar1 != (int *)0x0) && (piVar1[4] != 0)) {
    if (*(int *)((int)this + 4) != 0) {
      puVar2 = (undefined4 *)FUN_6605c4d0(piVar1);
      *param_1 = *puVar2;
      param_1[1] = puVar2[1];
      param_1[2] = puVar2[2];
      *(undefined2 *)(param_1 + 3) = *(undefined2 *)(puVar2 + 3);
      *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)((int)puVar2 + 0xe);
      param_1[4] = puVar2[4];
      operator_delete(puVar2);
      return 0;
    }
    return 0x20000;
  }
  return 0x40042;
}


