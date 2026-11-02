/* Module: mp3plug.dll
   Function: FUN_5f719ec0
   Address: 5f719ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f719ec0(void *this,void *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_2c;
  int local_28;
  int local_24;
  
  cVar2 = (char)param_3[8];
  iVar8 = 0;
  while( true ) {
    if (cVar2 == '\0') {
      iVar7 = 1;
    }
    else {
      iVar7 = 2;
    }
    if (iVar7 <= iVar8) break;
    this = (void *)0x0;
    if (0 < *param_3) {
      puVar3 = param_2 + iVar8 * 0x1b;
      do {
        puVar3[0x20] = 0;
        puVar3[0x1f] = 0;
        puVar3[0x1e] = 0;
        puVar3[0x1d] = 0;
        puVar3[0x1c] = 0;
        puVar3[0x1b] = 0;
        puVar3[0x1a] = 0;
        puVar3[0x19] = 0;
        puVar3[0x18] = 0;
        this = (void *)((int)this + 1);
        puVar3 = puVar3 + 0x3a;
      } while ((int)this < *param_3);
      cVar2 = (char)param_3[8];
    }
    iVar8 = iVar8 + 1;
  }
  uVar4 = FUN_5f719d90(this,param_3);
  if ((char)uVar4 == '\0') {
    *param_2 = 0;
    iVar8 = *param_3;
    iVar7 = 0;
    if (0 < iVar8) {
      iVar6 = 0;
      do {
        iVar8 = (int)param_2 + iVar6;
        iVar1 = (int)param_2 + iVar6 + 0x10;
        iVar9 = (iVar1 - iVar8 & 0xfffffff8U) + iVar8;
        for (; iVar8 < iVar9; iVar8 = iVar8 + 8) {
          *(undefined4 *)(iVar8 + 8) = 0;
          *(undefined4 *)(iVar8 + 0xc) = 0;
        }
        for (; iVar8 < iVar1; iVar8 = iVar8 + 4) {
          *(undefined4 *)(iVar8 + 8) = 0;
        }
        iVar7 = iVar7 + 1;
        iVar8 = *param_3;
        iVar6 = iVar6 + 0xe8;
      } while (iVar7 < iVar8);
    }
    cVar2 = (char)param_3[8];
    iVar7 = 0;
    while( true ) {
      if (cVar2 == '\0') {
        iVar6 = 1;
      }
      else {
        iVar6 = 2;
      }
      if (iVar6 <= iVar7) break;
      if (0 < iVar8) {
        puVar3 = param_2 + iVar7 * 0x1b;
        iVar6 = 0;
        do {
          puVar3[0x17] = 0;
          puVar3[0x16] = 0;
          puVar3[0x15] = 0;
          puVar3[0x14] = 0;
          puVar3[0x13] = 0;
          puVar3[0x12] = 0;
          puVar3[0x11] = 0;
          puVar3[0x10] = 0;
          puVar3[0xf] = 0;
          puVar3[0xe] = 0;
          puVar3[0xd] = 0;
          puVar3[0xc] = 0;
          puVar3[0xb] = 0;
          puVar3[10] = 0;
          puVar3[9] = 0;
          puVar3[7] = 0;
          puVar3[6] = 0;
          iVar8 = *param_3;
          iVar6 = iVar6 + 1;
          puVar3 = puVar3 + 0x3a;
        } while (iVar6 < iVar8);
        cVar2 = (char)param_3[8];
      }
      iVar7 = iVar7 + 1;
    }
    return 0;
  }
  if ((char)param_3[8] == '\0') {
    uVar5 = FUN_5f714080(param_1,8);
    *param_2 = uVar5;
    if (*param_3 == 1) {
      uVar5 = FUN_5f714080(param_1,1);
      param_2[1] = uVar5;
    }
    else {
      uVar5 = FUN_5f714080(param_1,2);
      param_2[1] = uVar5;
    }
  }
  else {
    uVar5 = FUN_5f714080(param_1,9);
    *param_2 = uVar5;
    if (*param_3 == 1) {
      uVar5 = FUN_5f714080(param_1,5);
      param_2[1] = uVar5;
    }
    else {
      uVar5 = FUN_5f714080(param_1,3);
      param_2[1] = uVar5;
    }
    local_2c = 0;
    if (0 < *param_3) {
      local_28 = 0;
      do {
        iVar8 = (int)param_2 + local_28;
        do {
          uVar5 = FUN_5f714080(param_1,1);
          *(uint *)(iVar8 + 8) = uVar5;
          iVar8 = iVar8 + 4;
        } while (iVar8 < (int)param_2 + local_28 + 0x10);
        local_28 = local_28 + 0xe8;
        local_2c = local_2c + 1;
      } while (local_2c < *param_3);
    }
  }
  cVar2 = (char)param_3[8];
  iVar8 = 0;
  while( true ) {
    if (cVar2 == '\0') {
      iVar7 = 1;
    }
    else {
      iVar7 = 2;
    }
    if (iVar7 <= iVar8) break;
    local_2c = 0;
    if (0 < *param_3) {
      local_24 = 0;
      do {
        uVar5 = FUN_5f714080(param_1,0xc);
        iVar7 = local_24 + iVar8 * 0x6c;
        *(uint *)((int)param_2 + iVar7 + 0x18) = uVar5;
        uVar5 = FUN_5f714080(param_1,9);
        *(uint *)((int)param_2 + iVar7 + 0x1c) = uVar5;
        uVar5 = FUN_5f714080(param_1,8);
        *(uint *)((int)param_2 + iVar7 + 0x20) = uVar5;
        if ((char)param_3[8] == '\0') {
          uVar5 = 9;
        }
        else {
          uVar5 = 4;
        }
        uVar5 = FUN_5f714080(param_1,uVar5);
        *(uint *)((int)param_2 + iVar7 + 0x24) = uVar5;
        uVar5 = FUN_5f714080(param_1,1);
        *(uint *)((int)param_2 + iVar7 + 0x28) = uVar5;
        if (0x120 < *(int *)((int)param_2 + iVar7 + 0x1c)) {
          *(undefined4 *)((int)param_2 + iVar7 + 0x1c) = 0;
          *(undefined4 *)((int)param_2 + iVar7 + 0x18) = 0;
          *(undefined4 *)((int)param_2 + iVar7 + 0x24) = 0;
        }
        if (*(int *)((int)param_2 + iVar7 + 0x28) == 0) {
          iVar6 = iVar7 + (int)param_2;
          do {
            uVar5 = FUN_5f714080(param_1,5);
            *(uint *)(iVar6 + 0x34) = uVar5;
            iVar6 = iVar6 + 4;
          } while (iVar6 < (int)param_2 + iVar7 + 0xc);
          uVar5 = FUN_5f714080(param_1,4);
          *(uint *)((int)param_2 + iVar7 + 0x4c) = uVar5;
          uVar5 = FUN_5f714080(param_1,3);
          *(undefined4 *)((int)param_2 + iVar7 + 0x2c) = 0;
          *(uint *)((int)param_2 + iVar7 + 0x50) = uVar5;
        }
        else {
          uVar5 = FUN_5f714080(param_1,2);
          *(uint *)((int)param_2 + iVar7 + 0x2c) = uVar5;
          uVar5 = FUN_5f714080(param_1,1);
          *(uint *)((int)param_2 + iVar7 + 0x30) = uVar5;
          iVar6 = iVar7 + (int)param_2;
          do {
            uVar5 = FUN_5f714080(param_1,5);
            *(uint *)(iVar6 + 0x34) = uVar5;
            iVar6 = iVar6 + 4;
          } while (iVar6 < (int)param_2 + iVar7 + 8);
          iVar6 = (int)param_2 + iVar7;
          *(undefined4 *)((int)param_2 + iVar7 + 0x3c) = 0;
          do {
            uVar5 = FUN_5f714080(param_1,3);
            *(uint *)(iVar6 + 0x40) = uVar5;
            iVar6 = iVar6 + 4;
          } while (iVar6 < (int)param_2 + iVar7 + 0xc);
          iVar6 = *(int *)((int)param_2 + iVar7 + 0x2c);
          if (iVar6 == 0) {
            *(undefined4 *)((int)param_2 + iVar7 + 0x1c) = 0;
            *(undefined4 *)((int)param_2 + iVar7 + 0x18) = 0;
            *(undefined4 *)((int)param_2 + iVar7 + 0x24) = 0;
          }
          else if ((iVar6 == 2) && (*(int *)((int)param_2 + iVar7 + 0x30) == 0)) {
            *(undefined4 *)((int)param_2 + iVar7 + 0x4c) = 8;
          }
          else {
            *(undefined4 *)((int)param_2 + iVar7 + 0x4c) = 7;
          }
          *(int *)((int)param_2 + iVar7 + 0x50) = 0x14 - *(int *)((int)param_2 + iVar7 + 0x4c);
        }
        if ((char)param_3[8] != '\0') {
          uVar5 = FUN_5f714080(param_1,1);
          *(uint *)((int)param_2 + iVar7 + 0x54) = uVar5;
        }
        uVar5 = FUN_5f714080(param_1,1);
        *(uint *)((int)param_2 + iVar7 + 0x58) = uVar5;
        uVar5 = FUN_5f714080(param_1,1);
        *(uint *)((int)param_2 + iVar7 + 0x5c) = uVar5;
        local_2c = local_2c + 1;
        local_24 = local_24 + 0xe8;
      } while (local_2c < *param_3);
      cVar2 = (char)param_3[8];
    }
    iVar8 = iVar8 + 1;
  }
  return 1;
}


