/* Module: sfppack1.dll
   Function: FUN_5cdb1000
   Address: 5cdb1000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdb1000(undefined4 *param_1,undefined4 *param_2,uchar *param_3)

{
  undefined4 *puVar1;
  HGLOBAL pvVar2;
  LPVOID this;
  undefined4 *this_00;
  int iVar3;
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
  
  puVar1 = param_1;
  *param_1 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x13a2c66;
  local_8 = 0x62676f4a;
  local_4 = 0xf2cad377;
  local_34 = 0x1ea4728;
  local_30 = 0xea113c39;
  local_2c = 0xad7f03f0;
  local_28 = 0x313d07;
  local_24 = 0x75cba196;
  local_20 = 0x5d9462f1;
  pvVar2 = GlobalAlloc(0x40,0xc08);
  this = GlobalLock(pvVar2);
  if (this == (LPVOID)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_5ce03190(this,0xe6,(HKEY__)0x5a,(uchar *)"ACID\\2.0",&local_1c,(int)&local_34,1,1,
                           0,2,0,param_3,(uchar *)0x0);
  }
  FUN_5ce06380(this_00,0x13c,1);
  iVar3 = FUN_5ce06190(this_00,&local_38,&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0xe6;
    return;
  }
  if (this_00 != (undefined4 *)0x0) {
    FUN_5ce033a0(this_00);
    pvVar2 = GlobalHandle(this_00);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(this_00);
    GlobalFree(pvVar2);
  }
  return;
}


