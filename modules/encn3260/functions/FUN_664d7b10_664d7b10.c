/* Module: encn3260.dll
   Function: FUN_664d7b10
   Address: 664d7b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664d7b10(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  *param_1 = &PTR_FUN_664e0078;
  if (param_1[3] != 0) {
    do {
      piVar1 = *(int **)(param_1[6] + uVar3 * 4);
      while (piVar2 = piVar1, piVar2 != (int *)0x0) {
        piVar1 = (int *)piVar2[3];
        if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar2)(1);
        }
        if (piVar2 != (int *)0x0) {
          operator_delete(piVar2);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[3]);
  }
  operator_delete((void *)param_1[6]);
  *param_1 = &PTR_FUN_664e00a8;
  return;
}


