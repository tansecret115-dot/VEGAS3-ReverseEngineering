/* Module: sfppack1.dll
   Function: FUN_5cdb14c0
   Address: 5cdb14c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdb14c0(undefined4 *param_1,undefined4 *param_2,uchar *param_3)

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
  local_c = 0x1e8ff37;
  local_8 = 0x947c9bbd;
  local_4 = 0x72f0931c;
  local_34 = 0xf585c;
  local_30 = 0x29ece853;
  local_2c = 0x315c382;
  local_28 = 0x1ea9d76;
  local_24 = 0x99598eb8;
  local_20 = 0x6729ec87;
  pvVar2 = GlobalAlloc(0x40,0xc08);
  this = GlobalLock(pvVar2);
  if (this == (LPVOID)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_5ce03190(this,0x132,(HKEY__)0xc7,(uchar *)"Vegas\\3.0",&local_1c,(int)&local_34,1,
                           1,0,2,0,param_3,(uchar *)0x0);
  }
  FUN_5ce06380(this_00,0x1030,1);
  iVar3 = FUN_5ce06190(this_00,&local_38,&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x132;
    return;
  }
  FUN_5ce06380(this_00,0x2020,1);
  iVar3 = FUN_5ce06190(this_00,&local_38,&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x132;
    return;
  }
  FUN_5ce06380(this_00,0x3040,1);
  iVar3 = FUN_5ce06190(this_00,&local_38,&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x132;
    return;
  }
  FUN_5ce06380(this_00,0x4040,1);
  iVar3 = FUN_5ce06190(this_00,&local_38,&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x132;
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


