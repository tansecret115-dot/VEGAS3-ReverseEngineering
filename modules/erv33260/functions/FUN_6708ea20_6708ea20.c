/* Module: erv33260.dll
   Function: FUN_6708ea20
   Address: 6708ea20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6708ea20(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  piVar8 = param_1;
  iVar1 = param_1[4];
  iVar2 = *(int *)(*param_1 + 4);
  iVar3 = param_1[5];
  iVar4 = param_1[0x10];
  iVar5 = param_1[0x1b];
  iVar6 = param_1[0xd];
  param_1 = (int *)(param_1[0x11] * param_1[0x12]);
  if (param_1 != (int *)0x0) {
    iVar9 = 0;
    do {
      iVar7 = *(int *)(iVar6 + iVar9);
      FUN_6708eac0((ulonglong *)(iVar7 + iVar2),iVar7 + iVar1,iVar7 + iVar3,param_2,
                   *(uint *)(iVar6 + 0xc + iVar9),iVar4,
                   piVar8[7] + *(int *)(piVar8[0xd] + 8 + iVar9) * 2,(uint)(iVar5 == 2));
      iVar9 = iVar9 + 0x10;
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  return;
}


