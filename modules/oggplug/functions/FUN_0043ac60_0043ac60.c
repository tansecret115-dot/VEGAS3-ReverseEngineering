/* Module: oggplug.dll
   Function: FUN_0043ac60
   Address: 0043ac60
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_0043ac60(int param_1,int *param_2,int param_3,int param_4,undefined *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  piVar1 = (int *)*param_2;
  iVar9 = piVar1[1];
  iVar11 = *piVar1;
  iVar2 = piVar1[2];
  iVar3 = piVar1[3];
  iVar4 = (iVar9 - iVar11) / iVar2;
  piVar5 = (int *)FUN_00430ed0(param_1,4);
  FUN_00444a80();
  uVar6 = ((iVar9 - iVar11) * param_4) / iVar2;
  puVar7 = (undefined4 *)FUN_00430ed0(param_1,uVar6 << 2);
  *piVar5 = (int)puVar7;
  for (uVar6 = uVar6 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined1 *)puVar7 = 0;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  iVar9 = *piVar1;
  iVar11 = 0;
  param_1 = 0;
  if (0 < iVar4) {
    do {
      puVar7 = (undefined4 *)&stack0xffffffe0;
      iVar10 = iVar2;
      if (0 < iVar2) {
        do {
          iVar11 = iVar11 + 1;
          *puVar7 = *(undefined4 *)(*(int *)(param_3 + -4 + iVar11 * 4) + iVar9 * 4);
          if (param_4 <= iVar11) {
            iVar11 = 0;
            iVar9 = iVar9 + 1;
          }
          iVar10 = iVar10 + -1;
          puVar7 = puVar7 + 1;
        } while (iVar10 != 0);
      }
      uVar8 = (*(code *)param_5)(&stack0xffffffe0,iVar2,param_2,iVar3,param_1);
      *(undefined4 *)(*piVar5 + param_1 * 4) = uVar8;
      param_1 = param_1 + 1;
    } while (param_1 < iVar4);
  }
  param_2[0xb] = param_2[0xb] + 1;
  return piVar5;
}


