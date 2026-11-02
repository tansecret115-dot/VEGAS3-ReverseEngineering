/* Module: vegas30.exe
   Function: FUN_005c8e80
   Address: 005c8e80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x005c8f75) */

undefined4 FUN_005c8e80(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar4 = 1;
  if ((*(uint *)(param_1 + 0x10) & param_3) != (param_2 & param_3 & param_3)) {
    iVar1 = *(int *)(param_1 + 8);
    puVar2 = *(undefined4 **)(iVar1 + 8);
    FUN_005b83b0(puVar2,1);
    uVar3 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = ~param_3 & uVar3 | param_2 & param_3;
    *(uint *)*puVar2 = *(uint *)*puVar2 | 0x80;
    if ((((*(uint *)(param_1 + 0x10) ^ uVar3) & 0x100) != 0) &&
       ((*(uint *)(param_1 + 0x10) & 0x100) != 0)) {
      iVar5 = FUN_005c68e0(param_1);
      while (iVar5 = iVar5 + -1, -1 < iVar5) {
        iVar6 = FUN_005c6910(param_1,iVar5);
        if ((*(uint *)(param_1 + 0x10) & 0x100) != 0) {
          lVar8 = 1;
          if (((*(int *)(iVar6 + 0x18) != 0) &&
              (iVar7 = FUN_005f13f0(*(undefined4 *)(param_1 + 4)), lVar8 = 1, iVar7 != 0)) &&
             (lVar8 = ftol(), lVar8 < 1)) {
            lVar8 = 1;
          }
          lVar9 = __allrem(*(undefined4 *)(iVar6 + 8),*(undefined4 *)(iVar6 + 0xc),lVar8);
          iVar7 = (int)((ulonglong)lVar9 >> 0x20);
          *(longlong *)(iVar6 + 8) = lVar9;
          if ((iVar7 < 1) && (lVar9 < 0)) {
            *(longlong *)(iVar6 + 8) = lVar8 + CONCAT44(iVar7,*(undefined4 *)(iVar6 + 8));
          }
          *(longlong *)(iVar6 + 0x10) = lVar8 - *(longlong *)(iVar6 + 8);
        }
      }
    }
    if ((((*(uint *)(param_1 + 0x10) ^ uVar3) & 0x103) != 0) && (iVar1 != 0)) {
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x200000;
      *(uint *)**(undefined4 **)(iVar1 + 8) = *(uint *)**(undefined4 **)(iVar1 + 8) | 0x2000;
    }
    if (((*(uint *)(param_1 + 0x10) & 0x400) != 0) || ((*(uint *)(iVar1 + 0x10) & 0x200) != 0)) {
      *(uint *)*puVar2 = *(uint *)*puVar2 | 0x400;
    }
    FUN_005b84d0(puVar2,1);
    uVar4 = 0;
  }
  return uVar4;
}


