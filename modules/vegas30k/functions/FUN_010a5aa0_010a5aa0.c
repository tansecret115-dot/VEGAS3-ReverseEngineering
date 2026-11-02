/* Module: vegas30k.dll
   Function: FUN_010a5aa0
   Address: 010a5aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010a5aa0(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(undefined4 **)(param_1 + 0xb4) != (undefined4 *)0x0) {
    if (*(uint *)(param_1 + 0x9c) <= *(uint *)(param_1 + 0xa0)) {
      *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0x9c);
    }
    if (*(uint *)(param_1 + 0xa0) < *(uint *)(param_1 + 0x98)) {
      *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0x98);
    }
    **(undefined4 **)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(*(int *)(param_1 + 0xb4) + -8 + *(int *)(param_1 + 0xa0) * 8) =
         *(undefined4 *)(param_1 + 0x94);
    if (*(int *)(param_1 + 0xa0) != 1 && -1 < *(int *)(param_1 + 0xa0) + -1) {
      iVar7 = 0;
      iVar5 = 1;
      do {
        iVar3 = *(int *)(iVar7 + *(int *)(param_1 + 0xb4));
        iVar6 = *(int *)(param_1 + 0x90);
        if ((iVar3 < *(int *)(param_1 + 0x90)) ||
           (iVar6 = *(int *)(param_1 + 0x94), *(int *)(param_1 + 0x94) < iVar3)) {
          iVar3 = iVar6;
        }
        *(int *)(iVar7 + *(int *)(param_1 + 0xb4)) = iVar3;
        iVar3 = *(int *)(param_1 + 0xa0);
        iVar6 = iVar5;
        if (iVar5 < iVar3) {
          do {
            if (*(int *)(*(int *)(param_1 + 0xb4) + iVar6 * 8) <=
                *(int *)(iVar7 + *(int *)(param_1 + 0xb4))) {
              iVar4 = iVar6;
              if (iVar6 < iVar3 + -1) {
                do {
                  iVar3 = *(int *)(param_1 + 0xb4);
                  iVar4 = iVar4 + 1;
                  *(undefined4 *)(iVar3 + -8 + iVar4 * 8) = *(undefined4 *)(iVar3 + iVar4 * 8);
                  *(undefined4 *)(iVar3 + -4 + iVar4 * 8) = *(undefined4 *)(iVar3 + 4 + iVar4 * 8);
                } while (iVar4 < *(int *)(param_1 + 0xa0) + -1);
              }
              *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
            }
            iVar3 = *(int *)(param_1 + 0xa0);
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar3);
        }
        iVar7 = iVar7 + 8;
        bVar2 = iVar5 < *(int *)(param_1 + 0xa0) + -1;
        iVar5 = iVar5 + 1;
      } while (bVar2);
    }
    piVar1 = (int *)(*(int *)(param_1 + 0xb4) + -8 + *(int *)(param_1 + 0xa0) * 8);
    iVar5 = *piVar1;
    iVar7 = *(int *)(param_1 + 0x90);
    if ((iVar5 < *(int *)(param_1 + 0x90)) ||
       (iVar7 = *(int *)(param_1 + 0x94), *(int *)(param_1 + 0x94) < iVar5)) {
      iVar5 = iVar7;
    }
    *piVar1 = iVar5;
    if (*(uint *)(param_1 + 0x9c) <= *(uint *)(param_1 + 0xa0)) {
      *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0x9c);
    }
    if (*(uint *)(param_1 + 0xa0) < *(uint *)(param_1 + 0x98)) {
      *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0x98);
    }
    **(undefined4 **)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(*(int *)(param_1 + 0xb4) + -8 + *(int *)(param_1 + 0xa0) * 8) =
         *(undefined4 *)(param_1 + 0x94);
    return 1;
  }
  return 0;
}


