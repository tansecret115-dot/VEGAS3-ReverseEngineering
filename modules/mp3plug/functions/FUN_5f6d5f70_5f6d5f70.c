/* Module: mp3plug.dll
   Function: FUN_5f6d5f70
   Address: 5f6d5f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d5f70(float *param_1,float *param_2,float *param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((DAT_5f7529a4 == 0) || ((((uint)param_3 | (uint)param_2 | (uint)param_1) & 0xf) != 0)) {
    if ((param_4 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      fVar1 = *param_2;
      if (fVar1 <= *param_1) {
        fVar1 = *param_1;
      }
      iVar3 = 1;
      *param_3 = fVar1;
    }
    for (; iVar3 < (int)param_4; iVar3 = iVar3 + 2) {
      fVar1 = param_2[iVar3];
      if (fVar1 <= param_1[iVar3]) {
        fVar1 = param_1[iVar3];
      }
      fVar2 = param_2[iVar3 + 1];
      if (fVar2 <= param_1[iVar3 + 1]) {
        fVar2 = param_1[iVar3 + 1];
      }
      param_3[iVar3 + 1] = fVar2;
      param_3[iVar3] = fVar1;
    }
  }
  else {
    iVar3 = 0;
    if (0 < (int)(param_4 & 0xfffffff8)) {
      iVar3 = 0;
      do {
        auVar4 = maxps(*(undefined1 (*) [16])(param_1 + iVar3),
                       *(undefined1 (*) [16])(param_2 + iVar3));
        auVar5 = maxps(*(undefined1 (*) [16])(param_1 + iVar3 + 4),
                       *(undefined1 (*) [16])(param_2 + iVar3 + 4));
        *(undefined1 (*) [16])(param_3 + iVar3) = auVar4;
        *(undefined1 (*) [16])(param_3 + iVar3 + 4) = auVar5;
        iVar3 = iVar3 + 8;
      } while (iVar3 < (int)(param_4 & 0xfffffff8));
    }
    if (iVar3 + 4 <= (int)param_4) {
      auVar4 = maxps(*(undefined1 (*) [16])(param_1 + iVar3),*(undefined1 (*) [16])(param_2 + iVar3)
                    );
      *(undefined1 (*) [16])(param_3 + iVar3) = auVar4;
      iVar3 = iVar3 + 4;
    }
    for (; iVar3 < (int)param_4; iVar3 = iVar3 + 1) {
      fVar1 = param_2[iVar3];
      if (fVar1 <= param_1[iVar3]) {
        fVar1 = param_1[iVar3];
      }
      param_3[iVar3] = fVar1;
    }
  }
  return;
}


