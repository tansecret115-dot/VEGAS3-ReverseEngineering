/* Module: espr3260.dll
   Function: FUN_632f6110
   Address: 632f6110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_632f6110(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = param_3;
  iVar5 = 0;
  for (iVar4 = 0x30; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_3 = 0;
    param_3 = param_3 + 1;
  }
  param_3 = param_1;
  do {
    iVar4 = iVar5 + (*param_3 & 0xf) * 3;
    if (((byte)*param_3 & 0x10) == 0x10) {
      if (iVar4 < 0x30) {
        iVar3 = iVar4 * 4;
        do {
          iVar2 = iVar3 + 4;
          *(float *)((int)puVar1 + iVar3) =
               *(float *)((int)puVar1 + iVar3) - *(float *)(param_2 + iVar3 + iVar4 * -4);
          iVar3 = iVar2;
        } while (iVar2 < 0xc0);
      }
    }
    else if (iVar4 < 0x30) {
      iVar3 = iVar4 * 4;
      do {
        iVar2 = iVar3 + 4;
        *(float *)((int)puVar1 + iVar3) =
             *(float *)(param_2 + iVar3 + iVar4 * -4) + *(float *)((int)puVar1 + iVar3);
        iVar3 = iVar2;
      } while (iVar2 < 0xc0);
    }
    iVar5 = iVar5 + 1;
    param_3 = param_3 + 1;
  } while (iVar5 < 3);
  return;
}


