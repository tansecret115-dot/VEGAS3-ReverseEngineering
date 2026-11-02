/* Module: sfppack1.dll
   Function: FUN_5cdb1240
   Address: 5cdb1240
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdb1240(undefined4 *param_1,undefined4 *param_2,uchar *param_3)

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
  local_c = 0x6bc750;
  local_8 = 0x41ed22aa;
  local_4 = 0x6e38a464;
  local_34 = 0x12a94cf;
  local_30 = 0x788a843f;
  local_2c = 0xfa9a65db;
  local_28 = 0x9e9d3a;
  local_24 = 0x60f8ff25;
  local_20 = 0x8df8e1df;
  pvVar2 = GlobalAlloc(0x40,0xc08);
  this = GlobalLock(pvVar2);
  if (this == (LPVOID)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_5ce03190(this,0x6a,(HKEY__)0x6c,(uchar *)"Sound Forge\\5.0",&local_1c,
                           (int)&local_34,1,1,0,2,0,param_3,(uchar *)0x0);
  }
  FUN_5ce06380(this_00,0x40,1);
  iVar3 = FUN_5ce06190(this_00,&local_38,&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x6a;
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


