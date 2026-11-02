/* Module: sftrans1.dll
   Function: FUN_00531230
   Address: 00531230
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_00531230(int param_1,undefined4 param_2,LPSTR param_3,undefined4 param_4,uchar *param_5)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 local_4b8 [12];
  uchar local_4ac [64];
  undefined1 local_46c [52];
  undefined1 local_438 [28];
  undefined1 local_41c [28];
  undefined1 local_400 [128];
  undefined1 local_380 [128];
  CHAR local_300 [512];
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  iVar1 = FUN_005356d0(local_100,0x80);
  if (iVar1 < 0) {
    local_380[0] = 0;
  }
  else {
    FUN_00531130(local_100,local_380,0x80);
  }
  iVar1 = FUN_00535a60(local_80,0x80);
  if (iVar1 < 0) {
    local_400[0] = 0;
  }
  else {
    FUN_00531130(local_80,local_400,0x80);
  }
  iVar1 = FUN_00532240(local_41c,0x19);
  if (iVar1 < 0) {
    local_46c[0] = 0;
  }
  else {
    FUN_00537950(local_41c);
    FUN_00531130(local_41c,local_46c,0x32);
  }
  local_438[0] = 0;
  FUN_005335c0(local_438,0x19,0);
  FUN_0052f8e0(local_4b8,0xb);
  switch(param_2) {
  case 1:
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    pcVar2 = 
    "http://www.sonicfoundry.com/Registration/default.asp?UserName=%s&Company=%s&SerialNumber1=%s&MachineCode1=%s&Product1=%u"
    ;
    goto LAB_00531374;
  case 2:
    wsprintfA(local_300,
              "http://www.sonicfoundry.com/Registration/reinstall.asp?SerialNumber1=%s&MachineCode1=%s&Product1=%u"
              ,local_46c,local_4b8,*(undefined4 *)(param_1 + 0x34));
    break;
  case 3:
  case 4:
    if (param_5 == (uchar *)0x0) {
      wsprintfA((LPSTR)local_4ac,"%u",*(undefined4 *)(param_1 + 0x34));
    }
    else {
      _mbscpy(local_4ac,param_5);
    }
    wsprintfA(local_300,
              "http://www.sonicfoundry.com/productinfo.asp?Place=Buy&Serial%u=%s&MachineCode=%s&Product=%s"
              ,*(undefined4 *)(param_1 + 0x34),local_46c,local_4b8,local_4ac);
    break;
  case 5:
    wsprintfA(local_300,
              "http://www.sonicfoundry.com/Registration/default.asp?UserName=%s&Company=%s&MachineCode1=%s&Product1=%u"
              ,local_380,local_400,local_4b8,*(undefined4 *)(param_1 + 0x34));
    break;
  case 6:
    if (param_5 == (uchar *)0x0) {
      wsprintfA((LPSTR)local_4ac,"%u",*(undefined4 *)(param_1 + 0x34));
    }
    else {
      _mbscpy(local_4ac,param_5);
    }
    wsprintfA(local_300,
              "http://www.sonicfoundry.com/productinfo.asp?Place=Buy&MachineCode=%s&Product=%s",
              local_4b8,local_4ac);
    break;
  case 7:
    wsprintfA(local_300,
              "http://www.sonicfoundry.com/Registration/default.asp?UserName=%s&Company=%s&MachineCode1=%s&FamilyID=%u"
              ,local_380,local_400,local_4b8,*(undefined4 *)(param_1 + 0x30));
    break;
  case 8:
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    pcVar2 = 
    "http://www.sonicfoundry.com/Registration/default.asp?UserName=%s&Company=%s&SerialNumber1=%s&MachineCode1=%s&FamilyID=%u"
    ;
LAB_00531374:
    wsprintfA(local_300,pcVar2,local_380,local_400,local_46c,local_4b8,uVar3);
    break;
  case 9:
    wsprintfA(local_300,
              "http://www.sonicfoundry.com/Registration/reinstall.asp?SerialNumber1=%s&MachineCode1=%s&FamilyID=%u"
              ,local_46c,local_4b8,*(undefined4 *)(param_1 + 0x30));
    break;
  case 10:
    if (param_5 == (uchar *)0x0) {
      wsprintfA((LPSTR)local_4ac,"%u",*(undefined4 *)(param_1 + 0x34));
    }
    else {
      _mbscpy(local_4ac,param_5);
    }
    wsprintfA(local_300,
              "http://www.sonicfoundry.com/productinfo.asp?Place=Buy&MachineCode=%s&SerialNumber=%s&Product=%s"
              ,local_4b8,local_438,local_4ac);
  }
  lstrcpynA(param_3,local_300,0x200);
  param_3[0x1ff] = '\0';
  return;
}


