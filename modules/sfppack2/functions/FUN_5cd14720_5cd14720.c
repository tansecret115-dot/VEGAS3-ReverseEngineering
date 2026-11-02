/* Module: sfppack2.dll
   Function: FUN_5cd14720
   Address: 5cd14720
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd14720(HDC param_1)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  
  bVar1 = false;
  pfVar4 = (float *)(param_1[8].unused - param_1[6].unused);
  pfVar3 = (float *)(param_1[9].unused - param_1[7].unused);
  if (((float *)param_1[10].unused != pfVar4) || ((float *)param_1[0xb].unused != pfVar3)) {
    bVar1 = true;
  }
  if ((param_1->unused & 0x800U) != 0) {
    param_1[1].unused =
         ((uint)((int)pfVar4 < (int)pfVar3) ^ param_1[1].unused) & 1 ^ param_1[1].unused;
  }
  if ((param_1->unused & 0x80U) != 0) {
    if ((param_1[1].unused & 1) == 0) {
      pfVar2 = FUN_5cd14970(param_1,0x61a,(HWND)0x0,(float *)0x0);
      if ((int)pfVar3 < (int)pfVar2) {
        param_1[9].unused = (int)pfVar2 + param_1[7].unused;
        pfVar3 = pfVar2;
      }
    }
    else {
      pfVar2 = FUN_5cd14970(param_1,0x61a,(HWND)0x0,(float *)0x0);
      if ((int)pfVar4 < (int)pfVar2) {
        param_1[8].unused = param_1[6].unused + (int)pfVar2;
        pfVar4 = pfVar2;
      }
    }
  }
  param_1[10].unused = (int)pfVar4;
  param_1[0xb].unused = (int)pfVar3;
  if (bVar1) {
    FUN_5cd13340((int)param_1);
  }
  return;
}


