/* Module: aviplug.dll
   Function: FUN_5f94e370
   Address: 5f94e370
   Source: Ghidra pseudocode (Stage 10 batch) */


uint * FUN_5f94e370(HANDLE param_1,int param_2,uint param_3,uint param_4,undefined4 *param_5,
                   uint param_6,DWORD *param_7,uint *param_8)

{
  HANDLE hFile;
  BOOL BVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  DWORD local_4;
  
  uVar3 = param_6;
  hFile = param_1;
  puVar4 = (uint *)0x0;
  local_14 = 0;
  if (param_8 != (uint *)0x0) {
    *param_8 = 0xffffffff;
    param_8[1] = 0xffffffff;
  }
  if ((param_5 != (undefined4 *)0x0) && (0 < (int)param_6)) {
    puVar5 = param_5;
    for (uVar2 = param_6 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = param_6 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  if ((param_3 == 0xffffffff) && (param_4 == 0xffffffff)) {
    if (param_2 == -1) {
LAB_5f94e506:
      puVar4 = (uint *)0x80070057;
    }
    else {
      puVar4 = FUN_5f94dfd0(param_1,param_2,&param_3);
      if (-1 < (int)puVar4) {
        puVar4 = FUN_5f94e0f0(hFile,param_3,param_4,0x66727473,&local_14,&param_3);
        if (-1 < (int)puVar4) {
          local_10 = param_3 + 8;
          local_c = param_4 + (0xfffffff7 < param_3);
          SetFilePointer(hFile,local_10,(PLONG)&local_c,0);
          goto LAB_5f94e488;
        }
      }
    }
LAB_5f94e4ca:
    if (param_7 == (DWORD *)0x0) goto LAB_5f94e4d8;
  }
  else {
    local_c = param_4;
    local_10 = param_3;
    SetFilePointer(param_1,param_3,(PLONG)&local_c,0);
    BVar1 = ReadFile(hFile,&local_8,8,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
LAB_5f94e4c5:
      puVar4 = (uint *)0x8004e008;
      goto LAB_5f94e4ca;
    }
    if (local_8 != 0x66727473) goto LAB_5f94e506;
    local_14 = local_4;
LAB_5f94e488:
    if (param_8 != (uint *)0x0) {
      *param_8 = param_3;
      param_8[1] = param_4;
    }
    if (param_5 != (undefined4 *)0x0) {
      if ((int)local_14 < (int)uVar3) {
        uVar3 = local_14;
      }
      BVar1 = ReadFile(hFile,param_5,uVar3,&local_14,(LPOVERLAPPED)0x0);
      if ((BVar1 != 0) && ((int)local_14 <= (int)uVar3)) goto LAB_5f94e4ca;
      goto LAB_5f94e4c5;
    }
    if (param_7 == (DWORD *)0x0) {
      return (uint *)0x80070057;
    }
  }
  *param_7 = local_14;
LAB_5f94e4d8:
  if ((((int)puVar4 < 0) && (param_5 != (undefined4 *)0x0)) && (0 < (int)uVar3)) {
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_5 = 0;
      param_5 = param_5 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)param_5 = 0;
      param_5 = (undefined4 *)((int)param_5 + 1);
    }
  }
  return puVar4;
}


