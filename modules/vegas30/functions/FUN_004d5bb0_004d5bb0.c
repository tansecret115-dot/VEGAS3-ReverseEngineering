/* Module: vegas30.exe
   Function: FUN_004d5bb0
   Address: 004d5bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004d5bb0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 4;
  puVar2 = (undefined4 *)(param_1 + 0x34);
  do {
    (**(code **)(*(int *)*puVar2 + 0x2c))(param_1);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


