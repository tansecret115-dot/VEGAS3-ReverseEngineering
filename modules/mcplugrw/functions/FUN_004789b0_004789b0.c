/* Module: mcplugrw.dll
   Function: FUN_004789b0
   Address: 004789b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004789b0(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 int param_7,int param_8)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  byte local_10 [4];
  undefined1 local_c [4];
  char local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  switch(param_5) {
  case 0:
    switch(param_4) {
    case 1:
    case 2:
    case 4:
    case 8:
    case 0x10:
switchD_00478a19_caseD_1:
      *(undefined1 *)((int)param_1 + 0x122) = 1;
      goto LAB_00478a87;
    default:
      pcVar4 = "Invalid bit depth for grayscale image";
    }
    break;
  default:
    pcVar4 = "Invalid image color type specified";
    break;
  case 2:
    if ((param_4 != 8) && (param_4 != 0x10)) {
      FUN_00475b50(param_1,"Invalid bit depth for RGB image");
    }
    *(undefined1 *)((int)param_1 + 0x122) = 3;
    goto LAB_00478a87;
  case 3:
    switch(param_4) {
    case 1:
    case 2:
    case 4:
    case 8:
      goto switchD_00478a19_caseD_1;
    default:
      pcVar4 = "Invalid bit depth for paletted image";
    }
    break;
  case 4:
    if ((param_4 != 8) && (param_4 != 0x10)) {
      FUN_00475b50(param_1,"Invalid bit depth for grayscale+alpha image");
    }
    *(undefined1 *)((int)param_1 + 0x122) = 2;
    goto LAB_00478a87;
  case 6:
    if ((param_4 != 8) && (param_4 != 0x10)) {
      FUN_00475b50(param_1,"Invalid bit depth for RGBA image");
    }
    *(undefined1 *)((int)param_1 + 0x122) = 4;
    goto LAB_00478a87;
  }
  FUN_00475b50(param_1,pcVar4);
LAB_00478a87:
  if (param_6 != 0) {
    FUN_00475b80((int)param_1,"Invalid compression type specified");
    param_6 = 0;
  }
  if (param_7 != 0) {
    FUN_00475b80((int)param_1,"Invalid filter type specified");
    param_7 = 0;
  }
  if ((param_8 != 0) && (param_8 != 1)) {
    FUN_00475b80((int)param_1,"Invalid interlace type specified");
    param_8 = 1;
  }
  *(char *)((int)param_1 + 0x11b) = (char)param_8;
  *(undefined1 *)((int)param_1 + 0x11e) = (undefined1)param_5;
  cVar3 = (char)param_4;
  bVar2 = *(char *)((int)param_1 + 0x122) * cVar3;
  *(byte *)((int)param_1 + 0x121) = bVar2;
  param_1[0x34] = (uint)bVar2 * param_2 + 7 >> 3;
  *(char *)((int)param_1 + 0x11f) = cVar3;
  param_1[0x30] = param_2;
  param_1[0x31] = param_3;
  param_1[0x33] = param_2;
  *(char *)(param_1 + 0x48) = cVar3;
  *(char *)((int)param_1 + 0x123) = *(char *)((int)param_1 + 0x122);
  FUN_00478820(local_10,param_2);
  FUN_00478820(local_c,param_3);
  local_6 = (undefined1)param_6;
  local_7 = (undefined1)param_5;
  local_5 = (undefined1)param_7;
  local_8 = cVar3;
  local_4 = (char)param_8;
  FUN_004788a0(param_1,(byte *)&DAT_004a6e0c,local_10,0xd);
  param_1[0x23] = (int)FUN_0044c4b0;
  param_1[0x24] = (int)FUN_0044c510;
  param_1[0x25] = (int)param_1;
  if (*(char *)((int)param_1 + 0x11d) == '\0') {
    if ((*(char *)((int)param_1 + 0x11e) == '\x03') || (*(byte *)((int)param_1 + 0x11f) < 8)) {
      *(undefined1 *)((int)param_1 + 0x11d) = 8;
    }
    else {
      *(undefined1 *)((int)param_1 + 0x11d) = 0xf8;
    }
  }
  uVar1 = param_1[0x19];
  if ((uVar1 & 1) == 0) {
    if (*(char *)((int)param_1 + 0x11d) == '\b') {
      param_1[0x2f] = 0;
    }
    else {
      param_1[0x2f] = 1;
    }
  }
  if ((uVar1 & 2) == 0) {
    param_1[0x2b] = -1;
  }
  if ((uVar1 & 4) == 0) {
    param_1[0x2e] = 8;
  }
  if ((uVar1 & 8) == 0) {
    param_1[0x2d] = 0xf;
  }
  if ((uVar1 & 0x10) == 0) {
    param_1[0x2c] = 8;
  }
  FUN_0044e120((int)(param_1 + 0x1b),param_1[0x2b],param_1[0x2c],param_1[0x2d],param_1[0x2e],
               param_1[0x2f],"1.1.3",0x38);
  param_1[0x1e] = param_1[0x29];
  param_1[0x1f] = param_1[0x2a];
  param_1[0x18] = 1;
  return;
}


