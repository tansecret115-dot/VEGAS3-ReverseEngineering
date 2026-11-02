/* Module: cook3260.dll
   Function: FUN_633a4950
   Address: 633a4950
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_633a4950(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x20)) {
    puVar1 = param_2;
    do {
      iVar2 = iVar2 + 1;
      *puVar1 = *(undefined4 *)
                 (&DAT_633a9bd4 + *(int *)((param_1 - (int)param_2) + (int)puVar1) * 4);
      puVar1 = puVar1 + 1;
    } while (iVar2 < *(int *)((int)this + 0x20));
  }
  return;
}


