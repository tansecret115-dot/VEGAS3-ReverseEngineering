/* Module: g2plug.dll
   Function: FUN_5f80aaa0
   Address: 5f80aaa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f80aaa0(undefined4 *param_1,undefined4 *param_2,int *param_3,uint *param_4,uint *param_5)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*param_5 < *param_4 + 0x38) {
    if (*param_4 == 0) {
      *param_4 = 0x10;
    }
    pvVar1 = GlobalAlloc(0x42,*param_4 + 0x118);
    puVar2 = GlobalLock(pvVar1);
    if (puVar2 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    uVar4 = *param_4;
    if ((undefined4 *)*param_3 == (undefined4 *)0x0) {
      puVar6 = param_1;
      puVar7 = puVar2;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
    }
    else {
      puVar6 = (undefined4 *)*param_3;
      puVar7 = puVar2;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      pvVar1 = GlobalHandle((LPCVOID)*param_3);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)*param_3);
      GlobalFree(pvVar1);
    }
    *param_3 = (int)puVar2;
    *param_5 = *param_4 + 0x118;
  }
  puVar2 = (undefined4 *)(*param_3 + *param_4);
  for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(int *)(*param_3 + 8) = *(int *)(*param_3 + 8) + 1;
  *param_4 = *param_4 + 0x38;
  param_1[2] = param_1[2] + 1;
  return 0;
}


