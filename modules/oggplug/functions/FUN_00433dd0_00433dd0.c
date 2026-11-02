/* Module: oggplug.dll
   Function: FUN_00433dd0
   Address: 00433dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_00433dd0(int param_1,int param_2,float param_3,undefined4 param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iStack0000001c;
  
  uVar2 = ftol();
  uVar2 = uVar2 & ((int)uVar2 < 1) - 1;
  if (9 < (int)uVar2) {
    uVar2 = 10;
  }
  iVar1 = *(int *)(param_2 + uVar2 * 4);
  iVar3 = ftol();
  iStack0000001c = iVar3;
  iVar4 = ftol();
  iVar5 = ftol();
  if (iVar5 < iVar3) {
    pfVar7 = (float *)(iVar1 + 8 + iVar5 * 4);
    pfVar6 = (float *)(param_1 + iVar4 * 4);
    do {
      if ((0 < iVar4) && (*pfVar6 < param_3 + *pfVar7)) {
        *pfVar6 = param_3 + *pfVar7;
      }
      iVar4 = iVar4 + param_6;
      pfVar6 = pfVar6 + param_6;
      if (param_5 <= iVar4) {
        return;
      }
      iVar5 = iVar5 + 1;
      pfVar7 = pfVar7 + 1;
    } while (iVar5 < iStack0000001c);
  }
  return;
}


