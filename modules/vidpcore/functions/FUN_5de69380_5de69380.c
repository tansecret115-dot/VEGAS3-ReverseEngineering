/* Module: vidpcore.dll
   Function: FUN_5de69380
   Address: 5de69380
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5de69380(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(param_2 + 8);
  puVar3 = (undefined4 *)(param_1 + 8);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


