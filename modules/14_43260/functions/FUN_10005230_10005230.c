/* Module: 14_43260.dll
   Function: FUN_10005230
   Address: 10005230
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_10005230(void *this,float param_1,char param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  
  if (param_2 == 't') {
    pfVar5 = *(float **)((int)this + 0x9ce);
    pfVar4 = *(float **)((int)this + 0x9d2);
  }
  else {
    pfVar5 = *(float **)((int)this + 0x9f6);
    pfVar4 = *(float **)((int)this + 0x9fa);
  }
  pfVar1 = pfVar4 + 10;
  fVar3 = param_1;
  for (; pfVar4 < pfVar1; pfVar4 = pfVar4 + 1) {
    fVar2 = *pfVar5 * fVar3;
    fVar3 = fVar3 * param_1;
    *pfVar4 = fVar2;
    pfVar5 = pfVar5 + 1;
  }
  return;
}


