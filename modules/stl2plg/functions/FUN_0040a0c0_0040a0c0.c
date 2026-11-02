/* Module: stl2plg.dll
   Function: FUN_0040a0c0
   Address: 0040a0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0040a0c0(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 2);
  switch(cVar1) {
  case '\x01':
  case '\x02':
  case '\x03':
  case '\t':
  case '\n':
  case '\v':
    if ((((cVar1 == '\x01') || (cVar1 == '\t')) || (cVar1 == ' ')) || (cVar1 == '!')) {
      bVar2 = *(char *)(param_1 + 1) == '\x01';
      switch(*(undefined1 *)(param_1 + 7)) {
      case 8:
      case 0xf:
      case 0x10:
      case 0x18:
      case 0x20:
        goto switchD_0040a150_caseD_8;
      default:
        if (param_1 < 0x400) {
          return false;
        }
        return false;
      }
    }
    switch(*(undefined1 *)(param_1 + 0x10)) {
    case 8:
    case 0xf:
    case 0x10:
    case 0x18:
    case 0x20:
      break;
    default:
      if (0x3ff < param_1) {
        return false;
      }
    }
    bVar2 = true;
    break;
  default:
    goto switchD_0040a0e7_caseD_4;
  }
  goto LAB_0040a16e;
switchD_0040a150_caseD_8:
  if (!bVar2) {
    return bVar2;
  }
LAB_0040a16e:
  if ((*(char *)(param_1 + 0xc) != '\0') && (*(char *)(param_1 + 0xe) != '\0')) {
    return bVar2;
  }
switchD_0040a0e7_caseD_4:
  return false;
}


