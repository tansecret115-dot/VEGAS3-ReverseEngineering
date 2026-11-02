/* Module: sfxpfx1.dll
   Function: FUN_5c941bc0
   Address: 5c941bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

void FUN_5c941bc0(undefined4 *param_1,undefined4 *param_2,uchar *param_3)

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
  local_38[0xb] = 0xb63eb6;
  local_38[0xc] = 0x9decb917;
  local_38[0xd] = 0x6d646d83;
  local_38[1] = 0x1747b3c;
  local_38[2] = 0x3b798095;
  local_38[3] = 0x384d7232;
  local_38[4] = 0x14786c7;
  local_38[5] = 0x2b3e8acf;
  local_38[6] = 0x38b90f59;
  pvVar2 = GlobalAlloc(0x40,0xc08);
  this = GlobalLock(pvVar2);
  if (this == (LPVOID)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_5c97cb70(this,0x186,(HKEY__)0xe0,(uchar *)"Video Explosion Deluxe\\1.0",
                           local_38 + 7,(int)(local_38 + 1),1,1,0,2,0,param_3,(uchar *)0x0);
  }
  FUN_5c97fd60(this_00,0x4040,1);
  iVar3 = FUN_5c97fb70(this_00,local_38,(int *)&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x186;
    return;
  }
  if (this_00 != (undefined4 *)0x0) {
    FUN_5c97cd80(this_00);
    pvVar2 = GlobalHandle(this_00);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(this_00);
    GlobalFree(pvVar2);
  }
  return;
}


