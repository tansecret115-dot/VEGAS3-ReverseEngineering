/* Module: vegas30.exe
   Function: FUN_005a69e0
   Address: 005a69e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a69e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 code *param_5,code *param_6,code *param_7,undefined4 param_8,uint param_9,
                 int param_10)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined8 uStack_104;
  int iStack_fc;
  uint uStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  uint uStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  code *pcStack_dc;
  code *pcStack_d8;
  code *pcStack_d4;
  tSFXSPLINEPOINT atStack_d0 [8];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  CSfXSpline aCStack_a8 [24];
  tSFXSPLINEPOINT atStack_90 [8];
  double dStack_88;
  double dStack_80;
  double dStack_78;
  undefined4 auStack_68 [25];
  
  puVar6 = auStack_68;
  for (iVar3 = 0x17; puVar6 = puVar6 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
  }
  iVar3 = (*param_5)(param_8);
  iVar5 = 0;
  if (0 < iVar3) {
    while( true ) {
      (*param_6)(param_8,iVar5,&uStack_104,0);
      if (param_10 < uStack_104._4_4_) break;
      if (((param_10 <= uStack_104._4_4_) && (param_9 < (uint)uStack_104)) ||
         (iVar5 = iVar5 + 1, iVar3 <= iVar5)) break;
    }
    if (0 < iVar5) {
      iStack_fc = (*param_6)(param_8,iVar5 + -1,&uStack_f8,0);
      goto LAB_005a6a58;
    }
  }
  iStack_fc = 0;
LAB_005a6a58:
  if (iVar5 < iVar3) {
    iVar3 = (*param_6)(param_8,iVar5,&uStack_e8,0);
  }
  else {
    iVar3 = 0;
  }
  uStack_104 = 0.0;
  if ((iStack_fc != 0) && (iVar3 != 0)) {
    iStack_f0 = uStack_e8 - uStack_f8;
    iStack_ec = (iStack_e4 - iStack_f4) - (uint)(uStack_e8 < uStack_f8);
    if (iStack_f0 == 0 && iStack_ec == 0) {
      uStack_104 = 0.0;
    }
    else {
      uStack_104 = (double)CONCAT44((param_10 - iStack_f4) - (uint)(param_9 < uStack_f8),
                                    param_9 - uStack_f8);
      uStack_104 = (double)(longlong)uStack_104 / (double)CONCAT44(iStack_ec,iStack_f0);
    }
    if (param_7 != (code *)0x0) {
      fVar8 = (float10)(*param_7)(param_8,((int)(iVar5 - 1U) < 1) - 1 & iVar5 - 1U,(uint)uStack_104,
                                  uStack_104._4_4_);
      uStack_104 = (double)fVar8;
    }
  }
  FUN_005a6630(auStack_68,iStack_fc,iVar3,(uint)uStack_104,uStack_104._4_4_);
  CSfXSpline::CSfXSpline(aCStack_a8);
  if ((DAT_0065ad48 & 1) == 0) {
    DAT_0065ad48 = DAT_0065ad48 | 1;
    DAT_0065ad44 = 4;
  }
  pcStack_dc = param_5;
  pcStack_d8 = param_6;
  uStack_e0 = param_8;
  pcStack_d4 = param_7;
  CSfXSpline::Init(aCStack_a8,FUN_005a6940,FUN_005a6950,FUN_005a69b0,&uStack_e0,DAT_0065ad44);
  if (((param_2 == (undefined4 *)0x0) && (param_3 == (undefined4 *)0x0)) &&
     (param_4 == (undefined4 *)0x0)) {
    CSfXSpline::Evaluate
              (aCStack_a8,(double)CONCAT44(param_10,param_9),atStack_90,(tSFXSPLINEPOINT *)0x0);
  }
  else {
    CSfXSpline::Evaluate(aCStack_a8,(double)CONCAT44(param_10,param_9),atStack_90,atStack_d0);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = uStack_c8;
      param_2[1] = uStack_c4;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = uStack_c0;
      param_3[1] = uStack_bc;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uStack_b8;
      param_4[1] = uStack_b4;
    }
  }
  puVar6 = auStack_68;
  puVar7 = param_1;
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar4 = 0;
  pfVar2 = (float *)(param_1 + 2);
  do {
    if (uVar4 == DAT_0065ad44) {
      pfVar2[-2] = (float)dStack_88;
      pfVar2[-1] = (float)dStack_80;
      fVar1 = (float)dStack_78;
    }
    else {
      pfVar2[-2] = ((float)dStack_88 - (float)param_1[DAT_0065ad44 * 4]) + pfVar2[-2];
      pfVar2[-1] = ((float)dStack_80 - (float)param_1[DAT_0065ad44 * 4 + 1]) + pfVar2[-1];
      fVar1 = ((float)dStack_78 - (float)param_1[DAT_0065ad44 * 4 + 2]) + *pfVar2;
    }
    *pfVar2 = fVar1;
    uVar4 = uVar4 + 1;
    pfVar2 = pfVar2 + 4;
  } while (uVar4 < 5);
  return;
}


