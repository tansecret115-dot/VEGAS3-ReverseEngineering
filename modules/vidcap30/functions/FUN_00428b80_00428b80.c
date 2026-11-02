/* Module: vidcap30.exe
   Function: FUN_00428b80
   Address: 00428b80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00428b80(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 auStack_58 [22];
  
  piVar2 = param_1;
  if (*param_1 == 8) {
    if (((param_1[0x53] & 0x10U) == 0) && (piVar1 = (int *)param_1[0xec], piVar1 != (int *)0x0)) {
      iVar3 = (**(code **)(*piVar1 + 0x10))(piVar1,&param_1);
      piVar1 = param_1;
      if (iVar3 == 0) {
        iVar3 = 4;
        bVar9 = true;
        piVar5 = &DAT_005a35f8;
        piVar7 = param_1;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar9 = *piVar5 == *piVar7;
          piVar5 = piVar5 + 1;
          piVar7 = piVar7 + 1;
        } while (bVar9);
        if (bVar9) {
          iVar3 = 4;
          bVar9 = true;
          piVar5 = &DAT_005a2ba8;
          piVar7 = param_1 + 0xb;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar9 = *piVar5 == *piVar7;
            piVar5 = piVar5 + 1;
            piVar7 = piVar7 + 1;
          } while (bVar9);
          if (bVar9) {
            puVar6 = (undefined4 *)param_1[0x11];
            puVar8 = auStack_58;
            for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar8 = puVar8 + 1;
            }
            uVar4 = ftol();
            *(double *)(piVar2 + 0xda) = (double)uVar4 * _DAT_0058a8f0;
          }
        }
        FUN_0057b1c0(piVar1);
      }
    }
    *param_2 = piVar2[0xda];
    param_2[1] = piVar2[0xdb];
  }
  return 0;
}


