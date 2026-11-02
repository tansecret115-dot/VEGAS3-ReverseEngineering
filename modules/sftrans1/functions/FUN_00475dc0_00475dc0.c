/* Module: sftrans1.dll
   Function: FUN_00475dc0
   Address: 00475dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00475dc0(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  int local_28;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x34);
  iVar4 = *(int *)(param_1 + 0x38);
  dVar7 = (double)iVar3 * _DAT_00557838;
  iVar5 = *param_3;
  local_28 = 0;
  dVar8 = (double)iVar4 * _DAT_00557838;
  if (0 < iVar5) {
    do {
      iVar6 = *(int *)(param_3[2] + local_28 * 4);
      if (iVar6 != 0) {
        if (((code *)(&PTR_FUN_00574524)[*(int *)(iVar6 + 0x60)] != (code *)0x0) &&
           (*(int *)(*(int *)(iVar6 + 0x60) * 0x20 + 0x50 + param_2) != 0)) {
          (*(code *)(&PTR_FUN_00574524)[*(int *)(iVar6 + 0x60)])
                    (iVar6,uVar1,uVar2,iVar3,iVar4,param_5,dVar7,dVar8,dVar7,dVar8,param_4);
        }
      }
      local_28 = local_28 + 1;
    } while (local_28 < iVar5);
  }
  return 0;
}


