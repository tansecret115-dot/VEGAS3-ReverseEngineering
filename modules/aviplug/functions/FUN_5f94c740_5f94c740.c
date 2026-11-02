/* Module: aviplug.dll
   Function: FUN_5f94c740
   Address: 5f94c740
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f94c740(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  *param_3 = 0;
  if (param_2 != 0) {
    do {
      param_1 = param_1 + 0x1e0;
      iVar3 = 9;
      puVar2 = param_3 + *param_3 * 9 + 1;
      do {
        *puVar2 = param_1;
        param_1 = param_1 + 0x500;
        puVar2 = puVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
    } while (uVar1 + 1 < param_2);
  }
  return;
}


