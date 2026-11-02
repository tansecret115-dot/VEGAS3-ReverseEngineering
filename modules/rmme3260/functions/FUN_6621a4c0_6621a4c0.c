/* Module: rmme3260.dll
   Function: FUN_6621a4c0
   Address: 6621a4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6621a4c0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = param_1[7];
  if (0 < iVar1) {
    do {
      operator_delete(*(void **)(param_1[6] + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  piVar2 = (int *)param_1[0xf];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0xf] = 0;
  }
  FUN_6621a510(param_1);
  return;
}


