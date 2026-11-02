/* Module: vidcap30.exe
   Function: FUN_0041db40
   Address: 0041db40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041db40(byte param_1,byte param_2,uchar *param_3)

{
  uchar *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uchar local_8 [8];
  
  *param_3 = '\0';
  if ((param_1 & 8) != 0) {
    puVar1 = (uchar *)_SfGetString_8(DAT_005ba2a0,0x67);
    _mbscat(param_3,puVar1);
  }
  if ((param_1 & 4) != 0) {
    puVar1 = (uchar *)_SfGetString_8(DAT_005ba2a0,0x86);
    _mbscat(param_3,puVar1);
  }
  if ((param_1 & 0x10) != 0) {
    puVar1 = (uchar *)_SfGetString_8(DAT_005ba2a0,0x60);
    _mbscat(param_3,puVar1);
  }
  if ((0x2f < param_2) && (param_2 < 0x5b)) {
    uVar2 = (uint)param_2;
    puVar3 = &DAT_0058a198;
LAB_0041dbc3:
    SfPrintF(local_8,puVar3,uVar2);
    _mbscat(param_3,local_8);
    return;
  }
  switch((uint)param_2) {
  case 8:
    uVar4 = 99;
    break;
  case 9:
    uVar4 = 0x88;
    break;
  default:
    uVar4 = 0x89;
    break;
  case 0xc:
  case 0x65:
    uVar4 = 0x76;
    break;
  case 0xd:
    uVar4 = 0x6b;
    break;
  case 0x14:
    uVar4 = 0x65;
    break;
  case 0x1b:
    uVar4 = 0x6c;
    break;
  case 0x20:
    uVar4 = 0x87;
    break;
  case 0x21:
    uVar4 = 0x82;
    break;
  case 0x22:
    uVar4 = 0x81;
    break;
  case 0x23:
    uVar4 = 0x6a;
    break;
  case 0x24:
    uVar4 = 0x6d;
    break;
  case 0x25:
    uVar4 = 0x70;
    break;
  case 0x26:
    uVar4 = 0x8a;
    break;
  case 0x27:
    uVar4 = 0x84;
    break;
  case 0x28:
    uVar4 = 0x69;
    break;
  case 0x2d:
    uVar4 = 0x6e;
    break;
  case 0x2e:
    uVar4 = 0x68;
    break;
  case 0x60:
    uVar4 = 0x71;
    break;
  case 0x61:
    uVar4 = 0x72;
    break;
  case 0x62:
    uVar4 = 0x73;
    break;
  case 99:
    uVar4 = 0x74;
    break;
  case 100:
    uVar4 = 0x75;
    break;
  case 0x66:
    uVar4 = 0x77;
    break;
  case 0x67:
    uVar4 = 0x78;
    break;
  case 0x68:
    uVar4 = 0x79;
    break;
  case 0x69:
    uVar4 = 0x7a;
    break;
  case 0x6a:
    uVar4 = 0x80;
    break;
  case 0x6b:
    uVar4 = 0x7f;
    break;
  case 0x6d:
    uVar4 = 0x7e;
    break;
  case 0x6e:
    uVar4 = 0x7b;
    break;
  case 0x6f:
    uVar4 = 0x7c;
    break;
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
    uVar2 = param_2 - 0x6f;
    puVar3 = &DAT_0058a168;
    goto LAB_0041dbc3;
  case 0x90:
    uVar4 = 0x7d;
    break;
  case 0x91:
    uVar4 = 0x85;
    break;
  case 0xba:
    _mbscat(param_3,";");
    return;
  case 0xbb:
    _mbscat(param_3,"=");
    return;
  case 0xbc:
    _mbscat(param_3,",");
    return;
  case 0xbd:
    _mbscat(param_3,"-");
    return;
  case 0xbe:
    _mbscat(param_3,".");
    return;
  case 0xbf:
    _mbscat(param_3,"/");
    return;
  case 0xc0:
    _mbscat(param_3,"`");
    return;
  case 0xdb:
    _mbscat(param_3,"[");
    return;
  case 0xdc:
    _mbscat(param_3,"\\");
    return;
  case 0xdd:
    _mbscat(param_3,"]");
    return;
  case 0xde:
    _mbscat(param_3,"\'");
    return;
  }
  puVar1 = (uchar *)_SfGetString_8(DAT_005ba2a0,uVar4);
  _mbscat(param_3,puVar1);
  return;
}


