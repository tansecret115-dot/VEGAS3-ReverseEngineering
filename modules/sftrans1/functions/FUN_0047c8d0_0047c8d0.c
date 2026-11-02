/* Module: sftrans1.dll
   Function: FUN_0047c8d0
   Address: 0047c8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0047c8d0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *local_4;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_4 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00555130,&local_4);
  }
  piVar2 = (int *)(param_1 + 0x70);
  (**(code **)(*local_4 + 0xc))(local_4);
  if (*(int **)(param_1 + 0x410) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x410) + 8))();
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return;
}


