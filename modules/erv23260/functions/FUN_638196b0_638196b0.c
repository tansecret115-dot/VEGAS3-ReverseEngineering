/* Module: erv23260.dll
   Function: FUN_638196b0
   Address: 638196b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_638196b0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int local_10;
  
  bVar7 = **(byte **)(param_1 + 8) & 0x1f;
  iVar2 = (-(uint)((**(byte **)(param_1 + 4) & 0x1f) != 5) & 0xfffffffd) + 4;
  iVar8 = *(int *)(param_1 + 0x14) - *(int *)((int)this + 0x390);
  iVar9 = iVar8 >> 3;
  iVar8 = iVar8 >> 0x1f;
  iVar3 = (int)(CONCAT44(iVar8,iVar9) / (longlong)*(int *)((int)this + 0x3b4));
  iVar8 = (int)(CONCAT44(iVar8,iVar9) % (longlong)*(int *)((int)this + 0x3b4));
  if (bVar7 == 0x11) {
    local_10 = 0;
    if (0 < iVar2) {
      do {
        iVar9 = local_10 * 8;
        iVar4 = *(int *)(iVar9 + *(int *)(param_1 + 0x10)) * *(int *)(param_1 + 0x4c);
        iVar5 = *(int *)(iVar9 + *(int *)(param_1 + 0x10) + 4) * *(int *)(param_1 + 0x4c);
        iVar6 = (int)(iVar4 + (iVar4 >> 0x1f & 0xffU)) >> 8;
        iVar4 = (int)(iVar5 + (iVar5 >> 0x1f & 0xffU)) >> 8;
        *(int *)(*(int *)(param_1 + 0x1c) + iVar9) = iVar6 + **(int **)(param_1 + 0x14);
        *(int *)(*(int *)(param_1 + 0x1c) + 4 + iVar9) =
             *(int *)(*(int *)(param_1 + 0x14) + 4) + iVar4;
        FUN_63819060(this,iVar6,iVar4,(int *)(*(int *)(param_1 + 0x1c) + iVar9));
        if (**(int **)(param_1 + 0x14) == 0) {
          iVar4 = *(int *)(iVar9 + *(int *)(param_1 + 0x10)) * *(int *)(param_1 + 0x50);
          iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 0xffU)) >> 8;
        }
        else {
          iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar9) -
                  *(int *)(iVar9 + *(int *)(param_1 + 0x10));
        }
        *(int *)(*(int *)(param_1 + 0x20) + iVar9) = iVar4;
        if (*(int *)(*(int *)(param_1 + 0x14) + 4) == 0) {
          iVar4 = *(int *)(iVar9 + 4 + *(int *)(param_1 + 0x10)) * *(int *)(param_1 + 0x50);
          *(int *)(*(int *)(param_1 + 0x20) + 4 + iVar9) =
               (int)(iVar4 + (iVar4 >> 0x1f & 0xffU)) >> 8;
        }
        else {
          *(int *)(*(int *)(param_1 + 0x20) + 4 + iVar9) =
               *(int *)(*(int *)(param_1 + 0x1c) + 4 + iVar9) -
               *(int *)(iVar9 + 4 + *(int *)(param_1 + 0x10));
        }
        iVar4 = *(int *)(*(int *)(param_1 + 0x20) + iVar9);
        if (iVar4 < 1) {
          iVar5 = (-1 - iVar8) * 0x20;
          if (iVar5 < iVar4) goto LAB_63819824;
        }
        else {
          iVar5 = (*(int *)((int)this + 0x3b4) - iVar8) * 0x20;
          if (iVar4 < iVar5) {
LAB_63819824:
            iVar5 = iVar4;
          }
        }
        *(int *)(*(int *)(param_1 + 0x20) + iVar9) = iVar5;
        piVar1 = (int *)(*(int *)(param_1 + 0x20) + 4 + iVar9);
        iVar9 = *piVar1;
        if (iVar9 < 1) {
          iVar4 = (-1 - iVar3) * 0x20;
          if (iVar4 < iVar9) goto LAB_63819858;
        }
        else {
          iVar4 = (*(int *)((int)this + 0x3b8) - iVar3) * 0x20;
          if (iVar9 < iVar4) {
LAB_63819858:
            iVar4 = iVar9;
          }
        }
        *piVar1 = iVar4;
        local_10 = local_10 + 1;
      } while (local_10 < iVar2);
    }
  }
  else {
    **(undefined4 **)(param_1 + 0x1c) = **(undefined4 **)(param_1 + 0x14);
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 4);
    **(undefined4 **)(param_1 + 0x20) = **(undefined4 **)(param_1 + 0x18);
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 4) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 4);
  }
  if ((bVar7 != 0x11) || (iVar2 == 1)) {
    (*(undefined4 **)(param_1 + 0x1c))[6] = **(undefined4 **)(param_1 + 0x1c);
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10) =
         *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18);
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 8) = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10)
    ;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4)
    ;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14) =
         *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x1c);
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) =
         *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14);
    (*(undefined4 **)(param_1 + 0x20))[6] = **(undefined4 **)(param_1 + 0x20);
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10) =
         *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x18);
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 8) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x10)
    ;
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 4)
    ;
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x14) =
         *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1c);
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc) =
         *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x14);
  }
  return;
}


