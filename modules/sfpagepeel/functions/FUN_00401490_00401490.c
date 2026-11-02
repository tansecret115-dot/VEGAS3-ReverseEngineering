/* Module: sfpagepeel.dll
   Function: FUN_00401490
   Address: 00401490
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_00401490(void)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_3c;
  int local_38 [14];
  
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0xbcb414;
  local_38[0xc] = 0x8f47dc18;
  local_38[0xd] = 0x9cc7b214;
  local_38[1] = 0x12360c2;
  local_38[2] = 0xde3d2db;
  local_38[3] = 0x246ac92;
  local_38[4] = 0x508368;
  local_38[5] = 0x79f6ce6b;
  local_38[6] = 0xa0c6e268;
  pvVar1 = GlobalAlloc(0x40,0xc08);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00461ad0(pvVar2,0x12e,(HKEY__)0x7b,(uchar *)"Vegas\\2.0",local_38 + 7,
                          (int)(local_38 + 1),1,1,0,2,0,(uchar *)0x0,(uchar *)0x0);
  }
  FUN_00464cc0(puVar3,0x4040,1);
  iVar4 = FUN_00464ad0(puVar3,local_38,&local_3c,1);
  if ((-1 < iVar4) && (iVar4 != 0x4e12f)) {
    return puVar3;
  }
  FUN_00464cc0(puVar3,0x2020,1);
  iVar4 = FUN_00464ad0(puVar3,local_38,&local_3c,1);
  if ((-1 < iVar4) && (iVar4 != 0x4e12f)) {
    return puVar3;
  }
  if (puVar3 != (undefined4 *)0x0) {
    FUN_00461ce0(puVar3);
    pvVar1 = GlobalHandle(puVar3);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(puVar3);
    GlobalFree(pvVar1);
  }
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0x198a953;
  local_38[0xc] = 0xc63cca9c;
  local_38[0xd] = 0xe97a1581;
  local_38[1] = 0x14da13c;
  local_38[2] = 0x963bc7b6;
  local_38[3] = 0x93b0a75d;
  local_38[4] = 0xcc62f8;
  local_38[5] = 0xf6f461bd;
  local_38[6] = 0xe1061fe9;
  pvVar1 = GlobalAlloc(0x40,0xc08);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00461ad0(pvVar2,0x130,(HKEY__)0xb4,(uchar *)"VideoFactory\\1.0",local_38 + 7,
                          (int)(local_38 + 1),1,1,0,2,0,(uchar *)0x0,(uchar *)0x0);
  }
  FUN_00464cc0(puVar3,0x4040,1);
  iVar4 = FUN_00464ad0(puVar3,local_38,&local_3c,1);
  if ((-1 < iVar4) && (iVar4 != 0x4e12f)) {
    return puVar3;
  }
  if (puVar3 != (undefined4 *)0x0) {
    FUN_00461ce0(puVar3);
    pvVar1 = GlobalHandle(puVar3);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(puVar3);
    GlobalFree(pvVar1);
  }
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0x1ff2283;
  local_38[0xc] = 0xcea9a234;
  local_38[0xd] = 0xc03954c4;
  local_38[1] = 0x19cc88f;
  local_38[2] = 0x9276e8a0;
  local_38[3] = 0xe3f6d278;
  local_38[4] = 0x14e91a6;
  local_38[5] = 0x727e6828;
  local_38[6] = 0x816660a9;
  pvVar1 = GlobalAlloc(0x40,0xc08);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 != (LPVOID)0x0) {
    puVar3 = FUN_00461ad0(pvVar2,0x16b,(HKEY__)0x80,(uchar *)"VidpCore\\1.0",local_38 + 7,
                          (int)(local_38 + 1),1,1,0,2,0,(uchar *)0x0,(uchar *)0x0);
    return puVar3;
  }
  return (undefined4 *)0x0;
}


