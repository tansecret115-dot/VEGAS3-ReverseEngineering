/* Module: vegas30.exe
   Function: FUN_004eec30
   Address: 004eec30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004eec30(uchar *param_1)

{
  char *lpString2;
  int iVar1;
  uchar *puVar2;
  uchar local_240 [520];
  undefined4 local_38 [3];
  int local_2c;
  
  puVar2 = local_240;
  for (iVar1 = 0x90; iVar1 != 0; iVar1 = iVar1 + -1) {
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2 = puVar2 + 4;
  }
  _mbscpy(local_240,param_1);
  local_2c = FUN_004ebc10(local_240,local_38,local_240);
  if (-1 < local_2c) {
    switch(local_38[0]) {
    case 2:
    case 3:
    case 4:
    case 5:
      iVar1 = FUN_004eed80(param_1);
      return iVar1;
    case 6:
      lpString2 = "Sonic Foundry Vegas Video project";
      break;
    case 7:
      lpString2 = "Sonic Foundry self-registering DLL";
      break;
    default:
      goto switchD_004eec9f_caseD_8;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      iVar1 = FUN_004ef240(local_38[0],param_1);
      return iVar1;
    case 0x10:
      lpString2 = "Sonic Foundry Vegas Video Archive";
      break;
    case 0x11:
      lpString2 = (char *)_SfGetString_8(DAT_00647204,0x14bb);
      break;
    case 0x12:
      lpString2 = (char *)_SfGetString_8(DAT_00647204,0x14bc);
    }
    lstrcpynA((LPSTR)param_1,lpString2,0x104);
    param_1[0x103] = '\0';
  }
switchD_004eec9f_caseD_8:
  return local_2c;
}


