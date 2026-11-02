/* Module: vfplugs.dll
   Function: FUN_004021f0
   Address: 004021f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_004021f0(void)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_3c;
  int local_38 [4];
  undefined *local_28;
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
  local_38[1] = 0x12360c2;
  local_38[2] = 0xde3d2db;
  local_38[3] = 0x246ac92;
  local_28 = &DAT_00508368;
  local_24 = 0x79f6ce6b;
  local_20 = 0xa0c6e268;
  pvVar1 = GlobalAlloc(0x40,0xc08);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 == (LPVOID)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00475e10(pvVar2,0x12e,(HKEY__)0x7b,(uchar *)"Vegas\\2.0",&local_1c,
                          (int)(local_38 + 1),1,1,0,2,0,(uchar *)0x0,(uchar *)0x0);
  }
  FUN_00479000(puVar3,0x4040,1);
  iVar4 = FUN_00478e10(puVar3,local_38,&local_3c,1);
  if ((-1 < iVar4) && (iVar4 != 0x4e12f)) {
    return puVar3;
  }
  if (puVar3 != (undefined4 *)0x0) {
    FUN_00476020(puVar3);
    pvVar1 = GlobalHandle(puVar3);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(puVar3);
    GlobalFree(pvVar1);
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x1ff2283;
  local_8 = 0xcea9a234;
  local_4 = 0xc03954c4;
  local_38[1] = 0x19cc88f;
  local_38[2] = 0x9276e8a0;
  local_38[3] = 0xe3f6d278;
  local_28 = (undefined *)0x14e91a6;
  local_24 = 0x727e6828;
  local_20 = 0x816660a9;
  pvVar1 = GlobalAlloc(0x40,0xc08);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 != (LPVOID)0x0) {
    puVar3 = FUN_00475e10(pvVar2,0x16b,(HKEY__)0x80,(uchar *)"VidpCore\\1.0",&local_1c,
                          (int)(local_38 + 1),1,1,0,2,0,(uchar *)0x0,(uchar *)0x0);
    return puVar3;
  }
  return (undefined4 *)0x0;
}


