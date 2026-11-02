/* Module: sfxpfx1.dll
   Function: FUN_5c941cf0
   Address: 5c941cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5c941cf0(void)

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
  uint local_58;
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
  local_c = 0x6c27e;
  local_8 = 0x3bb76c85;
  local_4 = 0x5ff0119a;
  local_34 = 0x71f66e;
  local_30 = 0x7648f9d6;
  local_2c = 0xadb97f30;
  local_28 = 0xdc91a0;
  local_24 = 0x673b01e2;
  local_20 = 0x456c95a9;
  pvVar2 = GlobalAlloc(0x40,0xc08);
  pvVar3 = GlobalLock(pvVar2);
  if (pvVar3 == (LPVOID)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_5c97cb70(pvVar3,0xdc,(HKEY__)0x45,(uchar *)"ExpressFX 1\\1.0",&local_1c,
                          (int)&local_34,1,1,0,2,0,local_4c,(uchar *)0x0);
  }
  iVar5 = FUN_5c97fb70(puVar4,&local_50,&local_54,1);
  if (-1 < iVar5) {
    return puVar4;
  }
  if (puVar4 != (undefined4 *)0x0) {
    FUN_5c97cd80(puVar4);
    pvVar2 = GlobalHandle(puVar4);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(puVar4);
    GlobalFree(pvVar2);
  }
  bVar1 = FUN_5c982960(0xdc,&local_58);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (local_58 < 0x133) {
      if (local_58 < 0x131) {
        switch(local_58) {
        case 0x6a:
          FUN_5c941590(&local_5c,&local_58,local_4c);
          break;
        case 0xe6:
          FUN_5c941430(&local_5c,&local_58,local_4c);
          break;
        case 0x12e:
          FUN_5c9417e0(&local_5c,&local_58,local_4c);
          break;
        case 0x130:
          FUN_5c9416b0(&local_5c,&local_58,local_4c);
        }
      }
      else {
        FUN_5c9419d0(&local_5c,&local_58,local_4c);
      }
    }
    else {
      switch(local_58) {
      case 0x186:
        FUN_5c941bc0(&local_5c,&local_58,local_4c);
        break;
      case 0x1c3:
        FUN_5c941000(&local_5c,&local_58,local_4c);
        break;
      case 0x1c4:
        FUN_5c941160(&local_5c,&local_58,local_4c);
        break;
      case 0x1c6:
        FUN_5c9412c0(&local_5c,&local_58,local_4c);
      }
    }
    if (local_5c != (undefined4 *)0x0) goto LAB_5c941f41;
  }
  FUN_5c9419d0(&local_5c,&local_58,local_4c);
  if (local_5c != (undefined4 *)0x0) {
    FUN_5c982a20(0xdc,local_58,0);
    return local_5c;
  }
  FUN_5c941bc0(&local_5c,&local_58,local_4c);
  if (local_5c != (undefined4 *)0x0) {
    FUN_5c982a20(0xdc,local_58,0);
    return local_5c;
  }
  FUN_5c941000(&local_5c,&local_58,local_4c);
  if ((((local_5c == (undefined4 *)0x0) &&
       (FUN_5c941160(&local_5c,&local_58,local_4c), local_5c == (undefined4 *)0x0)) &&
      (FUN_5c9412c0(&local_5c,&local_58,local_4c), local_5c == (undefined4 *)0x0)) &&
     (((FUN_5c941430(&local_5c,&local_58,local_4c), local_5c == (undefined4 *)0x0 &&
       (FUN_5c941590(&local_5c,&local_58,local_4c), local_5c == (undefined4 *)0x0)) &&
      ((FUN_5c9416b0(&local_5c,&local_58,local_4c), local_5c == (undefined4 *)0x0 &&
       (FUN_5c9417e0(&local_5c,&local_58,local_4c), local_5c == (undefined4 *)0x0)))))) {
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0x6c27e;
    local_8 = 0x3bb76c85;
    local_4 = 0x5ff0119a;
    local_34 = 0x71f66e;
    local_30 = 0x7648f9d6;
    local_2c = 0xadb97f30;
    local_28 = 0xdc91a0;
    local_24 = 0x673b01e2;
    local_20 = 0x456c95a9;
    pvVar2 = GlobalAlloc(0x40,0xc08);
    pvVar3 = GlobalLock(pvVar2);
    if (pvVar3 != (LPVOID)0x0) {
      puVar4 = FUN_5c97cb70(pvVar3,0xdc,(HKEY__)0x45,(uchar *)"ExpressFX 1\\1.0",&local_1c,
                            (int)&local_34,1,1,0,2,0,local_4c,(uchar *)0x0);
      return puVar4;
    }
    return (undefined4 *)0x0;
  }
LAB_5c941f41:
  FUN_5c982a20(0xdc,local_58,0);
  return local_5c;
}


