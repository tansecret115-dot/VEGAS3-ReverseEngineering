/* Module: vidcap30.exe
   Function: FUN_00582560
   Address: 00582560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00582560(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_24 [6];
  
  iVar1 = **(int **)(param_1 + 0x90);
  puVar3 = (undefined4 *)&stack0x0000000c;
  puVar4 = auStack_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar1 = (**(code **)(iVar1 + 0x40))();
  if (iVar1 == 1) {
    FUN_0057e9f0(&stack0xfffffff4);
  }
  return;
}


