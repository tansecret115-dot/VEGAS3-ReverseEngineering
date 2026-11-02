/* Module: vegas30.exe
   Function: FUN_00435120
   Address: 00435120
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00435120(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -0x7ff8fff2;
  iVar1 = FUN_004e6c90(0x148);
  if (iVar1 != 0) {
    FUN_005fb200(1);
    *(undefined1 **)(iVar1 + 0x20) = &LAB_00434860;
    *(undefined4 *)(iVar1 + 0x2c) = 0x6664;
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x32;
    *(undefined4 *)(iVar1 + 0x18) = 0x21;
    *(undefined1 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x134) = DAT_0064b138;
    *(undefined4 *)(iVar1 + 0x138) = 0;
    *(undefined4 *)(iVar1 + 0x13c) = 0;
    *(undefined4 *)(iVar1 + 0x140) = param_1;
    *(undefined4 *)(iVar1 + 0x144) = 0;
    iVar2 = FUN_004e7190(iVar1);
    if (-1 < iVar2) {
      return iVar2;
    }
  }
  _SfList_DeleteList_16(param_1,0,0xffffffff,0);
  _SfList_Destroy_4(param_1);
  return iVar2;
}


