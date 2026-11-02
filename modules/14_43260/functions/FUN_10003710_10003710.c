/* Module: 14_43260.dll
   Function: FUN_10003710
   Address: 10003710
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10003710(void *this,float *param_1,float *param_2,float *param_3,float *param_4,uint param_5)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  
  pfVar1 = (float *)((int)this + 0x1206);
  pfVar4 = param_3;
  pfVar5 = (float *)((int)this + 0x11de);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  pfVar4 = pfVar1;
  for (uVar3 = param_5 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pfVar4 = *param_1;
    param_1 = param_1 + 1;
    pfVar4 = pfVar4 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)pfVar4 = *(undefined1 *)param_1;
    param_1 = (float *)((int)param_1 + 1);
    pfVar4 = (float *)((int)pfVar4 + 1);
  }
  _DAT_10015f30 = *param_4;
  _DAT_10015f44 = param_4[1];
  _DAT_10015f24 = param_4[2];
  _DAT_10015f2c = param_4[3];
  _DAT_10015f54 = param_4[4];
  _DAT_10015f28 = param_4[5];
  _DAT_10015f48 = param_4[6];
  _DAT_10015f20 = param_4[7];
  _DAT_10015f34 = param_4[8];
  _DAT_10015f1c = param_4[9];
  pfVar4 = pfVar1 + param_5;
  for (; pfVar1 < pfVar4; pfVar1 = pfVar1 + 1) {
    *pfVar1 = *pfVar1 - (pfVar1[-1] * _DAT_10015f30 +
                        pfVar1[-6] * _DAT_10015f28 +
                        pfVar1[-4] * _DAT_10015f2c +
                        pfVar1[-5] * _DAT_10015f54 +
                        pfVar1[-2] * _DAT_10015f44 +
                        pfVar1[-7] * _DAT_10015f48 +
                        pfVar1[-3] * _DAT_10015f24 +
                        pfVar1[-8] * _DAT_10015f20 +
                        pfVar1[-9] * _DAT_10015f34 + pfVar1[-10] * _DAT_10015f1c);
  }
  pfVar4 = pfVar1 + -param_5;
  for (uVar3 = param_5 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_2 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    param_2 = param_2 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)param_2 = *(undefined1 *)pfVar4;
    pfVar4 = (float *)((int)pfVar4 + 1);
    param_2 = (float *)((int)param_2 + 1);
  }
  pfVar1 = pfVar1 + -10;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_3 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    param_3 = param_3 + 1;
  }
  return;
}


