/* Module: vegas30.exe
   Function: FUN_004eb9b0
   Address: 004eb9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004eb9b0(uchar *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  HCURSOR pHVar2;
  int iVar3;
  uchar local_104 [260];
  
  uVar1 = DAT_0064b138;
  iVar3 = 0;
  if (((param_2 == 0) && ((param_1[0x218] & 0x40) != 0)) &&
     ((iVar3 = FUN_004e9f70(DAT_0064b138,0x241,"OpenList_OpenFiles"), iVar3 < 0 ||
      (iVar3 = FUN_004eb0f0(uVar1,0x26,0), iVar3 < 0)))) goto LAB_004ebb1f;
  if (*(int *)(param_1 + 0x214) != -0x7ffb1ff4) {
    pHVar2 = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
    pHVar2 = SetCursor(pHVar2);
    iVar3 = -0x7ffb1fea;
    switch(*(undefined4 *)(param_1 + 0x208)) {
    case 2:
    case 3:
    case 4:
    case 5:
      if (param_2 == 0) {
        if (param_3 == 0) {
LAB_004ebaeb:
          iVar3 = FUN_004aeee0(param_1,1);
        }
        else {
          iVar3 = FUN_00551c60(param_1);
        }
      }
      else {
        FUN_004eb7e0(param_1);
        iVar3 = 0;
      }
      break;
    case 6:
      if (param_4 == 0) {
        iVar3 = FUN_00434740(param_1,0);
      }
      else {
        iVar3 = FUN_004351b0(param_1);
      }
      break;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      iVar3 = FUN_00436510(param_1,DAT_0064b138,*(undefined4 *)(param_1 + 0x208));
      break;
    case 0xf:
      iVar3 = FUN_00443a30(param_1);
      break;
    case 0x10:
      FUN_004eb720(param_1);
      iVar3 = 0;
      break;
    case 0x11:
      iVar3 = FUN_0043dce0(DAT_00647624,param_1,local_104,0x104);
      if (iVar3 == 0) {
        _mbscpy(param_1,local_104);
        if (param_3 == 0) goto LAB_004ebaeb;
        iVar3 = FUN_00551c60(param_1);
      }
    }
    SetCursor(pHVar2);
  }
  if (param_2 != 0) {
    return iVar3;
  }
LAB_004ebb1f:
  if ((param_1[0x218] & 0x80) != 0) {
    FUN_004eb2b0(uVar1);
    FUN_004ea040(uVar1,0);
  }
  return iVar3;
}


