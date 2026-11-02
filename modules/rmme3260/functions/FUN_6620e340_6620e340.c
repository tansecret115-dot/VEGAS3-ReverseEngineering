/* Module: rmme3260.dll
   Function: FUN_6620e340
   Address: 6620e340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6620e340(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + -4);
    iVar2 = iVar3 * 0x10 + iVar1;
    if (-1 < iVar3 + -1) {
      do {
        iVar2 = iVar2 + -0x10;
        FUN_6620e480(iVar2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    operator_delete((void *)(iVar1 + -4));
  }
  return;
}


