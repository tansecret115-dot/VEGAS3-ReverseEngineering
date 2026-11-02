/* Module: vegas30.exe
   Function: FUN_00405170
   Address: 00405170
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00405170(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 local_248 [64];
  undefined1 local_208 [520];
  
  if (DAT_00647b14 == '\0') {
    uVar1 = _SfGetString_8(DAT_00647204,0x50f6);
    SfMsgBox(DAT_00647624,0x40,uVar1);
    return 0;
  }
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
  if ((DAT_00647c18 < 1) || (iVar2 = DAT_00647c20, DAT_00647c18 == 2)) {
    iVar2 = 0;
  }
  if ((param_5 < 0) || (((param_5 < 1 && (param_4 == 0)) || (DAT_00647c18 < 1)))) {
    pcVar3 = " /Direct";
    if (iVar2 == 0) {
      pcVar3 = "";
    }
    SfPrintF(local_208,"%s \"%s\"%s",&DAT_00647b14,param_1,pcVar3);
  }
  else {
    pcVar3 = " /Direct";
    if (iVar2 == 0) {
      pcVar3 = "";
    }
    SfPrintF(local_208,"%s \"%s\" /Region:%I64d,%I64d,%x%s",&DAT_00647b14,param_1,param_2,param_3,
             param_4,param_5,param_6,pcVar3);
  }
  iVar4 = FUN_005fb200(1);
  iVar2 = DAT_0064b138;
  if (-1 < iVar4) {
    if ((DAT_0064b138 != 0) && (iVar4 = FUN_004366b0(DAT_0064b138), iVar4 != 0)) {
      FUN_00436670(iVar2);
      iVar2 = FUN_004050f0(local_208,1);
      if (iVar2 == 0) {
        _SfLoadString_16(DAT_00647204,0x50f8,local_248,0x40);
        puVar6 = local_248;
        puVar5 = &DAT_00647b14;
        uVar1 = _SfGetString_8(DAT_00647204,0x50f7);
        SfMsgBox(DAT_00647624,0x40,uVar1,puVar5,puVar6);
      }
      return iVar2;
    }
    uVar1 = _SfGetString_8(DAT_00647204,0x69bb);
    SfMsgBox(DAT_00647624,0x10,uVar1);
  }
  return 0;
}


