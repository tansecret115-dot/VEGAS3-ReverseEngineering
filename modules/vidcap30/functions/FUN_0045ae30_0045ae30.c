/* Module: vidcap30.exe
   Function: FUN_0045ae30
   Address: 0045ae30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ae30(undefined4 param_1,double param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined8 uVar5;
  undefined4 local_28 [10];
  
  puVar2 = &DAT_005bb810;
  puVar3 = local_28;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (_DAT_00589f10 == param_2) {
    fVar4 = (float10)FUN_0042ed90(DAT_005bb838);
    param_2 = (double)fVar4;
  }
  local_28[2] = param_2._0_4_;
  local_28[3] = param_2._4_4_;
  FUN_0045ada0(local_28);
  uVar5 = _SfTextToNanoTimeToken_16(param_1,local_28,0,0);
  ftol(uVar5);
  return;
}


