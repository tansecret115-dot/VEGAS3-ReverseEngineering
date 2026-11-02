/* Module: oggplug.dll
   Function: FUN_004316a0
   Address: 004316a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004316a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(iVar3 + 0x1c);
  if (param_2 < 1) {
    FUN_00444a80();
    if (*(int *)(param_1 + 0x1c) == 0) {
      FUN_004317e0(param_1);
    }
    FUN_004315d0(param_1,*(int *)(iVar1 + 4) << 1);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x14);
    iVar6 = 0;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)(iVar1 + 4) * 2;
    if (0 < *(int *)(iVar3 + 4)) {
      do {
        iVar5 = *(int *)(param_1 + 0x20);
        if (iVar5 < 0x41) {
          puVar7 = (undefined4 *)(*(int *)(*(int *)(param_1 + 8) + iVar6 * 4) + iVar5 * 4);
          for (uVar4 = *(int *)(param_1 + 0x14) - iVar5 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1)
          {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined1 *)puVar7 = 0;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
        }
        else {
          iVar2 = iVar5;
          if (*(int *)(iVar1 + 4) < iVar5) {
            iVar2 = *(int *)(iVar1 + 4);
          }
          FUN_00438430(*(int *)(*(int *)(param_1 + 8) + iVar6 * 4) + (iVar5 - iVar2) * 4,
                       (float *)&stack0xffffffec,iVar2,0x20);
          iVar5 = *(int *)(param_1 + 0x20);
          iVar2 = *(int *)(*(int *)(param_1 + 8) + iVar6 * 4);
          FUN_00438690((int)&stack0xffffffec,iVar2 + -0x80 + iVar5 * 4,0x20,
                       (float *)(iVar2 + iVar5 * 4),*(int *)(param_1 + 0x14) - iVar5);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar3 + 4));
      return 0;
    }
  }
  else {
    iVar3 = param_2 + *(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x10) < iVar3) {
      return 0xffffff7d;
    }
    *(int *)(param_1 + 0x14) = iVar3;
    if ((*(int *)(param_1 + 0x1c) == 0) && (*(int *)(iVar1 + 4) < iVar3 - *(int *)(param_1 + 0x30)))
    {
      FUN_004317e0(param_1);
    }
  }
  return 0;
}


