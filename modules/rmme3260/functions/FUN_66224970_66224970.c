/* Module: rmme3260.dll
   Function: FUN_66224970
   Address: 66224970
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_66224970(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  
  if (*(int *)((int)this + 0x10) != 0) {
    return;
  }
  if (param_1 != 0) {
    if ((*(char **)(param_1 + 0x2e) == (char *)0x0) ||
       (pcVar3 = strstr(*(char **)(param_1 + 0x2e),&DAT_6626f810), pcVar3 == (char *)0x0)) {
      uVar1 = *(uint *)(param_1 + 0x24);
      uVar2 = *(uint *)(param_1 + 0x10);
    }
    else {
      uVar1 = *(int *)(param_1 + 0x20) + -1000 + *(int *)(param_1 + 0x24);
      uVar2 = *(uint *)(param_1 + 0x10);
    }
    *(double *)((int)this + 0x1c) =
         *(double *)((int)this + 0x1c) - (double)uVar2 * (double)uVar1 * _DAT_6626bd30;
    return;
  }
  return;
}


