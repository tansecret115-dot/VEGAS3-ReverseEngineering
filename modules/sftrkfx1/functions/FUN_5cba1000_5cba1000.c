/* Module: sftrkfx1.dll
   Function: FUN_5cba1000
   Address: 5cba1000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cba1000(void)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_c0;
  int local_bc;
  uchar local_b8 [28];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
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
  
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0x1217da2;
  local_40 = 0x58efc213;
  local_3c = 0xcb327912;
  local_84 = 0x1b362ab;
  local_80 = 0xaec1edfb;
  local_7c = 0x4462bc6e;
  local_78 = 0x30af8a;
  local_74 = 0x807105fc;
  local_70 = 0xc415fd5;
  pvVar1 = GlobalAlloc(0x40,0xc08);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_5cbf6640(pvVar2,0xf0,(HKEY__)0xa0,(uchar *)"ACID\\3.0",&local_54,(int)&local_84,1,1
                          ,0,2,0,(uchar *)0x0,(uchar *)0x0);
  }
  FUN_5cbf9830(piVar3,0x40,1);
  iVar4 = FUN_5cbf9640(piVar3,&local_c0,&local_bc,1);
  if ((-1 < iVar4) && (iVar4 != 0x4e12f)) {
    DAT_5cc11480 = 0;
    DAT_5cc11484 = piVar3;
    iVar4 = FUN_5cbf91f0(piVar3,(LPSTR)local_b8,0x19);
    if (-1 < iVar4) {
      iVar4 = FUN_5cbf6d60(piVar3,local_b8);
      goto joined_r0x5cba1348;
    }
    goto LAB_5cba1129;
  }
  if (piVar3 != (int *)0x0) {
    FUN_5cbf6850(piVar3);
    pvVar1 = GlobalHandle(piVar3);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(piVar3);
    GlobalFree(pvVar1);
  }
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0xbcb414;
  local_24 = 0x8f47dc18;
  local_20 = 0x9cc7b214;
  local_6c = 0x12360c2;
  local_68 = 0xde3d2db;
  local_64 = 0x246ac92;
  local_60 = 0x508368;
  local_5c = 0x79f6ce6b;
  local_58 = 0xa0c6e268;
  pvVar1 = GlobalAlloc(0x40,0xc08);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_5cbf6640(pvVar2,0x12e,(HKEY__)0x7b,(uchar *)"Vegas\\2.0",&local_38,(int)&local_6c,1
                          ,1,0,2,0,(uchar *)0x0,(uchar *)0x0);
  }
  FUN_5cbf9830(piVar3,0x3040,1);
  iVar4 = FUN_5cbf9640(piVar3,&local_c0,&local_bc,1);
  if ((iVar4 < 0) || (iVar4 == 0x4e12f)) {
    FUN_5cbf9830(piVar3,0x4040,1);
    iVar4 = FUN_5cbf9640(piVar3,&local_c0,&local_bc,1);
    if ((iVar4 < 0) || (iVar4 == 0x4e12f)) {
      FUN_5cbf9830(piVar3,0x1030,1);
      iVar4 = FUN_5cbf9640(piVar3,&local_c0,&local_bc,1);
      if ((iVar4 < 0) || (iVar4 == 0x4e12f)) {
        FUN_5cbf9830(piVar3,0x2020,1);
        iVar4 = FUN_5cbf9640(piVar3,&local_c0,&local_bc,1);
        if ((iVar4 < 0) || (iVar4 == 0x4e12f)) {
          if (piVar3 != (int *)0x0) {
            FUN_5cbf6850(piVar3);
            pvVar1 = GlobalHandle(piVar3);
            GlobalUnlock(pvVar1);
            pvVar1 = GlobalHandle(piVar3);
            GlobalFree(pvVar1);
          }
          local_1c = 0;
          local_18 = 0;
          local_14 = 0;
          local_10 = 0;
          local_c = 0x198a953;
          local_8 = 0xc63cca9c;
          local_4 = 0xe97a1581;
          local_9c = 0x14da13c;
          local_98 = 0x963bc7b6;
          local_94 = 0x93b0a75d;
          local_90 = 0xcc62f8;
          local_8c = 0xf6f461bd;
          local_88 = 0xe1061fe9;
          pvVar1 = GlobalAlloc(0x40,0xc08);
          pvVar2 = GlobalLock(pvVar1);
          if (pvVar2 == (LPVOID)0x0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = FUN_5cbf6640(pvVar2,0x130,(HKEY__)0xb4,(uchar *)"VideoFactory\\1.0",&local_1c,
                                  (int)&local_9c,1,1,0,2,0,(uchar *)0x0,(uchar *)0x0);
          }
          FUN_5cbf9830(piVar3,0x4040,1);
          FUN_5cbf9640(piVar3,&local_c0,&local_bc,1);
          DAT_5cc11480 = 0;
          DAT_5cc11484 = piVar3;
          iVar4 = FUN_5cbf91f0(piVar3,(LPSTR)local_b8,0x19);
          if ((-1 < iVar4) && (iVar4 = FUN_5cbf6d60(piVar3,local_b8), -1 < iVar4)) {
            DAT_5cc11480 = FUN_5cbf7450(piVar3);
          }
          piVar3 = DAT_5cc11484;
          iVar4 = DAT_5cc11480;
          DAT_5cc11488 = 0;
          iVar6 = FUN_5cbf91f0(DAT_5cc11484,(LPSTR)local_b8,0x19);
          if ((-1 < iVar6) && (iVar6 = FUN_5cbf6d60(piVar3,local_b8), -1 < iVar6)) {
            uVar5 = FUN_5cbf6f90(piVar3);
            DAT_5cc11488 = uVar5 & 0xff;
          }
          if ((iVar4 != 0) && (0 < (int)DAT_5cc11488)) {
            return;
          }
          goto LAB_5cba153c;
        }
        DAT_5cc11480 = 0;
        DAT_5cc11484 = piVar3;
        iVar4 = FUN_5cbf91f0(piVar3,(LPSTR)local_b8,0x19);
        goto joined_r0x5cba1276;
      }
      DAT_5cc11480 = 0;
      DAT_5cc11484 = piVar3;
      iVar4 = FUN_5cbf91f0(piVar3,(LPSTR)local_b8,0x19);
      if (-1 < iVar4) {
        iVar4 = FUN_5cbf6d60(piVar3,local_b8);
        goto joined_r0x5cba1348;
      }
    }
    else {
      DAT_5cc11480 = 0;
      DAT_5cc11484 = piVar3;
      iVar4 = FUN_5cbf91f0(piVar3,(LPSTR)local_b8,0x19);
      if (-1 < iVar4) {
        iVar4 = FUN_5cbf6d60(piVar3,local_b8);
        goto joined_r0x5cba1348;
      }
    }
  }
  else {
    DAT_5cc11480 = 0;
    DAT_5cc11484 = piVar3;
    iVar4 = FUN_5cbf91f0(piVar3,(LPSTR)local_b8,0x19);
joined_r0x5cba1276:
    if (-1 < iVar4) {
      iVar4 = FUN_5cbf6d60(piVar3,local_b8);
joined_r0x5cba1348:
      if (-1 < iVar4) {
        DAT_5cc11480 = FUN_5cbf7450(piVar3);
      }
    }
  }
LAB_5cba1129:
  iVar4 = DAT_5cc11480;
  uVar5 = FUN_5cba18f0(0);
  if (iVar4 != 0) {
    if (0 < (int)uVar5) {
      return;
    }
    FUN_5cba1960();
    return;
  }
LAB_5cba153c:
  FUN_5cba1960();
  return;
}


