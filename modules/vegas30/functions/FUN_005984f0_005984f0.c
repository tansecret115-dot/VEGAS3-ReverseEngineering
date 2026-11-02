/* Module: vegas30.exe
   Function: FUN_005984f0
   Address: 005984f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005984f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar3 = param_1;
  piVar4 = (int *)FUN_005b87b0(*(undefined4 *)(param_1 + 0x68));
  iVar1 = *piVar4;
  param_1 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(piVar4[2] + param_1 * 4);
      if (*(int *)(iVar2 + 4) == 2) {
        FUN_00595760(iVar3,iVar2);
        *(undefined4 *)(iVar2 + 0x400) = 1;
        *(undefined4 *)(iVar2 + 0x404) = 0xc0000000;
        puVar6 = (undefined4 *)(iVar2 + 0x400);
        puVar7 = (undefined4 *)(iVar2 + 0x408);
        for (iVar5 = 0x72; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        *(undefined4 *)(iVar2 + 0x5d8) = param_2;
        *(undefined4 *)(iVar2 + 0x5dc) = param_3;
        FUN_00595790(iVar3,iVar2);
      }
      param_1 = param_1 + 1;
    } while (param_1 < iVar1);
  }
  return;
}


