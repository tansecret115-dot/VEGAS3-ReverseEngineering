/* Module: sfxpfx2.dll
   Function: FUN_5c891000
   Address: 5c891000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

void FUN_5c891000(undefined4 *param_1,undefined4 *param_2,uchar *param_3)

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
  local_38[0xb] = 0x2f34a;
  local_38[0xc] = 0xbbd0477d;
  local_38[0xd] = 0xf7ae6ae2;
  local_38[1] = 0x14d9fa0;
  local_38[2] = 0x76ae7a72;
  local_38[3] = 0x4503a34;
  local_38[4] = 0x790c8;
  local_38[5] = 0x67a2316c;
  local_38[6] = 0xe7e4df45;
  pvVar2 = GlobalAlloc(0x40,0xc08);
  this = GlobalLock(pvVar2);
  if (this == (LPVOID)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_5c8ce4a0(this,0x1c3,(HKEY__)0xaf,(uchar *)"Screenblast ACID\\1.0",local_38 + 7,
                           (int)(local_38 + 1),1,1,0,2,0,param_3,(uchar *)0x0);
  }
  FUN_5c8d1690(this_00,4,1);
  iVar3 = FUN_5c8d14a0(this_00,local_38,(int *)&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x1c3;
    return;
  }
  FUN_5c8d1690(this_00,0x10,1);
  iVar3 = FUN_5c8d14a0(this_00,local_38,(int *)&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x1c3;
    return;
  }
  if (this_00 != (undefined4 *)0x0) {
    FUN_5c8ce6b0(this_00);
    pvVar2 = GlobalHandle(this_00);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(this_00);
    GlobalFree(pvVar2);
  }
  return;
}


