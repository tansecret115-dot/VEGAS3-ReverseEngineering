/* Module: oggplug.dll
   Function: FUN_0043a0e0
   Address: 0043a0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0043a0e0(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  double dVar4;
  float local_214;
  float local_210;
  float local_208 [129];
  
  iVar1 = *param_3;
  local_214 = 0.0;
  local_210 = 0.0;
  if (0 < param_2) {
    pfVar2 = local_208;
    iVar3 = param_2;
    do {
      *pfVar2 = ABS(*(float *)((param_1 - (int)local_208) + (int)pfVar2));
      pfVar2 = pfVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (0 < param_2) {
      pfVar2 = local_208;
      iVar3 = param_2;
      do {
        if (local_214 < *pfVar2) {
          local_214 = *pfVar2;
        }
        pfVar2 = pfVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (0 < param_2) {
        pfVar2 = local_208;
        iVar3 = param_2;
        do {
          dVar4 = floor((double)(*pfVar2 + _DAT_0044d71c));
          *pfVar2 = (float)dVar4;
          pfVar2 = pfVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (0 < param_2) {
          pfVar2 = local_208;
          do {
            local_210 = local_210 + *pfVar2;
            pfVar2 = pfVar2 + 1;
            param_2 = param_2 + -1;
          } while (param_2 != 0);
        }
      }
    }
  }
  iVar3 = 0;
  if (0 < param_4 + -1) {
    pfVar2 = (float *)(iVar1 + 0x514);
    do {
      if (((param_5 < (int)pfVar2[0xc0]) && (local_210 <= *pfVar2)) && (local_214 <= pfVar2[0x40]))
      {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      pfVar2 = pfVar2 + 1;
    } while (iVar3 < param_4 + -1);
  }
  return iVar3;
}


