/* Module: vegas30.exe
   Function: FUN_0052a630
   Address: 0052a630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052a630(int param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 local_3c;
  undefined1 local_34 [52];
  
  local_3c = 0x80004005;
  iVar3 = FUN_0052a5d0(param_1,param_2,param_3);
  if (iVar3 != 0) {
    return 0x80004005;
  }
  iVar3 = *param_3;
  iVar6 = 0;
  bVar1 = false;
  bVar2 = false;
  if (iVar3 < 1) {
    return 0x80004005;
  }
  do {
    uVar5 = *(undefined4 *)(*(int *)(param_3[2] + iVar6 * 4) + 0x20c);
    iVar4 = FUN_0050a400(uVar5,param_2);
    if (iVar4 == 0) {
      FUN_0050a490(*(undefined4 *)(param_1 + 0xfc),param_2,uVar5,0);
      bVar1 = true;
    }
    else {
      bVar2 = true;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < iVar3);
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x100) = 1;
    FUN_00525460(param_1);
    local_3c = 0;
  }
  if (bVar2) {
    _SfLoadString_16(DAT_00647204,0x4f89,local_34,0x32);
    puVar7 = local_34;
    uVar8 = 0x10;
    uVar5 = _SfGetString_8(DAT_00647204,0x4f88);
    _SfMessageBox_16(0,uVar5,puVar7,uVar8);
  }
  return local_3c;
}


