/* Module: ednt3260.dll
   Function: FUN_630fa550
   Address: 630fa550
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_630fa550(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_8;
  
  pdVar8 = (double *)(param_1 + 0x1a56);
  pdVar9 = (double *)(param_1 + 0x8b4);
  local_8 = 6;
  do {
    switch(*(undefined2 *)(param_1 + 0x630a)) {
    case 0:
      local_30 = pdVar9[-1] * _DAT_63102bf0;
      local_28 = *pdVar9 * _DAT_63102bf0;
      local_20 = _DAT_63102bf8;
      break;
    case 1:
      local_20 = pdVar9[-1] * _DAT_63102bf0;
      local_30 = local_20 * _DAT_63102c00;
      local_28 = local_30;
      break;
    case 2:
      local_38 = *pdVar9 * _DAT_63102bf0;
      local_30 = pdVar9[-1] * _DAT_63102bf0;
      local_20 = (local_38 + local_30) * _DAT_63102c00;
      local_28 = local_38;
      local_18 = local_30;
      break;
    case 3:
      dVar1 = pdVar9[1] * _DAT_63102bf0;
      dVar3 = *pdVar9 * _DAT_63102bf0;
      dVar2 = pdVar9[-1] * _DAT_63102bf0;
      local_30 = dVar2 - dVar3 * _DAT_63102c08;
      local_28 = dVar1 - dVar3 * _DAT_63102c08;
      local_20 = dVar3 - (dVar1 + dVar2) * _DAT_63102c08;
      local_18 = dVar3 + dVar2;
      local_38 = dVar1 + dVar3;
      break;
    case 4:
      dVar1 = pdVar9[1] * _DAT_63102bf0;
      dVar2 = pdVar9[-1] * _DAT_63102bf0;
      local_38 = dVar1 + *pdVar9 * _DAT_63102bf0;
      local_18 = dVar1 + dVar2;
      local_30 = dVar2 - dVar1 * _DAT_63102c08;
      local_28 = *pdVar9 * _DAT_63102bf0 - dVar1 * _DAT_63102c08;
      local_20 = (dVar2 + local_38) * _DAT_63102c00;
      break;
    case 5:
      dVar1 = *pdVar9 * _DAT_63102bf0;
      dVar5 = pdVar9[-1] * _DAT_63102bf0;
      dVar2 = pdVar9[2] * _DAT_63102bf0 + dVar1;
      dVar3 = pdVar9[2] * _DAT_63102bf0 + pdVar9[1] * _DAT_63102bf0;
      dVar4 = dVar2 * _DAT_63102c08;
      local_30 = dVar5 - dVar4;
      local_28 = pdVar9[1] * _DAT_63102bf0 - dVar4;
      local_20 = dVar1 - (dVar5 + dVar3) * _DAT_63102c08;
      local_18 = dVar5 + dVar2;
      local_38 = dVar1 + dVar3;
      break;
    case 6:
      dVar2 = *pdVar9 * _DAT_63102bf0;
      dVar3 = pdVar9[-1] * _DAT_63102bf0;
      dVar1 = pdVar9[2] * _DAT_63102bf0 + pdVar9[1] * _DAT_63102bf0;
      local_30 = dVar3 - dVar1 * _DAT_63102c08;
      local_28 = dVar2 - dVar1 * _DAT_63102c08;
      local_20 = dVar1 * _DAT_63102c10 - (dVar2 + dVar3) * _DAT_63102c08;
      local_18 = dVar3 + dVar1;
      local_38 = dVar2 + dVar1;
      break;
    case 7:
      dVar2 = *pdVar9 * _DAT_63102bf0;
      dVar1 = pdVar9[3] * _DAT_63102bf0 + pdVar9[2] * _DAT_63102bf0;
      dVar3 = pdVar9[1] * _DAT_63102bf0;
      dVar4 = pdVar9[-1] * _DAT_63102bf0;
      dVar5 = (dVar2 + dVar1) * _DAT_63102c08;
      local_30 = dVar4 - dVar5;
      local_28 = dVar3 - dVar5;
      local_18 = dVar4 + dVar2 + dVar1;
      local_20 = dVar2 - (dVar1 * _DAT_63102c18 + (dVar3 + dVar4) * _DAT_63102c08);
      local_38 = dVar3 + dVar2 + dVar1;
      break;
    default:
      FUN_630f92d0();
    }
    iVar6 = (int)*(short *)(param_1 + 0x6346);
    dVar1 = _DAT_63102bf8;
    if (0 < iVar6) {
      pdVar7 = pdVar9 + -1;
      do {
        if (dVar1 < *pdVar7) {
          dVar1 = *pdVar7;
        }
        pdVar7 = pdVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    dVar1 = dVar1 * _DAT_63102bf0;
    if (*(short *)(param_1 + 0x630a) == 0) {
      *(undefined4 *)pdVar8 = (undefined4)local_30;
      *(undefined4 *)((int)pdVar8 + 4) = local_30._4_4_;
      *(undefined4 *)(pdVar8 + 6) = (undefined4)local_28;
      *(undefined4 *)((int)pdVar8 + 0x34) = local_28._4_4_;
    }
    else {
      *pdVar8 = local_30;
      if (local_30 < local_28) {
        *(undefined4 *)pdVar8 = (undefined4)local_28;
        *(undefined4 *)((int)pdVar8 + 4) = local_28._4_4_;
      }
      if (*pdVar8 < local_20) {
        *(undefined4 *)pdVar8 = (undefined4)local_20;
        *(undefined4 *)((int)pdVar8 + 4) = local_20._4_4_;
      }
      if (*pdVar8 < dVar1) {
        *pdVar8 = dVar1;
      }
      if ((*(short *)(param_1 + 0x6308) == 7) && (1 < *(short *)(param_1 + 0x630a))) {
        if (*pdVar8 < local_18) {
          *(undefined4 *)pdVar8 = (undefined4)local_18;
          *(undefined4 *)((int)pdVar8 + 4) = local_18._4_4_;
        }
        if (*pdVar8 < local_38) {
          *(undefined4 *)pdVar8 = (undefined4)local_38;
          *(undefined4 *)((int)pdVar8 + 4) = local_38._4_4_;
        }
      }
    }
    *pdVar8 = *(double *)(&DAT_631018e8 + *(short *)(param_1 + 0x6314) * 8) * *pdVar8;
    if (*(short *)(param_1 + 0x630a) == 0) {
      pdVar8[6] = *(double *)(&DAT_631018e8 + *(short *)(param_1 + 0x6324) * 8) * pdVar8[6];
    }
    pdVar9 = pdVar9 + 6;
    pdVar8 = pdVar8 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}


