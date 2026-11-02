/* Module: vegas30.exe
   Function: FUN_00590260
   Address: 00590260
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00590260(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,int param_9,
                 int param_10)

{
  double dVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  
  uVar3 = FUN_005b98b0(DAT_0064b138);
  bVar9 = uVar3 != 0;
  if ((bVar9) &&
     ((double)CONCAT44(param_7,param_6) != (double)CONCAT44(_DAT_0065ab4c,_DAT_0065ab48))) {
    _DAT_0065ab48 = param_6;
    _DAT_0065ab4c = param_7;
    FUN_00590500(param_6,param_7,&DAT_0065a090);
    puVar12 = &DAT_0065a090;
    puVar8 = &DAT_0065a170;
    for (iVar7 = 0x38; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  dVar1 = _DAT_006106d0 / (double)CONCAT44(param_7,param_6);
  puVar12 = &DAT_0065a110;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  puVar12 = &DAT_0065a1f0;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  lVar10 = ftol();
  if ((bVar9) && (_DAT_006106d0 < dVar1)) {
    iVar4 = param_1 + param_8 * param_9 * -4;
    puVar12 = &DAT_0065a090;
    iVar7 = param_8;
    iVar5 = ftol(param_8,&DAT_0065a090);
    _SfIIR_ProcessFloat_20(iVar4,iVar4,iVar5 + param_9 + param_10,iVar7,puVar12);
  }
  if (1 < uVar3) {
    iVar7 = ftol();
    if ((double)CONCAT44(param_7,param_6) - (double)iVar7 != _DAT_00610fd8) {
      FUN_00590680(param_1,param_2,param_3,param_9,param_10,param_8,dVar1,
                   (double)(extraout_ST0 - (float10)lVar10));
      bVar2 = true;
      goto LAB_005903d9;
    }
  }
  bVar2 = false;
  FUN_00590570(param_1,param_2,param_3,param_9,param_10,param_8,dVar1,
               (double)(extraout_ST0 - (float10)lVar10));
LAB_005903d9:
  if ((bVar9) && (dVar1 < _DAT_006106d0)) {
    if (1 < param_9) {
      uVar6 = ftol();
      FUN_0060ac30();
      if (&stack0x00000000 != &DAT_00000030) {
        lVar11 = ftol();
        iVar7 = (int)lVar10 - (int)lVar11;
        if (bVar2) {
          FUN_00590680(param_1 + iVar7 * param_8 * -4,&stack0xffffffd0,uVar6,1,3,param_8,dVar1,
                       (double)(extraout_ST0_00 - (float10)lVar11));
        }
        else {
          FUN_00590570(param_1 + iVar7 * param_8 * -4,&stack0xffffffd0,uVar6,1,2,param_8,dVar1,
                       (double)(extraout_ST0_00 - (float10)lVar11));
        }
        _SfIIR_ProcessFloat_20(&stack0xffffffd0,&stack0xffffffd0,uVar6,param_8,&DAT_0065a090);
      }
    }
    _SfIIR_ProcessFloat_20(param_2,param_2,param_3,param_8,&DAT_0065a090);
  }
  return;
}


