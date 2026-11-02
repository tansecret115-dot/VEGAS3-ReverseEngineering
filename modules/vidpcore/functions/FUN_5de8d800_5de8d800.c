/* Module: vidpcore.dll
   Function: FUN_5de8d800
   Address: 5de8d800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5de8d800(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *local_4;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_4 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_5df17c20,&local_4);
  }
  FUN_5ded6070(*(undefined4 *)(param_1 + 0xd0));
  piVar2 = (int *)0x0;
  (**(code **)(*local_4 + 0x28))(local_4,0,0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return 1;
}


