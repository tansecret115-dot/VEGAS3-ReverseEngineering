/* Module: vidcap30.exe
   Function: FUN_00428c90
   Address: 00428c90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00428c90(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  bool bVar7;
  int *unaff_retaddr;
  int iStack_2c;
  uint uStack_28;
  int *piStack_4;
  
  piVar3 = param_2;
  piVar1 = param_1;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 == 8) {
    if (((param_1[0x53] & 0x10U) == 0) && (piVar5 = (int *)param_1[0xec], piVar5 != (int *)0x0)) {
      iVar2 = (**(code **)(*piVar5 + 0x10))(piVar5,&param_1);
      if (iVar2 == 0) {
        iVar2 = 4;
        bVar7 = true;
        piVar3 = &DAT_005a35f8;
        piVar5 = piStack_4;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar7 = *piVar3 == *piVar5;
          piVar3 = piVar3 + 1;
          piVar5 = piVar5 + 1;
        } while (bVar7);
        if (bVar7) {
          iVar2 = 4;
          bVar7 = true;
          piVar3 = &DAT_005a2ba8;
          piVar5 = piStack_4 + 0xb;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar7 = *piVar3 == *piVar5;
            piVar3 = piVar3 + 1;
            piVar5 = piVar5 + 1;
          } while (bVar7);
          if (bVar7) {
            puVar4 = (undefined4 *)piStack_4[0x11];
            puVar6 = (undefined4 *)&stack0xffffffa0;
            for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar6 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar6 = puVar6 + 1;
            }
            piVar1[0xdc] = iStack_2c;
            piVar1[0xdd] = (uStack_28 ^ (int)uStack_28 >> 0x1f) - ((int)uStack_28 >> 0x1f);
          }
        }
        FUN_0057b1c0(piStack_4);
        piVar3 = unaff_retaddr;
      }
    }
    *piVar3 = piVar1[0xdc];
    piVar3[1] = piVar1[0xdd];
  }
  return 0;
}


