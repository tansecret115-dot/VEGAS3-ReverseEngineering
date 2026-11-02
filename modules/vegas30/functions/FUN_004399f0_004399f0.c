/* Module: vegas30.exe
   Function: FUN_004399f0
   Address: 004399f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004399f0(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  if (param_3 == 0) {
    uVar3 = DAT_00647af8;
    if ((DAT_00647af8 & 0x4000000) != 0) {
      uVar3 = GetSysColor(DAT_00647af8 & 0xffffff);
    }
    uVar5 = 0x6e06;
    if (param_2 != 0) {
      uVar3 = DAT_00647af4;
      if ((DAT_00647af4 & 0x4000000) != 0) {
        uVar3 = GetSysColor(DAT_00647af4 & 0xffffff);
      }
      uVar5 = 0x6e07;
    }
    local_8 = (float)(uVar3 & 0xff) * (float)_DAT_00610fc0;
    local_4 = 0x3f800000;
    local_c = (float)(uVar3 >> 8 & 0xff) * (float)_DAT_00610fc0;
    local_10 = (float)(uVar3 >> 0x10 & 0xff) * (float)_DAT_00610fc0;
    iVar4 = FUN_00438480(DAT_00647624,&local_10,0,0,uVar5,0x100);
    uVar3 = DAT_00647af8;
    if (iVar4 == 0) {
      uVar1 = ftol();
      uVar2 = ftol();
      uVar3 = ftol();
      uVar3 = uVar3 & 0xff | (uint)CONCAT11(uVar1,uVar2) << 8;
      if (param_2 != 0) {
        DAT_00647af4 = uVar3;
        return;
      }
    }
    DAT_00647af8 = uVar3;
    return;
  }
  if (param_2 == 0) {
    DAT_00647af8 = 0x400000f;
    return;
  }
  DAT_00647af4 = 0x4000012;
  return;
}


