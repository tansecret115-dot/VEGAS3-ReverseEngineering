/* Module: aviplug.dll
   Function: FUN_5f9d5660
   Address: 5f9d5660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f9d5660(char param_1)

{
  int iVar1;
  
  iVar1 = toupper((int)param_1);
  switch(iVar1) {
  case 0x30:
  case 0x4f:
    return 0;
  case 0x31:
  case 0x49:
    return 1;
  case 0x32:
    return 2;
  case 0x33:
    return 3;
  case 0x34:
    return 4;
  case 0x35:
    return 5;
  case 0x36:
    return 6;
  case 0x37:
    return 7;
  case 0x38:
    return 8;
  case 0x39:
    return 9;
  default:
    return 0xff;
  case 0x42:
    return 10;
  case 0x43:
    return 0xb;
  case 0x44:
    return 0xc;
  case 0x45:
    return 0xd;
  case 0x46:
    return 0xe;
  case 0x47:
    return 0xf;
  case 0x48:
    return 0x10;
  case 0x4a:
    return 0x11;
  case 0x4b:
    return 0x12;
  case 0x4c:
    return 0x13;
  case 0x4d:
    return 0x14;
  case 0x4e:
    return 0x15;
  case 0x50:
    return 0x16;
  case 0x51:
    return 0x17;
  case 0x52:
    return 0x18;
  case 0x53:
    return 0x19;
  case 0x54:
    return 0x1a;
  case 0x55:
  case 0x5a:
    return 0x1f;
  case 0x56:
    return 0x1b;
  case 0x57:
    return 0x1c;
  case 0x58:
    return 0x1d;
  case 0x59:
    return 0x1e;
  }
}


