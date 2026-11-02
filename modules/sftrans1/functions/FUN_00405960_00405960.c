/* Module: sftrans1.dll
   Function: FUN_00405960
   Address: 00405960
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCVOID FUN_00405960(void)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  LPCVOID pvVar3;
  int iVar4;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0xbcb414;
  local_8 = 0x8f47dc18;
  local_4 = 0x9cc7b214;
  local_34 = 0x12360c2;
  local_30 = 0xde3d2db;
  local_2c = 0x246ac92;
  local_28 = &LAB_00508368;
  local_24 = 0x79f6ce6b;
  local_20 = 0xa0c6e268;
  pvVar1 = GlobalAlloc(0x40,0xc08);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar3 = (LPCVOID)0x0;
  }
  else {
    pvVar3 = (LPCVOID)FUN_0052f690(0x12e,0x7b,"Vegas\\2.0",&local_1c,&local_34,1,1,0,2,0,0,0);
  }
  FUN_00532880(0x4040,1);
  iVar4 = FUN_00532690(local_38,local_3c,1);
  if ((-1 < iVar4) && (iVar4 != 0x4e12f)) {
    return pvVar3;
  }
  if (pvVar3 != (LPCVOID)0x0) {
    FUN_0052f8a0();
    pvVar1 = GlobalHandle(pvVar3);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pvVar3);
    GlobalFree(pvVar1);
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x198a953;
  local_8 = 0xc63cca9c;
  local_4 = 0xe97a1581;
  local_34 = 0x14da13c;
  local_30 = 0x963bc7b6;
  local_2c = 0x93b0a75d;
  local_28 = (undefined1 *)0xcc62f8;
  local_24 = 0xf6f461bd;
  local_20 = 0xe1061fe9;
  pvVar1 = GlobalAlloc(0x40,0xc08);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar3 = (LPCVOID)0x0;
  }
  else {
    pvVar3 = (LPCVOID)FUN_0052f690(0x130,0xb4,"VideoFactory\\1.0",&local_1c,&local_34,1,1,0,2,0,0,0)
    ;
  }
  FUN_00532880(0x4040,1);
  iVar4 = FUN_00532690(local_38,local_3c,1);
  if ((-1 < iVar4) && (iVar4 != 0x4e12f)) {
    return pvVar3;
  }
  if (pvVar3 != (LPCVOID)0x0) {
    FUN_0052f8a0();
    pvVar1 = GlobalHandle(pvVar3);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pvVar3);
    GlobalFree(pvVar1);
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x12090fe;
  local_8 = 0xd24dd017;
  local_4 = 0xfee16b0f;
  local_34 = 0x1ac1de0;
  local_30 = 0x62829fbf;
  local_2c = 0x854112fd;
  local_28 = (undefined1 *)0x14a3627;
  local_24 = 0xf142b543;
  local_20 = 0x7454dee2;
  pvVar1 = GlobalAlloc(0x40,0xc08);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar3 = (LPCVOID)0x0;
  }
  else {
    pvVar3 = (LPCVOID)FUN_0052f690(0x1c6,0xb2,"Screenblast VideoFactory\\1.0",&local_1c,&local_34,1,
                                   1,0,2,0,0,0);
  }
  FUN_00532880(0x4040,1);
  iVar4 = FUN_00532690(local_38,local_3c,1);
  if ((-1 < iVar4) && (iVar4 != 0x4e12f)) {
    return pvVar3;
  }
  if (pvVar3 != (LPCVOID)0x0) {
    FUN_0052f8a0();
    pvVar1 = GlobalHandle(pvVar3);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(pvVar3);
    GlobalFree(pvVar1);
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x1ff2283;
  local_8 = 0xcea9a234;
  local_4 = 0xc03954c4;
  local_34 = 0x19cc88f;
  local_30 = 0x9276e8a0;
  local_2c = 0xe3f6d278;
  local_28 = (undefined1 *)0x14e91a6;
  local_24 = 0x727e6828;
  local_20 = 0x816660a9;
  pvVar1 = GlobalAlloc(0x40,0xc08);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 != (LPVOID)0x0) {
    pvVar3 = (LPCVOID)FUN_0052f690(0x16b,0x80,"VidpCore\\1.0",&local_1c,&local_34,1,1,0,2,0,0,0);
    return pvVar3;
  }
  return (LPCVOID)0x0;
}


