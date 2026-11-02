/* Module: sfxpfx2.dll
   Function: FUN_5c8917e0
   Address: 5c8917e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

void FUN_5c8917e0(undefined4 *param_1,undefined4 *param_2,uchar *param_3)

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
  local_38[0xb] = 0xbcb414;
  local_38[0xc] = 0x8f47dc18;
  local_38[0xd] = 0x9cc7b214;
  local_38[1] = 0x12360c2;
  local_38[2] = 0xde3d2db;
  local_38[3] = 0x246ac92;
  local_38[4] = 0x508368;
  local_38[5] = 0x79f6ce6b;
  local_38[6] = 0xa0c6e268;
  pvVar2 = GlobalAlloc(0x40,0xc08);
  this = GlobalLock(pvVar2);
  if (this == (LPVOID)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_5c8ce4a0(this,0x12e,(HKEY__)0x7b,(uchar *)"Vegas\\2.0",local_38 + 7,
                           (int)(local_38 + 1),1,1,0,2,0,param_3,(uchar *)0x0);
  }
  FUN_5c8d1690(this_00,0x1030,1);
  iVar3 = FUN_5c8d14a0(this_00,local_38,(int *)&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x12e;
    return;
  }
  FUN_5c8d1690(this_00,0x2020,1);
  iVar3 = FUN_5c8d14a0(this_00,local_38,(int *)&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x12e;
    return;
  }
  FUN_5c8d1690(this_00,0x3040,1);
  iVar3 = FUN_5c8d14a0(this_00,local_38,(int *)&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x12e;
    return;
  }
  FUN_5c8d1690(this_00,0x4040,1);
  iVar3 = FUN_5c8d14a0(this_00,local_38,(int *)&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x12e;
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


