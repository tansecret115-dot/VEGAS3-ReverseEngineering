/* Module: espr3260.dll
   Function: FUN_632f6250
   Address: 632f6250
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_632f6250(uint param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  puVar1 = param_3;
  param_3 = (undefined4 *)0x2;
  uVar6 = param_1 >> 8;
  puVar8 = puVar1;
  for (iVar5 = 0x30; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  do {
    uVar2 = param_1 & 7;
    param_1 = (int)param_1 >> 3;
    iVar5 = (int)param_3 + uVar2 * 3;
    iVar3 = iVar5 * 2;
    uVar2 = (uVar6 & 2) + iVar3;
    uVar7 = (int)uVar2 >> 0x1f;
    if (((uVar2 ^ uVar7) - uVar7 & 3 ^ uVar7) == uVar7) {
      if (iVar3 < 0x30) {
        iVar3 = iVar5 * 8;
        do {
          iVar4 = iVar3 + 4;
          *(float *)((int)puVar1 + iVar3) =
               *(float *)(param_2 + iVar3 + iVar5 * -8) + *(float *)((int)puVar1 + iVar3);
          iVar3 = iVar4;
        } while (iVar4 < 0xc0);
      }
    }
    else if (iVar3 < 0x30) {
      iVar3 = iVar5 * 8;
      do {
        iVar4 = iVar3 + 4;
        *(float *)((int)puVar1 + iVar3) =
             *(float *)((int)puVar1 + iVar3) - *(float *)(param_2 + iVar3 + iVar5 * -8);
        iVar3 = iVar4;
      } while (iVar4 < 0xc0);
    }
    param_3 = (undefined4 *)((int)param_3 + -1);
  } while (-1 < (int)param_3);
  return;
}


