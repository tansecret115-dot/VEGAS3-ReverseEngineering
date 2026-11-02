/* Module: vidcap30.exe
   Function: FUN_0045aec0
   Address: 0045aec0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045aec0(undefined4 param_1,undefined4 param_2,double param_3,LPSTR param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;
  longlong lVar5;
  undefined4 local_5c [10];
  CHAR local_34 [52];
  
  puVar2 = &DAT_005bb810;
  puVar3 = local_5c;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (_DAT_00589f10 == param_3) {
    fVar4 = (float10)FUN_0042ed90(DAT_005bb838);
    param_3 = (double)fVar4;
  }
  local_5c[2] = param_3._0_4_;
  local_5c[3] = param_3._4_4_;
  FUN_0045ada0(local_5c);
  lVar5 = ftol();
  if (((int)((ulonglong)lVar5 >> 0x20) < 1) && (lVar5 < 0)) {
    lVar5 = 0;
  }
  _SfNanoTimeToText_20(local_34,local_5c,lVar5,0);
  lstrcpynA(param_4,local_34,param_5);
  param_4[param_5 + -1] = '\0';
  lstrlenA(param_4);
  return;
}


