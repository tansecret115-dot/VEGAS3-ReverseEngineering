/* Module: rmme3260.dll
   Function: FUN_6623f660
   Address: 6623f660
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6623f660(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  char local_118 [256];
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  *(undefined4 *)(param_1 + 0x1d0) = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x6c) + 0xb4));
  local_c = (int *)0x0;
  local_8 = (int *)0x0;
  iVar2 = (**(code **)**(undefined4 **)(param_1 + 0x94))
                    (*(undefined4 **)(param_1 + 0x94),&DAT_6626abb8,&local_c);
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
    pcVar3 = s_FullScreenData_6626fd54;
    do {
      pcVar7 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar3 = pcVar7 + -uVar4;
    pcVar7 = local_118;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar3 = &DAT_6626fdc0;
    do {
      pcVar7 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar2 = -1;
    pcVar3 = local_118;
    do {
      pcVar6 = pcVar3;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar6 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar6;
    } while (cVar1 != '\0');
    pcVar3 = pcVar7 + -uVar4;
    pcVar7 = pcVar6 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar7 = pcVar7 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar3 = s_PreferedMode_6626fdb0;
    do {
      pcVar7 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar2 = -1;
    pcVar3 = local_118;
    do {
      pcVar6 = pcVar3;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar6 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar6;
    } while (cVar1 != '\0');
    pcVar3 = pcVar7 + -uVar4;
    pcVar7 = pcVar6 + -1;
    for (uVar5 = uVar4 >> 2; piVar10 = local_c, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar7 = pcVar7 + 1;
    }
    (**(code **)(*piVar10 + 0xc))(piVar10,local_118,&local_8);
    local_14 = 0;
    local_18 = 0;
    local_10 = 0;
    if (local_8 != (int *)0x0) {
      piVar10 = &local_10;
      piVar9 = &local_18;
      piVar8 = &local_14;
      pcVar3 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
      iVar2 = FUN_6623f5a0(pcVar3,piVar8,piVar9,piVar10);
      if (iVar2 == 0) {
        FUN_6623e030(param_1);
        if (DAT_6627cfec == 0) {
          uVar11 = **(undefined4 **)(param_1 + 0x88);
        }
        else {
          uVar11 = *(undefined4 *)(param_1 + 0x144);
        }
        FUN_66249870(*(void **)(param_1 + 0x140),local_14,local_18,local_10,uVar11);
        FUN_6623e0c0(param_1);
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
    }
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
      local_c = (int *)0x0;
    }
  }
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(param_1 + 0x6c) + 0xb4));
  return;
}


