/* Module: mp3plug.dll
   Function: FUN_5f6a5fd0
   Address: 5f6a5fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


char FUN_5f6a5fd0(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  ushort *puVar4;
  int *piVar5;
  bool bVar6;
  
  cVar3 = '\0';
  uVar1 = *param_1;
  if (uVar1 < 0xfe02) {
    if ((uVar1 == 0xfe01) || (uVar1 == 1)) {
      switch(param_1[7]) {
      case 8:
        return (-(uVar1 != 1) & 0x21U) + 0x10;
      case 0x10:
switchD_5f6a606b_caseD_10:
        return '\x11';
      case 0x18:
switchD_5f6a606b_caseD_18:
        return '\x12';
      case 0x20:
        return '\x13';
      }
    }
    else if (uVar1 == 3) {
      if (param_1[7] == 0x20) {
        return ' ';
      }
      if (param_1[7] == 0x40) {
        return '!';
      }
    }
    else if ((uVar1 == 0xfe00) && ((param_1[7] == 0x18 || (param_1[7] == 0x20)))) {
      return '0';
    }
  }
  else if (uVar1 == 0xfe02) {
    switch(param_1[7]) {
    case 8:
switchD_5f6a60d5_caseD_8:
      return '\x10';
    case 0x10:
      return '@';
    case 0x18:
      return 'A';
    case 0x20:
      cVar3 = 'B';
    }
  }
  else if (uVar1 == 0xfffe) {
    iVar2 = 4;
    bVar6 = true;
    puVar4 = param_1 + 0xc;
    piVar5 = &DAT_5f73dd88;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *(int *)puVar4 == *piVar5;
      puVar4 = puVar4 + 2;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      switch(param_1[7]) {
      case 8:
        goto switchD_5f6a60d5_caseD_8;
      case 0x10:
        goto switchD_5f6a606b_caseD_10;
      case 0x18:
        goto switchD_5f6a606b_caseD_18;
      case 0x20:
        if (param_1[9] == 0x18) {
          return '\x13';
        }
        if (param_1[9] == 0x20) {
          return '\x13';
        }
      }
    }
  }
  return cVar3;
}


