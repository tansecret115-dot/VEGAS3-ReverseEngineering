/* Module: sftrans1.dll
   Function: FUN_0049c840
   Address: 0049c840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0049c840(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *local_4;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_4 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00554c10,&local_4);
  }
  piVar2 = (int *)0x0;
  (**(code **)(*local_4 + 0x3c))(local_4,0,0);
  if (*(int **)(param_1 + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x70) + 8))();
    if (*(undefined4 **)(param_1 + 0x70) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x70))(1);
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*(int **)(param_1 + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x74) + 8))();
    if (*(undefined4 **)(param_1 + 0x74) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x74))(1);
    }
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(int **)(param_1 + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x78) + 8))();
    if (*(undefined4 **)(param_1 + 0x78) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x78))(1);
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return 1;
}


