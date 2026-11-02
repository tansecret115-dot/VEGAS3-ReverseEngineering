/* Module: vidcap30.exe
   Function: FUN_004ba110
   Address: 004ba110
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_004ba110(undefined4 param_1,undefined4 param_2,int param_3,float param_4,byte *param_5)

{
  uint uVar1;
  uchar *_Source;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  double dVar10;
  uchar local_54 [12];
  undefined1 local_48 [32];
  undefined4 local_28 [10];
  
  iVar5 = 1;
  if (param_4 != 0.0) {
    iVar5 = FUN_004b9ac0();
  }
  local_54[0] = '\0';
  local_48[0] = 0;
  if ((iVar5 == 2) || (iVar5 == 0)) {
    if ((*param_5 & 2) == 0) {
      _Source = (uchar *)_SfGetString2_8(DAT_005c16d8,0x1125);
      _mbscpy(local_54,_Source);
    }
    else {
      FUN_004b9850(local_54,*(uint *)(param_5 + 4) & 0xff,1,0);
    }
  }
  if (*(int *)(*(int *)(param_3 + 4) + 4) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = ftol();
  }
  puVar6 = local_28;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_28[0] = 1;
  _SfNanoTimeToTextEx_20(local_48,local_28,(int)uVar8,CONCAT44(3,(int)((ulonglong)uVar8 >> 0x20)));
  if (iVar5 == 0) {
    fVar7 = (float10)_DAT_00589f10;
    uVar1 = *(uint *)(*(int *)(param_3 + 4) + 4);
    if (uVar1 != 0) {
      fVar7 = (float10)*(longlong *)(param_3 + 0x1c) / (float10)uVar1;
    }
    param_4 = 0.0;
    if (fVar7 != (float10)_DAT_00589f10) {
      param_4 = (float)(((float10)*(uint *)(param_5 + 0xc) / fVar7) * (float10)_DAT_00594aa0);
    }
    uVar2 = _SfGetString2_8(DAT_005c16d8,0x1135);
    SfMEditPrintF(param_1,uVar2);
    uVar2 = *(undefined4 *)(param_5 + 0xc);
    dVar10 = (double)param_4;
    uVar3 = _SfGetString2_8(DAT_005c16d8,0x112e);
    SfMEditPrintF(param_1,uVar3,uVar2,dVar10);
  }
  else if (iVar5 == 2) {
    uVar2 = _SfGetString2_8(DAT_005c16d8,0x1133);
    SfMEditPrintF(param_1,uVar2);
    puVar9 = local_48;
    dVar10 = (double)*(float *)(param_5 + 0x14);
    uVar2 = _SfGetString2_8(DAT_005c16d8,0x112c);
    SfMEditPrintF(param_1,uVar2,puVar9,dVar10);
  }
  else {
    uVar2 = _SfGetString2_8(DAT_005c16d8);
    SfMEditPrintF(param_1,uVar2);
  }
  uVar2 = _SfGetString2_8(DAT_005c16d8);
  SfMEditPrintF(param_1,uVar2);
  return 1;
}


