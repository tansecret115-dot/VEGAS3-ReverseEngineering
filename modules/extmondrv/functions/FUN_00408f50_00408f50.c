/* Module: extmondrv.dll
   Function: FUN_00408f50
   Address: 00408f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00408f50(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = param_2 + -1;
  if (0 < iVar3) {
    puVar4 = (undefined4 *)(param_1 + -0x18 + iVar3 * 0x18);
    do {
      if ((1 < (int)puVar4[0xb]) && (iVar2 = iVar3 + -1, puVar1 = puVar4, 1 < iVar3)) {
        do {
          if ((int)puVar1[5] < 2) {
            *puVar1 = puVar4[6];
            puVar1[1] = puVar4[7];
            break;
          }
          iVar2 = iVar2 + -1;
          puVar1 = puVar1 + -6;
        } while (0 < iVar2);
      }
      iVar3 = iVar3 + -1;
      puVar4 = puVar4 + -6;
    } while (0 < iVar3);
  }
  return;
}


