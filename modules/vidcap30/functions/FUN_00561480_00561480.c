/* Module: vidcap30.exe
   Function: FUN_00561480
   Address: 00561480
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00561480(int param_1)

{
  int iVar1;
  undefined4 in_EAX;
  short *psVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_8;
  undefined4 *local_4;
  
  iVar1 = param_1;
  param_1._0_1_ = 0;
  psVar2 = (short *)CONCAT31((int3)((uint)in_EAX >> 8),*(char *)(iVar1 + 0xfa));
  iVar8 = *(int *)(iVar1 + 0x1b1);
  if (*(char *)(iVar1 + 0xfa) != '\0') {
    iVar6 = 0;
    psVar2 = (short *)0x0;
    if (*(int *)(iVar1 + 0xbe) != 0) {
      if (*(int *)(iVar8 + 0x70) == 0) {
        uVar3 = (*(code *)**(undefined4 **)(iVar1 + 4))(iVar1,1,*(int *)(iVar1 + 0x5d) * 0x18);
        *(undefined4 *)(iVar8 + 0x70) = uVar3;
      }
      iVar8 = *(int *)(iVar8 + 0x70);
      iVar5 = *(int *)(iVar1 + 0xf6);
      if (0 < *(int *)(iVar1 + 0x5d)) {
        local_4 = (undefined4 *)(iVar5 + 0x49);
        local_8 = 0;
        param_1._0_1_ = 0;
        do {
          psVar2 = (short *)*local_4;
          if (((((psVar2 == (short *)0x0) || (*psVar2 == 0)) || (psVar2[1] == 0)) ||
              ((psVar2[8] == 0 || (psVar2[0x10] == 0)))) ||
             ((psVar2[9] == 0 ||
              ((psVar2[2] == 0 || (piVar4 = (int *)(*(int *)(iVar1 + 0xbe) + local_8), *piVar4 < 0))
              )))) goto LAB_00561595;
          iVar5 = iVar8 - (int)piVar4;
          iVar7 = 5;
          do {
            piVar4 = piVar4 + 1;
            *(int *)(iVar5 + (int)piVar4) = *piVar4;
            if (*piVar4 != 0) {
              param_1._0_1_ = 1;
            }
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          iVar5 = *(int *)(iVar1 + 0x5d);
          iVar8 = iVar8 + 0x18;
          iVar6 = iVar6 + 1;
          local_8 = local_8 + 0x100;
          local_4 = (undefined4 *)((int)local_4 + 0x51);
        } while (iVar6 < iVar5);
      }
      return CONCAT31((int3)((uint)iVar5 >> 8),(undefined1)param_1);
    }
  }
LAB_00561595:
  return (uint)psVar2 & 0xffffff00;
}


