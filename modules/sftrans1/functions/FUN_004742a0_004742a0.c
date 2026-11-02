/* Module: sftrans1.dll
   Function: FUN_004742a0
   Address: 004742a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004742a0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *local_4;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_4 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00554cf0,&local_4);
  }
  piVar2 = local_4;
  (**(code **)(*local_4 + 0x3c))(local_4,0,0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return 1;
}


