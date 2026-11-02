/* Module: cook3260.dll
   Function: FUN_633a3de0
   Address: 633a3de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_633a3de0(void *this,int param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x35c)) {
    do {
      if (*param_2 == -1) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = *param_2;
      param_2 = param_2 + 1;
      iVar3 = iVar3 + 1;
      *(int *)(param_1 + iVar1 * 4) = *(int *)(param_1 + iVar1 * 4) + 1;
    } while (iVar3 < *(int *)((int)this + 0x35c));
  }
  return;
}


