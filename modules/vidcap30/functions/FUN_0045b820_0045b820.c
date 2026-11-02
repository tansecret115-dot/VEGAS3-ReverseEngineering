/* Module: vidcap30.exe
   Function: FUN_0045b820
   Address: 0045b820
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045b820(double param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined8 uVar5;
  undefined4 local_5c [10];
  CHAR local_34 [52];
  
  puVar2 = &DAT_005bb810;
  puVar3 = local_5c;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (_DAT_00589f10 == param_1) {
    fVar4 = (float10)FUN_0042ed90(DAT_005bb838);
    param_1 = (double)fVar4;
  }
  FUN_0045ada0(local_5c);
  local_5c[2] = param_1._0_4_;
  local_5c[3] = param_1._4_4_;
  uVar5 = _SfTextToNanoTimeToken_16(param_2,local_5c,0,0);
  _SfNanoTimeToText_20(local_34,local_5c,uVar5,0);
  lstrcpynA(param_2,local_34,param_3);
  param_2[param_3 + -1] = '\0';
  lstrlenA(param_2);
  return;
}


