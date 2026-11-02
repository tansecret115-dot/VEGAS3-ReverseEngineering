/* Module: rmbe3260.dll
   Function: FUN_66059b10
   Address: 66059b10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl
FUN_66059b10(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_8;
  
  iVar6 = -1;
  local_8 = -1;
  iVar5 = 0;
  piVar1 = &DAT_66074b70;
  do {
    if (param_1 == *piVar1) {
      iVar6 = iVar5;
    }
    if (param_3 == *piVar1) {
      local_8 = iVar5;
    }
    piVar1 = piVar1 + 1;
    iVar5 = iVar5 + 1;
  } while ((int)piVar1 < 0x66074b8c);
  if (iVar6 == -1) {
    return -1;
  }
  if (local_8 == -1) {
    return -1;
  }
  puVar2 = malloc(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    return -1;
  }
  puVar7 = puVar2;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *puVar2 = param_2;
  local_8 = iVar6 * 7 + local_8;
  puVar2[5] = 0;
  iVar6 = local_8 * 4;
  puVar2[1] = param_4;
  param_3 = 0;
  puVar2[3] = *(undefined4 *)(iVar6 + 0x66074b90);
  puVar2[4] = *(undefined4 *)(iVar6 + 0x66074c58);
  puVar2[6] = (&PTR_DAT_66074de8)[local_8];
  puVar2[2] = *(undefined4 *)(iVar6 + 0x66074d20);
  if (0 < param_4) {
    puVar7 = puVar2 + 7;
    do {
      pvVar3 = malloc((param_5 + puVar2[2]) * 4);
      *puVar7 = pvVar3;
      if (pvVar3 == (void *)0x0) {
        return -1;
      }
      puVar7[2] = (void *)((int)pvVar3 + puVar2[2] * 4);
      puVar8 = (undefined4 *)*puVar7;
      for (uVar4 = puVar2[2] & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 1;
    } while (param_3 < param_4);
  }
  *param_6 = puVar2;
  return (param_5 * puVar2[3]) / (int)puVar2[4] +
         (uint)((param_5 * puVar2[3]) % (int)puVar2[4] != 0);
}


