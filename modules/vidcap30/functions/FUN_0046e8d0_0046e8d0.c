/* Module: vidcap30.exe
   Function: FUN_0046e8d0
   Address: 0046e8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0046e8d0(char *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  LPCVOID pMem;
  char *pcVar7;
  HGLOBAL pvVar8;
  int iVar9;
  char *local_18;
  int *local_14;
  int local_10;
  char *local_c;
  LPCVOID local_8;
  undefined4 local_4;
  
  local_18 = param_1;
  local_c = (char *)FUN_0046ed20();
  puVar5 = param_2;
  if (local_c == (char *)0x0) {
    return -0x7ff8fff2;
  }
  iVar9 = -0x7fffbffb;
  if (param_1 == local_c) {
    if (param_2[2] != 0) {
      return -0x7fffbffb;
    }
    if (*(int *)(param_2[1] + 0x128) != 0) {
      return 0;
    }
    iVar9 = FUN_0046ff10(&param_2,&local_8);
    if (iVar9 < 0) {
      return iVar9;
    }
    if (local_8 == (LPCVOID)0x0) {
      return iVar9;
    }
    FUN_00470da0();
    pvVar8 = GlobalHandle(local_8);
    GlobalUnlock(pvVar8);
    pvVar8 = GlobalHandle(local_8);
    GlobalFree(pvVar8);
    return iVar9;
  }
  if (param_2[2] != 0) {
    return -0x7fffbffb;
  }
  if (((*param_1 != '\0') && (param_2 != (undefined4 *)0x0)) && ((*(byte *)(param_2 + 6) & 2) != 2))
  {
    local_10 = 0;
    if (&stack0x00000000 != (undefined1 *)0x8) {
      local_8 = (LPCVOID)param_2[1];
      local_4 = param_2[2];
    }
    local_14 = param_2 + 4;
    if (((*(byte *)(*local_14 + 0x18) & 2) != 2) && ((*(byte *)(param_2[5] + 0x18) & 2) != 2)) {
      FUN_0046feb0();
    }
    puVar6 = param_2;
    iVar9 = param_2[4];
    piVar1 = param_2 + 4;
    if ((*(byte *)(iVar9 + 0x18) & 2) == 2) {
      iVar9 = param_2[5];
    }
    piVar2 = param_2 + 3;
    *(undefined4 *)(iVar9 + 0xc) = param_2[3];
    iVar4 = *piVar2;
    if ((*(byte *)(iVar4 + 0x18) & 2) == 2) {
      *(int *)(local_18 + 8) = iVar9;
    }
    else if (param_2 == *(undefined4 **)(iVar4 + 0x10)) {
      *(int *)(iVar4 + 0x10) = iVar9;
    }
    else {
      *(int *)(iVar4 + 0x14) = iVar9;
    }
    if (param_2 != puVar5) {
      *puVar5 = *param_2;
      puVar5[1] = param_2[1];
      puVar5[2] = param_2[2];
    }
    if ((*(byte *)(param_2 + 6) & 1) == 1) {
      FUN_00470730(iVar9);
    }
    if (puVar6 != puVar5) {
      *(byte *)(puVar6 + 6) =
           (*(byte *)(puVar5 + 6) ^ *(byte *)(puVar6 + 6)) & 1 ^ *(byte *)(puVar6 + 6);
      iVar9 = puVar5[3];
      if (*(undefined4 **)(iVar9 + 0x10) == puVar5) {
        *(undefined4 **)(iVar9 + 0x10) = puVar6;
      }
      else if (*(undefined4 **)(iVar9 + 0x14) == puVar5) {
        *(undefined4 **)(iVar9 + 0x14) = puVar6;
      }
      *piVar2 = puVar5[3];
      if (*(undefined4 **)(*local_14 + 0xc) == puVar5) {
        *(undefined4 **)(*local_14 + 0xc) = puVar6;
      }
      *piVar1 = *local_14;
      if (*(undefined4 **)(puVar5[5] + 0xc) == puVar5) {
        *(undefined4 **)(puVar5[5] + 0xc) = puVar6;
      }
      puVar6[5] = puVar5[5];
      if (*(undefined4 **)(*(int *)(local_18 + 0xc) + 0xc) == puVar5) {
        *(undefined4 **)(*(int *)(local_18 + 0xc) + 0xc) = puVar6;
      }
      if (*(undefined4 **)(*(int *)(local_18 + 0xc) + 0x10) == puVar5) {
        *(undefined4 **)(*(int *)(local_18 + 0xc) + 0x10) = puVar6;
      }
      if (*(undefined4 **)(*(int *)(local_18 + 0xc) + 0x14) == puVar5) {
        *(undefined4 **)(*(int *)(local_18 + 0xc) + 0x14) = puVar6;
      }
      if (*(undefined4 **)(local_18 + 8) == puVar5) {
        *(undefined4 **)(local_18 + 8) = puVar6;
      }
    }
    FUN_00470a70(puVar5);
    *(int *)(local_18 + 4) = *(int *)(local_18 + 4) + -1;
    param_1 = local_18;
    iVar9 = local_10;
  }
  pMem = local_8;
  if (iVar9 < 0) {
    return iVar9;
  }
  if (*(int *)((int)local_8 + 0x128) == 0) {
    cVar3 = *local_c;
    local_c = (char *)((int)local_8 + 0x158);
    local_18 = (char *)0x0;
    iVar9 = -0x7fffbffb;
    if (cVar3 != '\0') {
      iVar9 = -0x7ffb1ff6;
      pcVar7 = (char *)FUN_00470380(&local_c);
      if ((pcVar7[0x18] & 2U) != 2) {
        iVar9 = 0;
        local_18 = pcVar7;
      }
    }
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    else {
      if (*(LPCVOID *)(local_18 + 4) == pMem) {
        iVar9 = FUN_0046ff10(&local_18,0);
      }
      if (iVar9 < 0) goto LAB_0046eb24;
    }
    if (pMem != (LPCVOID)0x0) {
      FUN_00470da0();
      pvVar8 = GlobalHandle(pMem);
      GlobalUnlock(pvVar8);
      pvVar8 = GlobalHandle(pMem);
      GlobalFree(pvVar8);
    }
  }
LAB_0046eb24:
  if (*(int *)(param_1 + 0x1c) == 0) {
    return iVar9;
  }
  DAT_005ba50c = DAT_005ba50c | 0x100;
  return iVar9;
}


