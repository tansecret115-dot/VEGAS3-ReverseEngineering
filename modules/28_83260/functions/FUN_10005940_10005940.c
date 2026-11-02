/* Module: 28_83260.dll
   Function: FUN_10005940
   Address: 10005940
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_10005940(void *this,int param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 *_Src;
  float *pfVar5;
  undefined4 *puVar6;
  float *_Dst;
  int iVar7;
  int iVar8;
  
  _Src = (undefined4 *)((int)this + 0x9b0);
  memmove((void *)((int)this + 0x9c4),_Src,0x28);
  puVar6 = (undefined4 *)(param_1 + 0x10);
  iVar7 = 5;
  do {
    uVar4 = *puVar6;
    puVar6 = puVar6 + -1;
    *_Src = uVar4;
    _Src = _Src + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  _Dst = (float *)((int)this + 0xa00);
  memmove(_Dst,(void *)((int)this + 0x9ec),0x28);
  iVar7 = 0x304;
  param_1 = 5;
  do {
    fVar2 = _Dst[-0x10];
    pfVar5 = _Dst + -0xf;
    iVar8 = 10;
    do {
      pfVar1 = (float *)((int)pfVar5 + iVar7);
      fVar3 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      iVar8 = iVar8 + -1;
      fVar2 = *pfVar1 * fVar3 + fVar2;
    } while (iVar8 != 0);
    iVar8 = 10;
    pfVar5 = _Dst;
    do {
      pfVar1 = (float *)((int)pfVar5 + (int)this + (0xd20 - (int)_Dst));
      fVar3 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      iVar8 = iVar8 + -1;
      fVar2 = fVar2 - *pfVar1 * fVar3;
    } while (iVar8 != 0);
    iVar7 = iVar7 + 4;
    _Dst[-1] = fVar2;
    *param_2 = fVar2;
    param_2 = param_2 + 1;
    _Dst = _Dst + -1;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return;
}


