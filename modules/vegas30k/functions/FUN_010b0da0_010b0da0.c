/* Module: vegas30k.dll
   Function: FUN_010b0da0
   Address: 010b0da0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010b0da0(int param_1,int param_2,double param_3)

{
  int iVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  double local_10;
  
  iVar1 = *(int *)(param_1 + 0x150);
  switch(param_2) {
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    dVar2 = _DAT_011e1b48;
    break;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    dVar2 = _DAT_011e2af8;
    break;
  default:
    goto switchD_010b0dcb_default;
  }
  local_10 = param_3 * dVar2;
switchD_010b0dcb_default:
  switch(param_2 + -10) {
  case 0:
  case 6:
    switch(*(undefined4 *)(param_1 + 0x150)) {
    case 0:
    case 3:
    case 4:
    case 7:
    case 8:
      dVar2 = *(double *)(param_1 + 0x140) - local_10;
      *(double *)(param_1 + 0x140) = dVar2;
      if (_DAT_011e2ae8 <= dVar2) break;
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x144) = 0xbff00000;
      switch(*(undefined4 *)(param_1 + 0x150)) {
      case 3:
      case 7:
        uVar4 = FUN_010b1420(param_1,9);
LAB_010b1171:
        if (uVar4 != 0) {
          *(undefined4 *)(param_1 + 0x150) = 9;
        }
        goto switchD_010b0df5_default;
      case 4:
      case 8:
switchD_010b1160_caseD_4:
        iVar3 = FUN_010b1420(param_1,0xb);
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + 0x150) = 0xb;
        }
        goto switchD_010b0df5_default;
      default:
        iVar3 = FUN_010b1420(param_1,1);
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + 0x150) = 1;
          goto switchD_010b0df5_default;
        }
      }
    case 1:
      iVar3 = FUN_010b1420(param_1,5);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x150) = 5;
      }
      break;
    default:
      break;
    case 6:
      iVar3 = FUN_010b1420(param_1,2);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x150) = 2;
        break;
      }
    case 2:
switchD_010b11b4_caseD_1:
      *(double *)(param_1 + 0x140) = *(double *)(param_1 + 0x140) * _DAT_011e2ae0;
      *(undefined4 *)(param_1 + 0x150) = 0;
      break;
    case 10:
switchD_010b11b4_caseD_9:
      *(double *)(param_1 + 0x140) = *(double *)(param_1 + 0x140) * _DAT_011e2ae0;
      iVar3 = FUN_010b1420(param_1,3);
      *(uint *)(param_1 + 0x150) = (-(uint)(iVar3 != 0) & 0xfffffffc) + 7;
      break;
    case 0xc:
switchD_010b11b4_caseD_b:
      *(double *)(param_1 + 0x140) = *(double *)(param_1 + 0x140) * _DAT_011e2ae0;
      iVar3 = FUN_010b1420(param_1,4);
      *(uint *)(param_1 + 0x150) = (-(uint)(iVar3 != 0) & 0xfffffffc) + 8;
      break;
    }
    break;
  case 1:
  case 4:
    switch(*(undefined4 *)(param_1 + 0x150)) {
    case 0:
    case 1:
    case 2:
    case 5:
    case 6:
      dVar2 = *(double *)(param_1 + 0x148) - local_10;
      *(double *)(param_1 + 0x148) = dVar2;
      if (_DAT_011e2ae8 <= dVar2) goto switchD_010b0df5_default;
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x14c) = 0xbff00000;
      switch(*(undefined4 *)(param_1 + 0x150)) {
      case 1:
      case 5:
        uVar4 = *(uint *)(param_1 + 0x98) & 1;
        goto LAB_010b1171;
      case 2:
      case 6:
        uVar4 = *(uint *)(param_1 + 0x98) & 4;
LAB_010b1266:
        if (uVar4 != 0) {
          *(undefined4 *)(param_1 + 0x150) = 10;
        }
        goto switchD_010b0df5_default;
      default:
        if (*(int *)(param_1 + 0xac) != *(int *)(param_1 + 0xcc)) {
          *(undefined4 *)(param_1 + 0x150) = 3;
          goto switchD_010b0df5_default;
        }
        bVar5 = *(int *)(param_1 + 0x4c) != *(int *)(param_1 + 0xcc);
      }
      break;
    case 3:
      bVar5 = *(int *)(param_1 + 0x4c) != *(int *)(param_1 + 0xcc);
      break;
    case 4:
      goto switchD_010b0f2c_caseD_3;
    default:
      goto switchD_010b0df5_default;
    case 8:
      if (*(int *)(param_1 + 0xb4) != *(int *)(param_1 + 0xd4)) {
        *(undefined4 *)(param_1 + 0x150) = 4;
        goto switchD_010b0df5_default;
      }
      goto switchD_010b0f2c_caseD_3;
    case 0xb:
switchD_010b0f2c_caseD_9:
      *(double *)(param_1 + 0x148) = *(double *)(param_1 + 0x148) * _DAT_011e2ae0;
      *(uint *)(param_1 + 0x150) =
           (-(uint)(*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 200)) & 0xfffffffc) + 5;
      goto switchD_010b0df5_default;
    case 0xc:
switchD_010b0f2c_caseD_a:
      *(double *)(param_1 + 0x148) = *(double *)(param_1 + 0x148) * _DAT_011e2ae0;
      *(uint *)(param_1 + 0x150) =
           (-(uint)(*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xd0)) & 0xfffffffc) + 6;
      goto switchD_010b0df5_default;
    }
    if (bVar5) {
      *(undefined4 *)(param_1 + 0x150) = 7;
    }
    break;
  case 2:
  case 7:
    switch(*(undefined4 *)(param_1 + 0x150)) {
    case 0:
    case 3:
    case 4:
    case 7:
    case 8:
      dVar2 = local_10 + *(double *)(param_1 + 0x140);
      *(double *)(param_1 + 0x140) = dVar2;
      if (dVar2 <= _DAT_011e2ae0) goto switchD_010b0df5_default;
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x144) = 0x3ff00000;
      switch(*(undefined4 *)(param_1 + 0x150)) {
      case 3:
      case 7:
        uVar4 = FUN_010b1420(param_1,10);
        goto LAB_010b1266;
      case 4:
      case 8:
switchD_010b1255_caseD_4:
        iVar3 = FUN_010b1420(param_1,0xc);
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + 0x150) = 0xc;
        }
        goto switchD_010b0df5_default;
      default:
        iVar3 = FUN_010b1420(param_1,2);
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + 0x150) = 2;
          goto switchD_010b0df5_default;
        }
        iVar3 = FUN_010b1420(param_1,6);
      }
      goto joined_r0x010b1212;
    case 1:
      break;
    case 2:
      iVar3 = FUN_010b1420(param_1,6);
joined_r0x010b1212:
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x150) = 6;
      }
      goto switchD_010b0df5_default;
    case 5:
      iVar3 = FUN_010b1420(param_1,1);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x150) = 1;
        goto switchD_010b0df5_default;
      }
      break;
    default:
      goto switchD_010b0df5_default;
    case 9:
      goto switchD_010b11b4_caseD_9;
    case 0xb:
      goto switchD_010b11b4_caseD_b;
    }
    goto switchD_010b11b4_caseD_1;
  case 3:
  case 5:
    switch(*(undefined4 *)(param_1 + 0x150)) {
    case 0:
    case 1:
    case 2:
    case 5:
    case 6:
      dVar2 = local_10 + *(double *)(param_1 + 0x148);
      *(double *)(param_1 + 0x148) = dVar2;
      if (dVar2 <= _DAT_011e2ae0) goto switchD_010b0df5_default;
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x14c) = 0x3ff00000;
      switch(*(undefined4 *)(param_1 + 0x150)) {
      case 1:
      case 5:
        goto switchD_010b1160_caseD_4;
      case 2:
      case 6:
        goto switchD_010b1255_caseD_4;
      default:
        iVar3 = FUN_010b1420(param_1,4);
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + 0x150) = 4;
          goto switchD_010b0df5_default;
        }
      }
    case 4:
      iVar3 = FUN_010b1420(param_1,8);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x150) = 8;
      }
      goto switchD_010b0df5_default;
    case 3:
      break;
    case 7:
      iVar3 = FUN_010b1420(param_1,3);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x150) = 3;
        goto switchD_010b0df5_default;
      }
      break;
    default:
      goto switchD_010b0df5_default;
    case 9:
      goto switchD_010b0f2c_caseD_9;
    case 10:
      goto switchD_010b0f2c_caseD_a;
    }
    goto switchD_010b0f2c_caseD_3;
  default:
    break;
  }
switchD_010b0df5_default:
  if (iVar1 != *(int *)(param_1 + 0x150)) {
    *(undefined4 *)(param_1 + 400) = 0;
  }
  return;
switchD_010b0f2c_caseD_3:
  *(double *)(param_1 + 0x148) = *(double *)(param_1 + 0x148) * _DAT_011e2ae0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  goto switchD_010b0df5_default;
}


