/* Module: 28_83260.dll
   Function: FUN_10005740
   Address: 10005740
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_10005740(void *this,float *param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 1;
  *(float *)((int)this + 0xacc) = *param_1;
  pfVar3 = (float *)((int)this + 0xad0);
  do {
    param_1 = param_1 + 1;
    fVar1 = *param_1;
    pfVar2 = pfVar3;
    iVar5 = iVar4;
    if (0 < iVar4) {
      do {
        *pfVar2 = pfVar2[-1];
        iVar5 = iVar5 + -1;
        fVar1 = fVar1 - pfVar2[0x43] * pfVar2[-1];
        pfVar2 = pfVar2 + -1;
      } while (iVar5 != 0);
    }
    *(float *)((int)this + 0xacc) = fVar1;
    iVar4 = iVar4 + 1;
    pfVar3 = pfVar3 + 1;
  } while (iVar4 < 5);
  iVar4 = 5;
  pfVar3 = (float *)((int)this + 0xa28);
  pfVar2 = (float *)(param_2 + 0x10);
  do {
    fVar1 = *pfVar3;
    iVar4 = iVar4 + -1;
    *pfVar3 = pfVar3[0x29] + fVar1;
    *pfVar2 = pfVar3[0x29] + fVar1;
    pfVar3 = pfVar3 + 1;
    pfVar2 = pfVar2 + -1;
  } while (iVar4 != 0);
  return;
}


