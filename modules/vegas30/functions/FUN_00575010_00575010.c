/* Module: vegas30.exe
   Function: FUN_00575010
   Address: 00575010
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00575010(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int *piVar8;
  tagRECT local_34;
  int local_24 [2];
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_8;
  
  local_1c = DAT_0064b30c;
  local_10 = 0x19;
  local_8 = 0x19;
  local_18 = DAT_0064b310;
  local_14 = 0x13;
  iVar5 = 0x17;
  iVar2 = local_8;
  if (DAT_0064b238 != 0) {
    iVar5 = *(int *)(DAT_0064b238 + 4);
    iVar2 = *(undefined4 *)(DAT_0064b238 + 8);
    local_14 = iVar5;
  }
  if (DAT_0064b248 != 0) {
    iVar5 = *(int *)(DAT_0064b248 + 4);
    iVar2 = local_8;
    if (DAT_0064b238 == 0) {
      local_14 = iVar5;
      local_10 = *(undefined4 *)(DAT_0064b248 + 8);
    }
  }
  local_8 = iVar2;
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  _MeterInst_GetSize_0();
  FUN_0060ac30();
  _MeterInst_Init_20(&stack0xffffffc0,DAT_0064945c | 0x400030bd,&local_34,DAT_00647624,0);
  _MeterInst_Message_16(&stack0xffffffc0,0x613,0x10000,2);
  _MeterInst_Message_16(&stack0xffffffc0,0x60d,0x10000,0x100000);
  _MeterInst_Message_16(&stack0xffffffc0,0x60f,0,DAT_00649458);
  iVar2 = _MeterInst_Message_16(&stack0xffffffc0,0x61a,0,0);
  SetRect(&local_34,0,0,iVar2,400);
  _MeterInst_Move_8(&stack0xffffffc0,&local_34);
  _MeterInst_Message_16(&stack0xffffffc0,0x61c,0x10002,&local_34);
  local_8 = iVar2 - local_34.right;
  _MeterInst_Deinit_4(&stack0xffffffc0);
  piVar8 = local_24;
  uVar7 = 0xffffffff;
  puVar6 = &DAT_0061b7cc;
  uVar3 = _SfGetUIFont_4(0x6e);
  _SfGetTextExtent_16(uVar3,puVar6,uVar7,piVar8);
  if (iVar5 < local_14) {
    iVar5 = local_14;
  }
  if (iVar5 <= local_24[0]) {
    iVar5 = local_24[0];
  }
  if (iVar5 <= local_1c + 4) {
    iVar5 = local_1c + 4;
  }
  if (DAT_006487f0 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar5 + local_8 + 6 + iVar2;
  }
  iVar1 = local_1c * 4 + 0x16;
  iVar2 = iVar5 + local_8 + 6 + iVar2;
  if (iVar1 <= iVar2) {
    return iVar2 + iVar4;
  }
  return iVar1 + iVar4;
}


