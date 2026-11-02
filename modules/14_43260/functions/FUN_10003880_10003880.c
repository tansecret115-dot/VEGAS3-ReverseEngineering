/* Module: 14_43260.dll
   Function: FUN_10003880
   Address: 10003880
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10003880(void *this,float *param_1,undefined4 *param_2,float *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float *pfVar5;
  
  puVar4 = (undefined4 *)((int)this + 0x11de);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  pfVar3 = (float *)((int)this + 0x1206);
  pfVar5 = pfVar3;
  for (uVar2 = param_4 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pfVar5 = 0.0;
    pfVar5 = pfVar5 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)pfVar5 = 0;
    pfVar5 = (float *)((int)pfVar5 + 1);
  }
  _DAT_10015f08 = *param_3;
  _DAT_10015f10 = param_3[1];
  _DAT_10015f50 = param_3[2];
  _DAT_10015f38 = param_3[3];
  _DAT_10015f14 = param_3[4];
  _DAT_10015f3c = param_3[5];
  _DAT_10015f18 = param_3[6];
  _DAT_10015f4c = param_3[7];
  _DAT_10015f40 = param_3[8];
  _DAT_10015f0c = param_3[9];
  pfVar5 = pfVar3 + param_4;
  for (; pfVar3 < pfVar5; pfVar3 = pfVar3 + 1) {
    *pfVar3 = *pfVar3 - (pfVar3[-5] * _DAT_10015f14 +
                        pfVar3[-10] * _DAT_10015f0c +
                        pfVar3[-9] * _DAT_10015f40 +
                        pfVar3[-4] * _DAT_10015f38 +
                        pfVar3[-7] * _DAT_10015f18 +
                        pfVar3[-6] * _DAT_10015f3c +
                        pfVar3[-3] * _DAT_10015f50 +
                        pfVar3[-2] * _DAT_10015f10 +
                        pfVar3[-1] * _DAT_10015f08 + pfVar3[-8] * _DAT_10015f4c);
  }
  pfVar3 = pfVar3 + -param_4;
  for (uVar2 = param_4 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_1 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    param_1 = param_1 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)param_1 = *(undefined1 *)pfVar3;
    pfVar3 = (float *)((int)pfVar3 + 1);
    param_1 = (float *)((int)param_1 + 1);
  }
  return;
}


