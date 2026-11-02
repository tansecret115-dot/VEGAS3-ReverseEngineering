/* Module: sfpaplug.dll
   Function: FUN_004081a0
   Address: 004081a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004081a0(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint local_64 [25];
  
  iVar2 = param_4;
  iVar5 = 0;
  if (0 < param_4) {
    puVar4 = local_64;
    do {
      bVar1 = *(byte *)(iVar5 + param_3);
      *puVar4 = (uint)bVar1;
      if ((bVar1 & 0x80) == 0x80) {
        *puVar4 = -(bVar1 & 0xff7f);
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar5 < param_4);
  }
  if (param_4 < param_2) {
    piVar7 = (int *)(param_1 + param_4 * 4);
    param_4 = param_2 - param_4;
    do {
      iVar5 = 0;
      if (0 < iVar2) {
        puVar4 = local_64;
        iVar6 = iVar2;
        piVar3 = piVar7;
        do {
          piVar3 = piVar3 + -1;
          iVar5 = iVar5 + *piVar3 * *puVar4;
          puVar4 = puVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *piVar7 = *piVar7 - (iVar5 >> 5);
      piVar7 = piVar7 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


