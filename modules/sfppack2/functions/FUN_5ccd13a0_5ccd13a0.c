/* Module: sfppack2.dll
   Function: FUN_5ccd13a0
   Address: 5ccd13a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

void FUN_5ccd13a0(undefined4 *param_1,undefined4 *param_2,uchar *param_3)

{
  undefined4 *puVar1;
  HGLOBAL pvVar2;
  LPVOID this;
  undefined4 *this_00;
  int iVar3;
  int local_38 [14];
  
  puVar1 = param_1;
  *param_1 = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0x1e8ff37;
  local_38[0xc] = 0x947c9bbd;
  local_38[0xd] = 0x72f0931c;
  local_38[1] = 0xf585c;
  local_38[2] = 0x29ece853;
  local_38[3] = 0x315c382;
  local_38[4] = 0x1ea9d76;
  local_38[5] = 0x99598eb8;
  local_38[6] = 0x6729ec87;
  pvVar2 = GlobalAlloc(0x40,0xc08);
  this = GlobalLock(pvVar2);
  if (this == (LPVOID)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_5cd42010(this,0x132,(HKEY__)0xc7,(uchar *)"Vegas\\3.0",local_38 + 7,
                           (int)(local_38 + 1),1,1,0,2,0,param_3,(uchar *)0x0);
  }
  FUN_5cd45200(this_00,0x1030,1);
  iVar3 = FUN_5cd45010(this_00,local_38,(int *)&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x132;
    return;
  }
  FUN_5cd45200(this_00,0x2020,1);
  iVar3 = FUN_5cd45010(this_00,local_38,(int *)&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x132;
    return;
  }
  FUN_5cd45200(this_00,0x3040,1);
  iVar3 = FUN_5cd45010(this_00,local_38,(int *)&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x132;
    return;
  }
  FUN_5cd45200(this_00,0x4040,1);
  iVar3 = FUN_5cd45010(this_00,local_38,(int *)&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x132;
    return;
  }
  if (this_00 != (undefined4 *)0x0) {
    FUN_5cd42220(this_00);
    pvVar2 = GlobalHandle(this_00);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(this_00);
    GlobalFree(pvVar2);
  }
  return;
}


