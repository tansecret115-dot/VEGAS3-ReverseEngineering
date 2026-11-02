/* Module: sfxpfx2.dll
   Function: FUN_5c891590
   Address: 5c891590
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

void FUN_5c891590(undefined4 *param_1,undefined4 *param_2,uchar *param_3)

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
  local_38[0xb] = 0x6bc750;
  local_38[0xc] = 0x41ed22aa;
  local_38[0xd] = 0x6e38a464;
  local_38[1] = 0x12a94cf;
  local_38[2] = 0x788a843f;
  local_38[3] = 0xfa9a65db;
  local_38[4] = 0x9e9d3a;
  local_38[5] = 0x60f8ff25;
  local_38[6] = 0x8df8e1df;
  pvVar2 = GlobalAlloc(0x40,0xc08);
  this = GlobalLock(pvVar2);
  if (this == (LPVOID)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_5c8ce4a0(this,0x6a,(HKEY__)0x6c,(uchar *)"Sound Forge\\5.0",local_38 + 7,
                           (int)(local_38 + 1),1,1,0,2,0,param_3,(uchar *)0x0);
  }
  FUN_5c8d1690(this_00,0x20,1);
  iVar3 = FUN_5c8d14a0(this_00,local_38,(int *)&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x6a;
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


