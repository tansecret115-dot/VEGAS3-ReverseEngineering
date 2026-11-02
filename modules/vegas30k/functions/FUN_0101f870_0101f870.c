/* Module: vegas30k.dll
   Function: FUN_0101f870
   Address: 0101f870
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0101f901) */
/* WARNING: Removing unreachable block (ram,0x0101f8ed) */
/* WARNING: Removing unreachable block (ram,0x0101f8ef) */
/* WARNING: Removing unreachable block (ram,0x0101f8f3) */
/* WARNING: Removing unreachable block (ram,0x0101f8f8) */
/* WARNING: Removing unreachable block (ram,0x0101f92c) */
/* WARNING: Removing unreachable block (ram,0x0101f938) */
/* WARNING: Removing unreachable block (ram,0x0101f90a) */

int * FUN_0101f870(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  int *piVar8;
  int *piStack_1c;
  undefined4 *puStack_18;
  int *piStack_14;
  int local_8 [2];
  
  piVar5 = (int *)0x80004005;
  if (param_1 != (int *)0x0) {
    piStack_14 = local_8;
    puStack_18 = &DAT_011da130;
    piStack_1c = param_1;
    local_8[0] = 0;
    iVar2 = (**(code **)*param_1)();
    if ((-1 < iVar2) && (piStack_14 != (int *)0x0)) {
      local_8[0] = 0;
      piVar8 = piStack_14;
      iVar2 = (**(code **)(*piStack_14 + 0x10))(piStack_14,local_8);
      if ((-1 < iVar2) && (unaff_ESI != (int *)0x0)) {
        iVar3 = (**(code **)(*unaff_ESI + 0x14))(unaff_ESI);
        iVar2 = local_8[0];
        piVar1 = (int *)(local_8[0] + 0x260);
        do {
          if ((iVar3 != 0) ||
             (iVar3 = (**(code **)(*piStack_14 + 0xc))(piStack_14,1,iVar2,&piStack_1c), iVar3 < 0))
          goto LAB_0101f983;
          iVar4 = 4;
          bVar7 = true;
          piVar5 = piVar1;
          piVar6 = unaff_ESI;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            bVar7 = *piVar5 == *piVar6;
            piVar5 = piVar5 + 1;
            piVar6 = piVar6 + 1;
          } while (bVar7);
          piVar5 = piVar8;
        } while (!bVar7);
        piVar5 = (int *)0x0;
LAB_0101f983:
        (**(code **)(*piStack_14 + 8))(piStack_14);
      }
      (**(code **)(*piStack_1c + 8))(piStack_1c);
    }
  }
  return piVar5;
}


