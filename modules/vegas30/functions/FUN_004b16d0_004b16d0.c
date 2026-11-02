/* Module: vegas30.exe
   Function: FUN_004b16d0
   Address: 004b16d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_004b16d0(int param_1,int *param_2,uint param_3,int param_4,undefined4 param_5,undefined4 param_6
            ,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_c;
  int local_8;
  
  piVar1 = (int *)(param_1 + 0x1c);
  FUN_004b12a0(*(undefined4 *)(param_1 + 0x1c));
  *piVar1 = 0;
  if (param_2 != (int *)0x0) {
    local_8 = _SfList_CreateExZ_32(piVar1,4,0xffffffff,0xffffffff,&DAT_80000002,0,0,0);
    iVar8 = param_4;
    uVar7 = param_3;
    if (((-1 < local_8) && (iVar2 = *param_2, iVar2 != 0)) && (local_c = 0, 0 < iVar2)) {
      do {
        puVar3 = *(uint **)(param_2[2] + local_c * 4);
        iVar9 = FUN_004b1430(puVar3,uVar7,iVar8,param_5,param_6);
        if (((iVar9 != 0) &&
            (local_8 = _SfList_AllocAndInsertItem_20(*piVar1,0,0x14,0xffffffff,&param_3),
            -1 < local_8)) &&
           (puVar4 = *(undefined4 **)(*(int *)(*piVar1 + 8) + param_3 * 4),
           puVar4 != (undefined4 *)0x0)) {
          *puVar4 = 0x14;
          uVar5 = *puVar3;
          uVar6 = puVar3[1];
          puVar4[1] = uVar5 - uVar7;
          puVar4[2] = (uVar6 - iVar8) - (uint)(uVar5 < uVar7);
          puVar4[3] = param_7;
          puVar4[4] = param_8;
        }
        local_c = local_c + 1;
      } while (local_c < iVar2);
    }
    return local_8;
  }
  return 0;
}


