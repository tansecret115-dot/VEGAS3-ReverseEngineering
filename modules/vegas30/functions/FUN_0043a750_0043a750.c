/* Module: vegas30.exe
   Function: FUN_0043a750
   Address: 0043a750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043a750(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_6cc [435];
  
  piVar5 = (int *)(param_1 + 0x9c);
  iVar2 = FUN_0043a430(*(undefined4 *)(param_1 + 0x14),piVar5,0x57);
  *(int *)(param_1 + 0x98) = iVar2;
  if (iVar2 != 0) {
    iVar3 = iVar2;
    puVar6 = local_6cc;
    do {
      iVar1 = *piVar5;
      piVar5 = piVar5 + 2;
      iVar3 = iVar3 + -1;
      puVar7 = (undefined4 *)(&DAT_00610ff8 + iVar1 * 0x14);
      puVar8 = puVar6;
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar6 = puVar6 + 5;
    } while (iVar3 != 0);
  }
  iVar2 = FUN_0043bc10(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x14),local_6cc,iVar2,
                       param_1 + 0x84);
  *(int *)(param_1 + 0x80) = iVar2;
  if (iVar2 != 0) {
    FUN_0043a6a0(param_1);
    return 0;
  }
  return 0xffffffff;
}


