/* Module: sftrans1.dll
   Function: FUN_0049ca10
   Address: 0049ca10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0049ca10(int *param_1,int param_2)

{
  LPCVOID pMem;
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  byte bVar5;
  int iVar6;
  undefined4 *puVar7;
  int *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_10 = -1;
  local_14 = -1;
  local_20 = (int *)0x0;
  switch(param_2) {
  case 0:
    local_24 = param_1 + 0x14;
    local_20 = param_1 + 0x24;
    break;
  case 1:
    local_24 = param_1 + 0x16;
    local_20 = param_1 + 100;
    break;
  case 2:
    local_24 = param_1 + 0x18;
    local_20 = param_1 + 0xa4;
    break;
  default:
    goto switchD_0049ca3b_caseD_3;
  case 4:
    if (param_1[0x21] == 0) {
      if (param_1[0x22] != 0) {
        local_24 = param_1 + 0x16;
        local_20 = param_1 + 100;
        if (param_1[0x23] != 0) {
          local_14 = 2;
        }
      }
    }
    else {
      local_20 = param_1 + 0x24;
      local_24 = param_1 + 0x14;
      if (param_1[0x22] != 0) {
        local_10 = 1;
      }
      if (param_1[0x23] != 0) {
        local_14 = 2;
      }
    }
  }
  iVar1 = FUN_0054f050();
  iVar2 = *local_24;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else if (iVar2 < 0x11) {
    iVar2 = 0x10;
  }
  else {
    bVar5 = 0;
    for (; iVar2 != 0; iVar2 = iVar2 >> 1) {
      bVar5 = bVar5 + 1;
    }
    iVar2 = 1 << (bVar5 & 0x1f);
  }
  if (iVar1 == 0) {
    local_1c = 0;
  }
  else if (iVar1 < 0x11) {
    local_1c = 0x10;
  }
  else {
    bVar5 = 0;
    iVar6 = iVar1;
    do {
      bVar5 = bVar5 + 1;
      iVar6 = iVar6 >> 1;
    } while (iVar6 != 0);
    local_1c = 1 << (bVar5 & 0x1f);
  }
  if (iVar2 == local_1c) {
    *local_24 = iVar1;
  }
  else {
    if (0 < iVar2) {
      pMem = (LPCVOID)local_24[1];
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pMem);
      GlobalFree(pvVar3);
      *local_24 = 0;
    }
    *local_24 = iVar1;
    if (0 < local_1c) {
      pvVar3 = GlobalAlloc(0x40,local_1c * 0x68);
      pvVar4 = GlobalLock(pvVar3);
      if (pvVar4 == (LPVOID)0x0) {
        pvVar4 = (LPVOID)0x0;
      }
      else if (-1 < local_1c + -1) {
        puVar7 = (undefined4 *)((int)pvVar4 + 0x28);
        local_18 = local_1c;
        do {
          puVar7[-4] = 0;
          puVar7[-2] = 0;
          *puVar7 = 0;
          puVar7[2] = 0;
          puVar7[-3] = 0;
          puVar7[-1] = 0;
          puVar7[1] = 0;
          puVar7[3] = 0;
          *(undefined1 *)(puVar7 + 4) = 0;
          *(undefined1 *)((int)puVar7 + 0x11) = 0;
          puVar7[6] = 0;
          puVar7[8] = 0;
          puVar7[10] = 0;
          puVar7[0xc] = 0;
          puVar7[7] = 0;
          puVar7[9] = 0;
          puVar7[0xb] = 0;
          puVar7[0xd] = 0;
          *(undefined1 *)(puVar7 + 0xe) = 0;
          *(undefined1 *)((int)puVar7 + 0x39) = 0;
          FUN_00423e40();
          puVar7 = puVar7 + 0x1a;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      local_24[1] = (int)pvVar4;
      if (pvVar4 == (LPVOID)0x0) {
        *local_24 = 0;
      }
    }
  }
  if (0 < *local_24) {
    FUN_0054f070(local_24[1],*local_24);
    FUN_0049d200(0xffffffff,local_20);
    if (param_2 == 4) {
      *(undefined4 *)(param_1[0x1c] + 0x1d0) = 0;
      if (local_10 == 1) {
        FUN_0054fd50(local_24[1],*local_24,1,0x8000);
        FUN_0049cfc0(param_1 + 0x16,local_24,param_1 + 100,local_20);
      }
      if (local_14 == 2) {
        FUN_0054fd50(local_24[1],*local_24,2,0x800000);
        FUN_0049cfc0(param_1 + 0x18,local_24,param_1 + 0xa4,local_20);
      }
      *(undefined4 *)(param_1[0x1c] + 0x1d0) = 1;
    }
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
switchD_0049ca3b_caseD_3:
  return;
}


