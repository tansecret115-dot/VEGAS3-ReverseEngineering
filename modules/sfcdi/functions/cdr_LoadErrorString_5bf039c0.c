/* Module: sfcdi.dll
   Function: cdr_LoadErrorString
   Address: 5bf039c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdr_LoadErrorString(long,char *,unsigned int) */

int cdr_LoadErrorString(long param_1,char *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
                    /* 0x39c0  190  ?cdr_LoadErrorString@@YGHJPADI@Z */
  if (100 < param_1) {
    switch(param_1) {
    case 0x65:
      uVar1 = 0x123;
      break;
    case 0x66:
      uVar1 = 0x124;
      break;
    case 0x67:
      uVar1 = 0x125;
      break;
    case 0x68:
      uVar1 = 0x126;
      break;
    case 0x69:
      uVar1 = 0x127;
      break;
    case 0x6a:
      uVar1 = 0x128;
      break;
    case 0x6b:
      uVar1 = 0x129;
      break;
    case 0x6c:
      uVar1 = 0x12a;
      break;
    case 0x6d:
      uVar1 = 299;
      break;
    case 0x6e:
      uVar1 = 300;
      break;
    case 0x6f:
      uVar1 = 0x12d;
      break;
    case 0x70:
      uVar1 = 0x12e;
      break;
    case 0x71:
      uVar1 = 0x12f;
      break;
    case 0x72:
      uVar1 = 0x130;
      break;
    case 0x73:
      uVar1 = 0x131;
      break;
    case 0x74:
      uVar1 = 0x132;
      break;
    case 0x75:
      uVar1 = 0x133;
      break;
    case 0x76:
      uVar1 = 0x134;
      break;
    case 0x77:
      uVar1 = 0x135;
      break;
    case 0x78:
      uVar1 = 0x136;
      break;
    case 0x79:
      uVar1 = 0x137;
      break;
    case 0x7a:
      uVar1 = 0x138;
      break;
    case 0x7b:
      uVar1 = 0x139;
      break;
    case 0x7c:
      uVar1 = 0x152;
      break;
    default:
      goto switchD_5bf03a7d_caseD_8004e059;
    }
    goto LAB_5bf03c3e;
  }
  if (param_1 == 100) {
    uVar1 = 0x122;
    goto LAB_5bf03c3e;
  }
  if (-0x7ffb1f3c < param_1) {
    if (param_1 < -0x7ff8fff1) {
      if (param_1 == -0x7ff8fff2) {
        uVar1 = 0x110;
        goto LAB_5bf03c3e;
      }
      switch(param_1) {
      case -0x7ffb1f3b:
        uVar1 = 0x117;
        break;
      case -0x7ffb1f3a:
        uVar1 = 0x11c;
        break;
      case -0x7ffb1f39:
        uVar1 = 0x11b;
        break;
      case -0x7ffb1f38:
        uVar1 = 0x11f;
        break;
      case -0x7ffb1f37:
        uVar1 = 0x11e;
        break;
      case -0x7ffb1f36:
        uVar1 = 0x11d;
        break;
      case -0x7ffb1f35:
        uVar1 = 0x120;
        break;
      default:
        goto switchD_5bf03a7d_caseD_8004e059;
      case -0x7ffb1f32:
        uVar1 = 0x14e;
        break;
      case -0x7ffb1f31:
        uVar1 = 0x14f;
      }
      goto LAB_5bf03c3e;
    }
    if (param_1 == -0x7ff8ffa9) {
      uVar1 = 0x112;
      goto LAB_5bf03c3e;
    }
    if (param_1 == 0) {
      uVar1 = 0x10e;
      goto LAB_5bf03c3e;
    }
    goto switchD_5bf03a7d_caseD_8004e059;
  }
  if (param_1 == -0x7ffb1f3c) {
    uVar1 = 0x11a;
    goto LAB_5bf03c3e;
  }
  if (param_1 < -0x7ffb1ff3) {
    if (param_1 == -0x7ffb1ff4) {
      uVar1 = 0x10f;
      goto LAB_5bf03c3e;
    }
    if (param_1 < -0x7ffb1ff8) {
      if (param_1 == -0x7ffb1ff9) {
        uVar1 = 0x13a;
        goto LAB_5bf03c3e;
      }
      if (param_1 == -0x7fffbffd) {
        uVar1 = 0x111;
        goto LAB_5bf03c3e;
      }
      if (param_1 == -0x7ffbf69c) {
        uVar1 = 0x121;
        goto LAB_5bf03c3e;
      }
      if (param_1 == -0x7ffb1ffa) {
        uVar1 = 0x13b;
        goto LAB_5bf03c3e;
      }
    }
    else {
      if (param_1 == -0x7ffb1ff8) {
        uVar1 = 0x118;
        goto LAB_5bf03c3e;
      }
      if (param_1 == -0x7ffb1ff7) {
        uVar1 = 0x119;
        goto LAB_5bf03c3e;
      }
    }
switchD_5bf03a7d_caseD_8004e059:
    uVar1 = 0;
  }
  else {
    switch(param_1) {
    case -0x7ffb1fa8:
      uVar1 = 0x156;
      break;
    default:
      goto switchD_5bf03a7d_caseD_8004e059;
    case -0x7ffb1f40:
      uVar1 = 0x113;
      break;
    case -0x7ffb1f3f:
      uVar1 = 0x114;
      break;
    case -0x7ffb1f3e:
      uVar1 = 0x115;
      break;
    case -0x7ffb1f3d:
      uVar1 = 0x116;
    }
  }
LAB_5bf03c3e:
  iVar2 = FUN_5bf27f10(DAT_5bf65fc4,uVar1,param_2,param_3);
  return iVar2;
}


