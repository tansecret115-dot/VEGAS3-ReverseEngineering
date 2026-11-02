/* Module: sfppack1.dll
   Function: FUN_5cdb16b0
   Address: 5cdb16b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5cdb16b0(void)

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
  undefined4 local_54;
  undefined4 local_50;
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
  local_c = 0x14f729d;
  local_8 = 0x6089f765;
  local_4 = 0x6f5f7e2;
  local_34 = 0x437256;
  local_30 = 0xe5b76e01;
  local_2c = 0x8876f111;
  local_28 = 0x1ea1499;
  local_24 = 0xb9f34fec;
  local_20 = 0xcf6eb77c;
  pvVar2 = GlobalAlloc(0x40,0xc08);
  pvVar3 = GlobalLock(pvVar2);
  if (pvVar3 == (LPVOID)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_5ce03190(pvVar3,0xa0,(HKEY__)0x20,(uchar *)"XFX 1\\1.0",&local_1c,(int)&local_34,1,
                          1,0,2,0,local_4c,(uchar *)0x0);
  }
  iVar5 = FUN_5ce06190(puVar4,&local_50,&local_54,1);
  if (-1 < iVar5) {
    return puVar4;
  }
  if (puVar4 != (undefined4 *)0x0) {
    FUN_5ce033a0(puVar4);
    pvVar2 = GlobalHandle(puVar4);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(puVar4);
    GlobalFree(pvVar2);
  }
  bVar1 = FUN_5ce08f80(0xa0,&local_58);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    switch(local_58) {
    case 0x6a:
      FUN_5cdb1240(&local_5c,&local_58,local_4c);
      break;
    case 0xe6:
      FUN_5cdb1000(&local_5c,&local_58,local_4c);
      break;
    case 0xf0:
      FUN_5cdb1120(&local_5c,&local_58,local_4c);
      break;
    case 0x12e:
      FUN_5cdb1360(&local_5c,&local_58,local_4c);
      break;
    case 0x131:
    case 0x132:
      FUN_5cdb14c0(&local_5c,&local_58,local_4c);
    }
    if (local_5c != (undefined4 *)0x0) {
      FUN_5ce09040(0xa0,local_58,0);
      return local_5c;
    }
  }
  FUN_5cdb1000(&local_5c,&local_58,local_4c);
  if (local_5c != (undefined4 *)0x0) {
    FUN_5ce09040(0xa0,local_58,0);
    return local_5c;
  }
  FUN_5cdb1120(&local_5c,&local_58,local_4c);
  if (local_5c != (undefined4 *)0x0) {
    FUN_5ce09040(0xa0,local_58,0);
    return local_5c;
  }
  FUN_5cdb1360(&local_5c,&local_58,local_4c);
  if (local_5c != (undefined4 *)0x0) {
    FUN_5ce09040(0xa0,local_58,0);
    return local_5c;
  }
  FUN_5cdb14c0(&local_5c,&local_58,local_4c);
  if (local_5c != (undefined4 *)0x0) {
    FUN_5ce09040(0xdc,local_58,0);
    return local_5c;
  }
  FUN_5cdb1240(&local_5c,&local_58,local_4c);
  if (local_5c != (undefined4 *)0x0) {
    FUN_5ce09040(0xa0,local_58,0);
    return local_5c;
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x14f729d;
  local_8 = 0x6089f765;
  local_4 = 0x6f5f7e2;
  local_34 = 0x437256;
  local_30 = 0xe5b76e01;
  local_2c = 0x8876f111;
  local_28 = 0x1ea1499;
  local_24 = 0xb9f34fec;
  local_20 = 0xcf6eb77c;
  pvVar2 = GlobalAlloc(0x40,0xc08);
  pvVar3 = GlobalLock(pvVar2);
  if (pvVar3 != (LPVOID)0x0) {
    puVar4 = FUN_5ce03190(pvVar3,0xa0,(HKEY__)0x20,(uchar *)"XFX 1\\1.0",&local_1c,(int)&local_34,1,
                          1,0,2,0,local_4c,(uchar *)0x0);
    return puVar4;
  }
  return (undefined4 *)0x0;
}


