/* Module: vegas30k.dll
   Function: FUN_01016600
   Address: 01016600
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01016600(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  if (param_1 == (uint *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *param_1;
  }
  iVar1 = 0;
  uVar2 = param_2 + 1;
  if (uVar2 < uVar4) {
    puVar3 = (undefined4 *)(param_1[2] + uVar2 * 4);
    do {
      if (*(int *)*puVar3 == 3) {
        return iVar1;
      }
      if (*(int *)*puVar3 == 4) {
        iVar1 = iVar1 + 1;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 < uVar4);
  }
  return iVar1;
}


