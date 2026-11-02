/* Module: sfxpfx1.dll
   Function: FUN_5c941160
   Address: 5c941160
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

void FUN_5c941160(undefined4 *param_1,undefined4 *param_2,uchar *param_3)

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
  local_38[0xb] = 0x1a4b73a;
  local_38[0xc] = 0xe2ab00d9;
  local_38[0xd] = 0xfd24cedf;
  local_38[1] = 0x5142b2;
  local_38[2] = 0x2827d3bb;
  local_38[3] = 0x15ab4462;
  local_38[4] = 0x1c7799b;
  local_38[5] = 0xa9693bc4;
  local_38[6] = 0xd2ac038;
  pvVar2 = GlobalAlloc(0x40,0xc08);
  this = GlobalLock(pvVar2);
  if (this == (LPVOID)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_5c97cb70(this,0x1c4,(HKEY__)0xb1,(uchar *)"Screenblast Sound Forge\\1.0",
                           local_38 + 7,(int)(local_38 + 1),1,1,0,2,0,param_3,(uchar *)0x0);
  }
  FUN_5c97fd60(this_00,4,1);
  iVar3 = FUN_5c97fb70(this_00,local_38,(int *)&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x1c4;
    return;
  }
  FUN_5c97fd60(this_00,0x10,1);
  iVar3 = FUN_5c97fb70(this_00,local_38,(int *)&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x1c4;
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


