/* Module: sfxpfx1.dll
   Function: FUN_5c9412c0
   Address: 5c9412c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

void FUN_5c9412c0(undefined4 *param_1,undefined4 *param_2,uchar *param_3)

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
  local_38[0xb] = 0x12090fe;
  local_38[0xc] = 0xd24dd017;
  local_38[0xd] = 0xfee16b0f;
  local_38[1] = 0x1ac1de0;
  local_38[2] = 0x62829fbf;
  local_38[3] = 0x854112fd;
  local_38[4] = 0x14a3627;
  local_38[5] = 0xf142b543;
  local_38[6] = 0x7454dee2;
  pvVar2 = GlobalAlloc(0x40,0xc08);
  this = GlobalLock(pvVar2);
  if (this == (LPVOID)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    this_00 = FUN_5c97cb70(this,0x1c6,(HKEY__)0xb2,(uchar *)"Screenblast VideoFactory\\1.0",
                           local_38 + 7,(int)(local_38 + 1),1,1,0,2,0,param_3,(uchar *)0x0);
  }
  FUN_5c97fd60(this_00,0x1010,1);
  iVar3 = FUN_5c97fb70(this_00,local_38,(int *)&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x1c6;
    return;
  }
  FUN_5c97fd60(this_00,0x4040,1);
  iVar3 = FUN_5c97fb70(this_00,local_38,(int *)&param_1,1);
  if ((-1 < iVar3) && (iVar3 != 0x4e12f)) {
    *puVar1 = this_00;
    *param_2 = 0x1c6;
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


