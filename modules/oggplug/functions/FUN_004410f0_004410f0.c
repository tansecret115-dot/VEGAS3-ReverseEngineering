/* Module: oggplug.dll
   Function: FUN_004410f0
   Address: 004410f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004410f0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  size_t _Size;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar2 = (int)param_2[1] / 0xff;
  iVar5 = param_1[3];
  if (iVar5 != 0) {
    _Size = param_1[2] - iVar5;
    param_1[2] = _Size;
    if (_Size != 0) {
      memmove((void *)*param_1,(void *)(*param_1 + iVar5),_Size);
    }
    param_1[3] = 0;
  }
  FUN_00441250(param_1,param_2[1]);
  FUN_00441280((int)param_1,iVar2 + 1);
  uVar4 = param_2[1];
  puVar7 = (undefined4 *)*param_2;
  puVar8 = (undefined4 *)(param_1[2] + *param_1);
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  iVar5 = 0;
  param_1[2] = param_1[2] + param_2[1];
  if (0 < iVar2) {
    do {
      *(undefined4 *)(param_1[4] + (param_1[7] + iVar5) * 4) = 0xff;
      iVar1 = param_1[5];
      iVar6 = param_1[7] + iVar5;
      iVar5 = iVar5 + 1;
      *(int *)(iVar1 + iVar6 * 8) = param_1[0x58];
      *(int *)(iVar1 + 4 + iVar6 * 8) = param_1[0x59];
    } while (iVar5 < iVar2);
  }
  *(int *)(param_1[4] + (param_1[7] + iVar5) * 4) = (int)param_2[1] % 0xff;
  iVar1 = param_1[7];
  iVar6 = param_1[5];
  *(undefined4 *)(iVar6 + (iVar1 + iVar5) * 8) = param_2[4];
  *(undefined4 *)(iVar6 + 4 + (iVar1 + iVar5) * 8) = param_2[5];
  iVar1 = param_1[7];
  param_1[0x58] = *(int *)(param_1[5] + (iVar5 + iVar1) * 8);
  param_1[0x59] = *(int *)(param_1[5] + 4 + (iVar5 + iVar1) * 8);
  *(uint *)(param_1[4] + iVar1 * 4) = *(uint *)(param_1[4] + iVar1 * 4) | 0x100;
  uVar4 = param_1[0x56];
  param_1[7] = param_1[7] + iVar2 + 1;
  param_1[0x56] = uVar4 + 1;
  param_1[0x57] = param_1[0x57] + (uint)(0xfffffffe < uVar4);
  if (param_2[3] != 0) {
    param_1[0x52] = 1;
  }
  return 0;
}


