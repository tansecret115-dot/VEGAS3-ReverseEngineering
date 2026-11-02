/* Module: vegas30k.dll
   Function: FUN_01158de0
   Address: 01158de0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01158de0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 int param_6,int param_7,int param_8)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  undefined1 local_10 [4];
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
switchD_01158e49_caseD_1:
      *(undefined1 *)(param_1 + 0x122) = 1;
      goto LAB_01158eb7;
    default:
      pcVar4 = "Invalid bit depth for grayscale image";
    }
    break;
  default:
    pcVar4 = "Invalid image color type specified";
    break;
  case 2:
    if ((param_4 != 8) && (param_4 != 0x10)) {
      FUN_01155f80(param_1,"Invalid bit depth for RGB image");
    }
    *(undefined1 *)(param_1 + 0x122) = 3;
    goto LAB_01158eb7;
  case 3:
    switch(param_4) {
    case 1:
    case 2:
    case 4:
    case 8:
      goto switchD_01158e49_caseD_1;
    default:
      pcVar4 = "Invalid bit depth for paletted image";
    }
    break;
  case 4:
    if ((param_4 != 8) && (param_4 != 0x10)) {
      FUN_01155f80(param_1,"Invalid bit depth for grayscale+alpha image");
    }
    *(undefined1 *)(param_1 + 0x122) = 2;
    goto LAB_01158eb7;
  case 6:
    if ((param_4 != 8) && (param_4 != 0x10)) {
      FUN_01155f80(param_1,"Invalid bit depth for RGBA image");
    }
    *(undefined1 *)(param_1 + 0x122) = 4;
    goto LAB_01158eb7;
  }
  FUN_01155f80(param_1,pcVar4);
LAB_01158eb7:
  if (param_6 != 0) {
    FUN_01155fb0(param_1,"Invalid compression type specified");
    param_6 = 0;
  }
  if (param_7 != 0) {
    FUN_01155fb0(param_1,"Invalid filter type specified");
    param_7 = 0;
  }
  if ((param_8 != 0) && (param_8 != 1)) {
    FUN_01155fb0(param_1,"Invalid interlace type specified");
    param_8 = 1;
  }
  *(char *)(param_1 + 0x11b) = (char)param_8;
  *(undefined1 *)(param_1 + 0x11e) = (undefined1)param_5;
  cVar3 = (char)param_4;
  bVar2 = *(char *)(param_1 + 0x122) * cVar3;
  *(byte *)(param_1 + 0x121) = bVar2;
  *(uint *)(param_1 + 0xd0) = (uint)bVar2 * param_2 + 7 >> 3;
  *(char *)(param_1 + 0x11f) = cVar3;
  *(int *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0xc4) = param_3;
  *(int *)(param_1 + 0xcc) = param_2;
  *(char *)(param_1 + 0x120) = cVar3;
  *(char *)(param_1 + 0x123) = *(char *)(param_1 + 0x122);
  FUN_01158c50(local_10,param_2);
  FUN_01158c50(local_c,param_3);
  local_6 = (undefined1)param_6;
  local_7 = (undefined1)param_5;
  local_5 = (undefined1)param_7;
  local_8 = cVar3;
  local_4 = (char)param_8;
  FUN_01158cd0(param_1,&DAT_01206fbc,local_10,0xd);
  *(code **)(param_1 + 0x8c) = FUN_01126d10;
  *(code **)(param_1 + 0x90) = FUN_01126d70;
  *(int *)(param_1 + 0x94) = param_1;
  if (*(char *)(param_1 + 0x11d) == '\0') {
    if ((*(char *)(param_1 + 0x11e) == '\x03') || (*(byte *)(param_1 + 0x11f) < 8)) {
      *(undefined1 *)(param_1 + 0x11d) = 8;
    }
    else {
      *(undefined1 *)(param_1 + 0x11d) = 0xf8;
    }
  }
  uVar1 = *(uint *)(param_1 + 100);
  if ((uVar1 & 1) == 0) {
    if (*(char *)(param_1 + 0x11d) == '\b') {
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xbc) = 1;
    }
  }
  if ((uVar1 & 2) == 0) {
    *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  }
  if ((uVar1 & 4) == 0) {
    *(undefined4 *)(param_1 + 0xb8) = 8;
  }
  if ((uVar1 & 8) == 0) {
    *(undefined4 *)(param_1 + 0xb4) = 0xf;
  }
  if ((uVar1 & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 8;
  }
  FUN_01149900(param_1 + 0x6c,*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0),
               *(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb8),
               *(undefined4 *)(param_1 + 0xbc),"1.1.3",0x38);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x60) = 1;
  return;
}


