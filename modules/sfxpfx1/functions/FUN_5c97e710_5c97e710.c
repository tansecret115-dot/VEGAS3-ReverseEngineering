/* Module: sfxpfx1.dll
   Function: FUN_5c97e710
   Address: 5c97e710
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_5c97e710(void *this,undefined4 param_1,LPSTR param_2,undefined4 param_3,uchar *param_4)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  CHAR local_4b8 [12];
  uchar local_4ac [64];
  CHAR local_46c [52];
  CHAR local_438 [28];
  byte local_41c [28];
  CHAR local_400 [128];
  CHAR local_380 [128];
  CHAR local_300 [512];
  byte local_100 [128];
  byte local_80 [128];
  
  iVar1 = FUN_5c982bb0((LPSTR)local_100,0x80);
  if (iVar1 < 0) {
    local_380[0] = '\0';
  }
  else {
    FUN_5c97e610(local_100,local_380,0x80);
  }
  iVar1 = FUN_5c982f40((LPSTR)local_80,0x80);
  if (iVar1 < 0) {
    local_400[0] = '\0';
  }
  else {
    FUN_5c97e610(local_80,local_400,0x80);
  }
  iVar1 = FUN_5c97f720(this,(LPSTR)local_41c,0x19);
  if (iVar1 < 0) {
    local_46c[0] = '\0';
  }
  else {
    FUN_5c984e60((LPSTR)local_41c);
    FUN_5c97e610(local_41c,local_46c,0x32);
  }
  local_438[0] = '\0';
  FUN_5c980aa0(this,local_438,0x19,0);
  FUN_5c97cdc0(this,local_4b8,0xb);
  switch(param_1) {
  case 1:
    uVar3 = *(undefined4 *)((int)this + 0x34);
    pcVar2 = 
    "http://www.sonicfoundry.com/Registration/default.asp?UserName=%s&Company=%s&SerialNumber1=%s&MachineCode1=%s&Product1=%u"
    ;
    goto LAB_5c97e854;
  case 2:
    wsprintfA(local_300,
              "http://www.sonicfoundry.com/Registration/reinstall.asp?SerialNumber1=%s&MachineCode1=%s&Product1=%u"
              ,local_46c,local_4b8,*(undefined4 *)((int)this + 0x34));
    break;
  case 3:
  case 4:
    if (param_4 == (uchar *)0x0) {
      wsprintfA((LPSTR)local_4ac,"%u",*(undefined4 *)((int)this + 0x34));
    }
    else {
      _mbscpy(local_4ac,param_4);
    }
    wsprintfA(local_300,
              "http://www.sonicfoundry.com/productinfo.asp?Place=Buy&Serial%u=%s&MachineCode=%s&Product=%s"
              ,*(undefined4 *)((int)this + 0x34),local_46c,local_4b8,local_4ac);
    break;
  case 5:
    wsprintfA(local_300,
              "http://www.sonicfoundry.com/Registration/default.asp?UserName=%s&Company=%s&MachineCode1=%s&Product1=%u"
              ,local_380,local_400,local_4b8,*(undefined4 *)((int)this + 0x34));
    break;
  case 6:
    if (param_4 == (uchar *)0x0) {
      wsprintfA((LPSTR)local_4ac,"%u",*(undefined4 *)((int)this + 0x34));
    }
    else {
      _mbscpy(local_4ac,param_4);
    }
    wsprintfA(local_300,
              "http://www.sonicfoundry.com/productinfo.asp?Place=Buy&MachineCode=%s&Product=%s",
              local_4b8,local_4ac);
    break;
  case 7:
    wsprintfA(local_300,
              "http://www.sonicfoundry.com/Registration/default.asp?UserName=%s&Company=%s&MachineCode1=%s&FamilyID=%u"
              ,local_380,local_400,local_4b8,*(undefined4 *)((int)this + 0x30));
    break;
  case 8:
    uVar3 = *(undefined4 *)((int)this + 0x30);
    pcVar2 = 
    "http://www.sonicfoundry.com/Registration/default.asp?UserName=%s&Company=%s&SerialNumber1=%s&MachineCode1=%s&FamilyID=%u"
    ;
LAB_5c97e854:
    wsprintfA(local_300,pcVar2,local_380,local_400,local_46c,local_4b8,uVar3);
    break;
  case 9:
    wsprintfA(local_300,
              "http://www.sonicfoundry.com/Registration/reinstall.asp?SerialNumber1=%s&MachineCode1=%s&FamilyID=%u"
              ,local_46c,local_4b8,*(undefined4 *)((int)this + 0x30));
    break;
  case 10:
    if (param_4 == (uchar *)0x0) {
      wsprintfA((LPSTR)local_4ac,"%u",*(undefined4 *)((int)this + 0x34));
    }
    else {
      _mbscpy(local_4ac,param_4);
    }
    wsprintfA(local_300,
              "http://www.sonicfoundry.com/productinfo.asp?Place=Buy&MachineCode=%s&SerialNumber=%s&Product=%s"
              ,local_4b8,local_438,local_4ac);
  }
  lstrcpynA(param_2,local_300,0x200);
  param_2[0x1ff] = '\0';
  return;
}


