/* Module: vidcap30.exe
   Function: FUN_0045bb80
   Address: 0045bb80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045bb80(longlong param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 local_12c [2];
  double local_124;
  undefined1 local_104 [260];
  
  _SfDoubleToText_20(local_104,(double)param_1 * _DAT_0058a5f8,3,0);
  puVar2 = &DAT_005bb810;
  puVar3 = local_12c;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_12c[0] = 2;
  fVar4 = (float10)FUN_0042ed90(DAT_005bb838);
  local_124 = (double)fVar4;
  _SfTextToNanoTimeToken_16(local_104,local_12c,0,0);
  ftol();
  return;
}


