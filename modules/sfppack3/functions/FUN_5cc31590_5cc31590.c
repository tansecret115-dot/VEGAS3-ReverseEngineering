/* Module: sfppack3.dll
   Function: FUN_5cc31590
   Address: 5cc31590
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5cc31590(void)

{
  bool bVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  undefined3 extraout_var;
  int iVar5;
  char *pcVar6;
  uchar *puVar7;
  undefined4 *local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  uchar local_4c [24];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pcVar6 = "Software\\Sonic Foundry\\";
  puVar7 = local_4c;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)puVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    puVar7 = puVar7 + 4;
  }
  local_5c = (undefined4 *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0xda36c1;
  local_8 = 0xd8ebbd7e;
  local_4 = 0xf55388d7;
  local_34 = 0x8b7f88;
  local_30 = 0x5d4e7737;
  local_2c = 0x2213ea4a;
  local_28 = 0x16d0f95;
  local_24 = 0x1a685134;
  local_20 = 0x62b383ed;
  pvVar2 = GlobalAlloc(0x40,0xc08);
  pvVar3 = GlobalLock(pvVar2);
  if (pvVar3 == (LPVOID)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_5cc78b20(pvVar3,0xa2,(HKEY__)0x2a,(uchar *)"XFX 3\\1.0",&local_1c,(int)&local_34,1,
                          1,0,2,0,local_4c,(uchar *)0x0);
  }
  iVar5 = FUN_5cc7bb20(puVar4,&local_50,&local_54,1);
  if (-1 < iVar5) {
    return puVar4;
  }
  if (puVar4 != (undefined4 *)0x0) {
    FUN_5cc78d30(puVar4);
    pvVar2 = GlobalHandle(puVar4);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(puVar4);
    GlobalFree(pvVar2);
  }
  bVar1 = FUN_5cc7e910(0xa2,&local_58);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    switch(local_58) {
    case 0x6a:
      FUN_5cc31280(&local_5c,&local_58,local_4c);
      break;
    case 0xf0:
      FUN_5cc31000(&local_5c,&local_58,local_4c);
      break;
    case 0x12e:
      FUN_5cc31120(&local_5c,&local_58,local_4c);
      break;
    case 0x131:
    case 0x132:
      FUN_5cc313a0(&local_5c,&local_58,local_4c);
    }
    if (local_5c != (undefined4 *)0x0) {
      FUN_5cc7e9d0(0xa2,local_58,0);
      return local_5c;
    }
  }
  FUN_5cc31000(&local_5c,&local_58,local_4c);
  if (local_5c != (undefined4 *)0x0) {
    FUN_5cc7e9d0(0xa2,local_58,0);
    return local_5c;
  }
  FUN_5cc31120(&local_5c,&local_58,local_4c);
  if (local_5c != (undefined4 *)0x0) {
    FUN_5cc7e9d0(0xa2,local_58,0);
    return local_5c;
  }
  FUN_5cc313a0(&local_5c,&local_58,local_4c);
  if (local_5c != (undefined4 *)0x0) {
    FUN_5cc7e9d0(0xdc,local_58,0);
    return local_5c;
  }
  FUN_5cc31280(&local_5c,&local_58,local_4c);
  if (local_5c != (undefined4 *)0x0) {
    FUN_5cc7e9d0(0xa2,local_58,0);
    return local_5c;
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0xda36c1;
  local_8 = 0xd8ebbd7e;
  local_4 = 0xf55388d7;
  local_34 = 0x8b7f88;
  local_30 = 0x5d4e7737;
  local_2c = 0x2213ea4a;
  local_28 = 0x16d0f95;
  local_24 = 0x1a685134;
  local_20 = 0x62b383ed;
  pvVar2 = GlobalAlloc(0x40,0xc08);
  pvVar3 = GlobalLock(pvVar2);
  if (pvVar3 != (LPVOID)0x0) {
    puVar4 = FUN_5cc78b20(pvVar3,0xa2,(HKEY__)0x2a,(uchar *)"XFX 3\\1.0",&local_1c,(int)&local_34,1,
                          1,0,2,0,local_4c,(uchar *)0x0);
    return puVar4;
  }
  return (undefined4 *)0x0;
}


