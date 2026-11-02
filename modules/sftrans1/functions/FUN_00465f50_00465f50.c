/* Module: sftrans1.dll
   Function: FUN_00465f50
   Address: 00465f50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00465f50(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *local_4;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_4 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00555130,&local_4);
  }
  piVar2 = *(int **)(param_1 + 0x30);
  (**(code **)(*local_4 + 0x14))(local_4,piVar2,0);
  FUN_0052d1a0();
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return 0;
}


