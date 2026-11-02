/* Module: vfplugs.dll
   Function: FUN_00431430
   Address: 00431430
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00431430(int param_1,RECT *param_2,int param_3,undefined4 *param_4,int param_5,RECT *param_6
                ,int param_7,undefined4 *param_8,undefined4 *param_9)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar2 = param_9;
  iVar1 = param_7;
  iVar3 = FUN_00430fa0((int *)&param_6,&param_7,(int *)&param_9,(int *)&param_8,param_1,param_2,
                       param_3,param_4,param_5,param_6,param_7,param_8,(int)param_9);
  if ((-1 < iVar3) && (iVar5 = 0, 0 < param_7)) {
    do {
      puVar6 = param_9;
      puVar7 = param_8;
      for (uVar4 = (uint)((int)param_6 * (int)puVar2) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = (int)param_6 * (int)puVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      param_9 = (undefined4 *)((int)param_9 + iVar1);
      param_8 = (undefined4 *)((int)param_8 + param_3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_7);
  }
  return iVar3;
}


