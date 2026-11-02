/* Module: pncrt.dll
   Function: FUN_78023480
   Address: 78023480
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_78023480(short *param_1,short *param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  
  sVar2 = *param_1;
  while (sVar2 == 0x3b) {
    param_1 = param_1 + 1;
    sVar2 = *param_1;
  }
  iVar4 = param_3 + -1;
  psVar3 = param_1;
  if (iVar4 != 0) {
    sVar2 = *param_1;
    while ((sVar2 != 0 && (sVar2 != 0x3b))) {
      if (sVar2 == 0x22) {
        psVar1 = psVar3 + 1;
        psVar3 = psVar3 + 1;
        sVar2 = *psVar1;
        while ((sVar2 != 0 && (sVar2 != 0x22))) {
          *param_2 = sVar2;
          param_2 = param_2 + 1;
          psVar3 = psVar3 + 1;
          iVar4 = iVar4 + -1;
          if (iVar4 == 0) goto LAB_78023501;
          sVar2 = *psVar3;
        }
        if (*psVar3 != 0) {
          psVar3 = psVar3 + 1;
        }
      }
      else {
        *param_2 = sVar2;
        param_2 = param_2 + 1;
        psVar3 = psVar3 + 1;
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) {
LAB_78023501:
          *param_2 = 0;
          return 0;
        }
      }
      sVar2 = *psVar3;
    }
    if (*psVar3 == 0x3b) {
      do {
        psVar3 = psVar3 + 1;
      } while (*psVar3 == 0x3b);
      *param_2 = 0;
      return -(uint)(param_1 != psVar3) & (uint)psVar3;
    }
  }
  *param_2 = 0;
  return -(uint)(param_1 != psVar3) & (uint)psVar3;
}


