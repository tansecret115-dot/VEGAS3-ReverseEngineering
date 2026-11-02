/* Module: erv23260.dll
   Function: FUN_637f5480
   Address: 637f5480
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_637f5480(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStackY_320 [91];
  undefined4 uStackY_1b4;
  undefined4 local_194 [96];
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  uStackY_1b4 = 0x637f54a8;
  FUN_637f55f0(param_1,&local_14,&local_10,(int)local_194,&local_c);
  FUN_637f5690(param_1,&local_14,&local_10,(int)local_194);
  puVar3 = local_194;
  puVar4 = auStackY_320;
  for (iVar2 = 0x60; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_637f5900((int)param_1);
  *(byte *)(*(int *)((int)param_1 + 0x20) + *(int *)((int)param_1 + 0x90)) =
       *(byte *)(*(int *)((int)param_1 + 0x20) + *(int *)((int)param_1 + 0x90)) & 0xbf;
  if (local_14 == 1) {
    if (local_10 < *(int *)((int)param_1 + 0xa0) * 0x10) {
      iVar2 = *(int *)((int)param_1 + 0x90);
      iVar1 = *(int *)((int)param_1 + 0x28);
      *(int *)(iVar1 + iVar2 * 0x20) = local_c;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 0x20) = local_8;
      iVar1 = *(int *)((int)param_1 + 0x28);
      *(int *)(iVar1 + 8 + iVar2 * 0x20) = local_c;
      *(undefined4 *)(iVar1 + 0xc + iVar2 * 0x20) = local_8;
      iVar1 = *(int *)((int)param_1 + 0x28);
      *(int *)(iVar1 + 0x10 + iVar2 * 0x20) = local_c;
      *(undefined4 *)(iVar1 + 0x14 + iVar2 * 0x20) = local_8;
      iVar1 = *(int *)((int)param_1 + 0x28);
      *(int *)(iVar1 + 0x18 + iVar2 * 0x20) = local_c;
      *(undefined4 *)(iVar1 + 0x1c + iVar2 * 0x20) = local_8;
    }
  }
  else if ((1 < local_14) && (local_14 < 4)) {
    iVar2 = *(int *)((int)param_1 + 4);
    if (((iVar2 == 0x15) || (iVar2 == 0x16)) &&
       ((*(int *)((int)param_1 + 0x38) == 0 ||
        ((1 < *(uint *)((int)param_1 + 0xa0) &&
         (*(uint *)((int)param_1 + 0x2c) < *(uint *)((int)param_1 + 0x30) >> 2)))))) {
LAB_637f5571:
      *(undefined1 *)(*(int *)((int)param_1 + 0x24) + *(int *)((int)param_1 + 0x90)) = 0;
      return;
    }
    if ((iVar2 != 0x15) && ((iVar2 != 0x16 && (1 < *(uint *)((int)param_1 + 0xa0))))) {
      if ((*(uint *)((int)param_1 + 0x2c) < *(uint *)((int)param_1 + 0x30) >> 2) ||
         ((*(int *)((int)param_1 + 0x38) == 0 &&
          (*(uint *)((int)param_1 + 0x2c) < *(uint *)((int)param_1 + 0x30) >> 1))))
      goto LAB_637f5571;
    }
  }
  return;
}


