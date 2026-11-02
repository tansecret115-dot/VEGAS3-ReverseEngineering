/* Module: mp3plug.dll
   Function: FUN_5f6fc930
   Address: 5f6fc930
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f6fc930(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *in_EAX;
  
  fVar3 = DAT_5f746ed8 * in_EAX[5];
  fVar4 = DAT_5f746eec * *in_EAX;
  fVar1 = in_EAX[1];
  fVar2 = in_EAX[1];
  in_EAX[1] = in_EAX[5] * DAT_5f746eec - *in_EAX * DAT_5f746ed8;
  *in_EAX = fVar4 + fVar3;
  fVar3 = DAT_5f746edc * in_EAX[4];
  fVar2 = fVar2 * DAT_5f746ee8;
  in_EAX[5] = fVar1 * DAT_5f746edc - in_EAX[4] * DAT_5f746ee8;
  in_EAX[4] = fVar2 + fVar3;
  fVar1 = in_EAX[3] * _DAT_5f746ee0;
  fVar2 = in_EAX[2] * _DAT_5f746ee4;
  in_EAX[3] = _DAT_5f746ee4 * in_EAX[3] - _DAT_5f746ee0 * in_EAX[2];
  in_EAX[2] = fVar2 + fVar1;
  FUN_5f70cf00(in_EAX);
  fVar3 = _DAT_5f747004 * *in_EAX;
  fVar4 = _DAT_5f746ff8 * in_EAX[1];
  fVar1 = in_EAX[5];
  fVar2 = in_EAX[5];
  in_EAX[5] = *in_EAX * _DAT_5f746ff8 - in_EAX[1] * _DAT_5f747004;
  *in_EAX = fVar4 + fVar3;
  fVar3 = _DAT_5f747000 * in_EAX[4];
  fVar4 = _DAT_5f747000 * in_EAX[2];
  fVar6 = _DAT_5f747000 * in_EAX[3];
  fVar5 = _DAT_5f746ffc * in_EAX[3];
  fVar7 = _DAT_5f746ffc * in_EAX[2];
  fVar2 = fVar2 * _DAT_5f746ffc;
  in_EAX[4] = in_EAX[4] * _DAT_5f746ffc + fVar1 * _DAT_5f747000;
  in_EAX[1] = fVar3 - fVar2;
  in_EAX[3] = fVar7 - fVar6;
  in_EAX[2] = fVar5 + fVar4;
  return;
}


