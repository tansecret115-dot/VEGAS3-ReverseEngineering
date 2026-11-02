/* Module: mp3plug.dll
   Function: FUN_5f6d8280
   Address: 5f6d8280
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d8280(float *param_1,float *param_2,uint param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = (param_3 & 1) != 0;
  if (bVar4) {
    *param_2 = SQRT(*param_1);
  }
  uVar2 = (uint)bVar4;
  if ((int)uVar2 < (int)param_3) {
    iVar3 = (param_3 - uVar2 & 0xfffffffc) + uVar2;
    for (; (int)uVar2 < iVar3; uVar2 = uVar2 + 4) {
      fVar1 = param_1[uVar2];
      param_2[uVar2 + 1] = SQRT(param_1[uVar2 + 1]);
      param_2[uVar2] = SQRT(fVar1);
      fVar1 = param_1[uVar2 + 3];
      param_2[uVar2 + 2] = SQRT(param_1[uVar2 + 2]);
      param_2[uVar2 + 3] = SQRT(fVar1);
    }
    if ((int)uVar2 < (int)param_3) {
      while( true ) {
        fVar1 = param_1[uVar2];
        if ((int)param_3 <= (int)(uVar2 + 2)) break;
        param_2[uVar2 + 1] = SQRT(param_1[uVar2 + 1]);
        param_2[uVar2] = SQRT(fVar1);
        uVar2 = uVar2 + 2;
      }
      param_2[uVar2 + 1] = SQRT(param_1[uVar2 + 1]);
      param_2[uVar2] = SQRT(fVar1);
    }
  }
  return;
}


