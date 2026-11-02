/* Module: vidcap30.exe
   Function: FUN_00428d60
   Address: 00428d60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00428d60(int *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  bool bVar7;
  int *unaff_retaddr;
  undefined2 uStack_22;
  
  puVar1 = param_2;
  *param_2 = 0;
  if (*param_1 == 8) {
    piVar3 = (int *)param_1[0xec];
    if (piVar3 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar3 + 0x10))(piVar3,&param_2);
      if (iVar2 == 0) {
        iVar2 = 4;
        bVar7 = true;
        piVar3 = &DAT_005a35f8;
        piVar5 = unaff_retaddr;
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
          piVar5 = unaff_retaddr + 0xb;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar7 = *piVar3 == *piVar5;
            piVar3 = piVar3 + 1;
            piVar5 = piVar5 + 1;
          } while (bVar7);
          if (bVar7) {
            puVar4 = (undefined4 *)unaff_retaddr[0x11];
            puVar6 = (undefined4 *)&stack0xffffffa0;
            for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar6 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar6 = puVar6 + 1;
            }
            *(undefined2 *)(param_1 + 0xe0) = uStack_22;
          }
        }
        FUN_0057b1c0(unaff_retaddr);
      }
    }
    *puVar1 = (short)param_1[0xe0];
  }
  return 0;
}


