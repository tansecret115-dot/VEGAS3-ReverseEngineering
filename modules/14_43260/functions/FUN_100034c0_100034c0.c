/* Module: 14_43260.dll
   Function: FUN_100034c0
   Address: 100034c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100034c0(void *this,float *param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  
  if (param_3 == 1) {
    DAT_10015ef4 = 0;
    DAT_10015ef0 = 0;
    DAT_10015eec = 0;
    DAT_10015ee8 = 0;
    DAT_10015f04 = 0;
    DAT_10015f00 = 0;
    DAT_10015efc = 0;
    DAT_10015ef8 = 0;
  }
  *(undefined4 *)((int)this + 0xab6) = DAT_10015ee8;
  *(undefined4 *)((int)this + 0xaba) = DAT_10015eec;
  *(undefined4 *)((int)this + 0xabe) = DAT_10015ef0;
  *(undefined4 *)((int)this + 0xac2) = DAT_10015ef4;
  *(undefined4 *)((int)this + 0xe4a) = DAT_10015ef8;
  *(undefined4 *)((int)this + 0xe4e) = DAT_10015efc;
  *(undefined4 *)((int)this + 0xe52) = DAT_10015f00;
  *(undefined4 *)((int)this + 0xe56) = DAT_10015f04;
  pfVar9 = (float *)((int)this + 0xac6);
  pfVar7 = param_1;
  pfVar6 = pfVar9;
  for (iVar8 = param_2; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar6 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar6 = pfVar6 + 1;
  }
  pfVar6 = (float *)((int)this + 0xe5a);
  pfVar7 = pfVar6;
  if (0 < param_2) {
    do {
      pfVar1 = pfVar9 + -3;
      fVar5 = *pfVar9;
      pfVar2 = pfVar9 + -2;
      pfVar3 = pfVar9 + -4;
      pfVar4 = pfVar9 + -1;
      pfVar9 = pfVar9 + 1;
      pfVar6 = pfVar7 + 1;
      param_2 = param_2 + -1;
      fVar5 = ((((*pfVar4 * _DAT_1001261c +
                 *pfVar3 * _DAT_10012628 +
                 *pfVar2 * _DAT_10012620 + *pfVar1 * _DAT_10012624 + _DAT_10012618 * fVar5) -
                pfVar7[-1] * _DAT_10012608) - pfVar7[-2] * _DAT_1001260c) -
              pfVar7[-3] * _DAT_10012610) - pfVar7[-4] * _DAT_10012614;
      *pfVar7 = fVar5;
      *param_1 = fVar5;
      pfVar7 = pfVar6;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  iVar8 = 0;
  do {
    pfVar7 = pfVar9 + -1;
    pfVar9 = pfVar9 + -1;
    pfVar6 = pfVar6 + -1;
    *(float *)((int)&DAT_10015ef4 + iVar8) = *pfVar7;
    iVar10 = iVar8 + -4;
    *(float *)((int)&DAT_10015f04 + iVar8) = *pfVar6;
    iVar8 = iVar10;
  } while (-0xd < iVar10);
  return;
}


