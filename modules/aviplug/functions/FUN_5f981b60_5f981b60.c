/* Module: aviplug.dll
   Function: FUN_5f981b60
   Address: 5f981b60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f981b60(undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    *param_2 = '\0';
  }
  switch(param_1) {
  case 0:
    return DAT_5f9f5a1c;
  case 1:
    return DAT_5f9f5a20;
  case 2:
    _mbscpy(param_2,&DAT_5f9f5a24);
    return DAT_5f9f5a64;
  case 3:
    _mbscpy(param_2,&DAT_5f9f5a68);
    return DAT_5f9f5aa8;
  case 4:
    return DAT_5f9f5aac;
  default:
    return 0;
  case 0x18:
    _mbscpy(param_2,&DAT_5f9f5b5c);
    return DAT_5f9f5b64;
  case 0x28:
    _mbscpy(param_2,&DAT_5f9f5b80);
    return DAT_5f9f5b88;
  case 0x3c:
    _mbscpy(param_2,&DAT_5f9f5b74);
    return DAT_5f9f5b7c;
  case 100:
    _mbscpy(param_2,&DAT_5f9f5b90);
    return DAT_5f9f5b98;
  case 0x65:
    _mbscpy(param_2,&DAT_5f9f5b9c);
    return DAT_5f9f5ba4;
  case 0x66:
    _mbscpy(param_2,&DAT_5f9f5ba8);
    return DAT_5f9f5bb0;
  case 0x78:
    _mbscpy(param_2,&DAT_5f9f5bc0);
    return DAT_5f9f5bc8;
  case 0x79:
    _mbscpy(param_2,&DAT_5f9f5bcc);
    return DAT_5f9f5bd4;
  }
}


