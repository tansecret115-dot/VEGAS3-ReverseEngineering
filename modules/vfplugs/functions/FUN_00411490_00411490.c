/* Module: vfplugs.dll
   Function: FUN_00411490
   Address: 00411490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00411490(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *local_4;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_4 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00486aa0,&local_4);
  }
  FUN_0044c300(*(int **)(param_1 + 0x30c));
  *(undefined4 *)(param_1 + 0x30c) = 0;
  piVar2 = (int *)0x0;
  (**(code **)(*local_4 + 0x28))(local_4,0,0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return 1;
}


