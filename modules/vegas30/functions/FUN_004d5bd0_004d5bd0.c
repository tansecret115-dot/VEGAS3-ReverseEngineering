/* Module: vegas30.exe
   Function: FUN_004d5bd0
   Address: 004d5bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004d5bd0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 4;
  puVar2 = (undefined4 *)(param_1 + 0x34);
  do {
    (**(code **)(*(int *)*puVar2 + 0x30))(param_1,param_2);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


