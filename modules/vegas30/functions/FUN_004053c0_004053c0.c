/* Module: vegas30.exe
   Function: FUN_004053c0
   Address: 004053c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004053c0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 local_248 [64];
  undefined1 local_208 [520];
  
  if ((DAT_00647e30 == 1) && (DAT_00647d2c != '\0')) {
    if (DAT_0064a354 == 0) {
      uVar1 = _SfGetString_8(DAT_00647204,0x69ba);
      iVar2 = SfMsgBox(DAT_00647624,0x24,uVar1);
      if (iVar2 == 6) {
        DAT_0064a354 = 1;
      }
      else if (DAT_0064a354 == 0) {
        return 0;
      }
    }
    SfPrintF(local_208,"%s \"%s\"",&DAT_00647d2c,param_1);
    iVar3 = FUN_005fb200(1);
    iVar2 = DAT_0064b138;
    if (-1 < iVar3) {
      if ((DAT_0064b138 != 0) && (iVar3 = FUN_004366b0(DAT_0064b138), iVar3 != 0)) {
        FUN_00436670(iVar2);
        iVar2 = FUN_004050f0(local_208,1);
        if (iVar2 == 0) {
          _SfLoadString_16(DAT_00647204,0x69bd,local_248,0x40);
          puVar5 = local_248;
          puVar4 = &DAT_00647d2c;
          uVar1 = _SfGetString_8(DAT_00647204,0x69be);
          SfMsgBox(DAT_00647624,0x40,uVar1,puVar4,puVar5);
        }
        return iVar2;
      }
      uVar1 = _SfGetString_8(DAT_00647204,0x69bb);
      SfMsgBox(DAT_00647624,0x10,uVar1);
      return 0;
    }
  }
  else {
    uVar1 = _SfGetString_8(DAT_00647204,0x69bc);
    SfMsgBox(DAT_00647624,0x40,uVar1);
  }
  return 0;
}


