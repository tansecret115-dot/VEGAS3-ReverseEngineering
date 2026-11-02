/* Module: tokr3260.dll
   Function: FUN_68059e20
   Address: 68059e20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_68059e20(int param_1,int param_2,int *param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int aiStack_7c [8];
  int aiStack_5c [8];
  int local_3c [4];
  undefined1 local_2c [16];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  piVar9 = param_3;
  if (0 < param_5) {
    local_c = 0;
    local_8 = param_4;
    local_18 = param_1 - (int)param_4;
    local_14 = param_5;
    do {
      iVar5 = local_c;
      local_1c = *(undefined4 *)(local_18 + (int)local_8);
      puVar2 = (undefined4 *)*local_8;
      iVar3 = 0;
      iVar4 = local_c;
      do {
        iVar6 = iVar4 + 4;
        *(int *)((int)aiStack_5c + iVar4) = puVar2[2] + iVar3;
        *(int *)((int)aiStack_7c + iVar4) = puVar2[2] + 0x400 + iVar3;
        iVar1 = puVar2[2] + 0x800 + iVar3;
        iVar3 = iVar3 + 0xc00;
        *(int *)((int)local_3c + iVar4) = iVar1;
        iVar4 = iVar6;
      } while (iVar3 < 0x3000);
      local_10 = 4;
      do {
        puVar7 = *(undefined4 **)((int)aiStack_7c + iVar5);
        puVar8 = *(undefined4 **)((int)aiStack_5c + iVar5);
        for (iVar4 = 0x200; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar7 = *(undefined4 **)((int)local_3c + iVar5);
        for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        iVar5 = iVar5 + 4;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      FUN_68059b60(local_1c,(undefined4 *)((int)local_3c + local_c),(undefined4 *)*puVar2);
      local_8 = local_8 + 1;
      local_14 = local_14 + -1;
      local_c = iVar6;
    } while (local_14 != 0);
  }
  if ((param_5 == 2) && (param_6 == 0x12)) {
    FUN_68058e80(*param_3,param_3[1],(float)local_3c,(float)local_2c);
    FUN_68052810(local_3c,(int)local_2c,param_3[1]);
  }
  param_3 = (int *)0x0;
  if (0 < param_5) {
    iVar5 = param_2 - (int)piVar9;
    iVar4 = (int)param_4 - (int)piVar9;
    param_4 = (int *)0x0;
    while( true ) {
      local_1c = *(int *)(iVar5 + (int)piVar9);
      iVar3 = *piVar9;
      iVar1 = *(int *)(iVar4 + (int)piVar9);
      iVar6 = FUN_68059d90((int *)((int)aiStack_5c + (int)param_4),
                           (int *)(*(int *)(iVar3 + 0xf218) + 0x10),(int *)(iVar3 + 0x10));
      if ((iVar6 == -999999) ||
         (iVar3 = FUN_68059bf0((int *)((int)aiStack_7c + (int)param_4),local_1c,
                               (int *)(*(int *)(iVar3 + 0xf218) + 0x10),iVar3 + 0x10,4,
                               *(int **)(iVar1 + 4)), iVar3 == -999999)) break;
      param_3 = (int *)((int)param_3 + 1);
      piVar9 = piVar9 + 1;
      param_4 = param_4 + 4;
      if (param_5 <= (int)param_3) {
        return 0;
      }
    }
    return 0xfff0bdc1;
  }
  return 0;
}


