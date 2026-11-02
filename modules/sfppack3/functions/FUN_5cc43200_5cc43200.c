/* Module: sfppack3.dll
   Function: FUN_5cc43200
   Address: 5cc43200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc43200(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if (param_2 != 0) {
    puVar2 = (uint *)(param_3 + 4);
    iVar3 = (int)param_1 - param_3;
    do {
      puVar2[-1] = *param_1;
      uVar1 = *param_1 * 2 - *(int *)(iVar3 + (int)puVar2);
      *puVar2 = uVar1;
      if ((int)uVar1 < -0x348) {
        uVar1 = 0xfffffcb8;
      }
      else {
        uVar1 = uVar1 & (0 < (int)uVar1) - 1;
      }
      *puVar2 = uVar1;
      param_1 = param_1 + 2;
      puVar2 = puVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


