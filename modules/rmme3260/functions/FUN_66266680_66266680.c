/* Module: rmme3260.dll
   Function: FUN_66266680
   Address: 66266680
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66266680(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + -4);
    puVar2 = (undefined4 *)(iVar1 + iVar3 * 8);
    if (-1 < iVar3 + -1) {
      do {
        puVar2 = puVar2 + -2;
        FUN_66266650(puVar2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    operator_delete((void *)(iVar1 + -4));
  }
  return;
}


