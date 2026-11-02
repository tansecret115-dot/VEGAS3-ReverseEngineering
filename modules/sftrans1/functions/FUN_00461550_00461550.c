/* Module: sftrans1.dll
   Function: FUN_00461550
   Address: 00461550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00461550(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *local_4;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_4 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00554c90,&local_4);
  }
  piVar3 = (int *)0x0;
  (**(code **)(*local_4 + 0x3c))(local_4,0,0);
  if (*(int *)(param_1 + 0x90) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x94)) {
      do {
        puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x90) + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        iVar2 = iVar2 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x90) + -4 + iVar2 * 4) = 0;
      } while (iVar2 < *(int *)(param_1 + 0x94));
    }
    free(*(void **)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return 1;
}


