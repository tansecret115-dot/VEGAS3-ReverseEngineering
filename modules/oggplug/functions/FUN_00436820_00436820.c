/* Module: oggplug.dll
   Function: FUN_00436820
   Address: 00436820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_00436820(int *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_3 / param_4;
  iVar5 = 0;
  while( true ) {
    if ((param_6 + param_3) / param_4 <= iVar1) {
      return 0;
    }
    iVar2 = FUN_004364f0((int)param_1,param_5);
    if (iVar2 == -1) break;
    iVar4 = 0;
    pfVar3 = (float *)(param_1[3] + *param_1 * iVar2 * 4);
    if (0 < *param_1) {
      do {
        iVar5 = iVar5 + 1;
        iVar2 = *(int *)(param_2 + -4 + iVar5 * 4);
        *(float *)(iVar2 + iVar1 * 4) = *(float *)(iVar2 + iVar1 * 4) + *pfVar3;
        if (iVar5 == param_4) {
          iVar5 = 0;
          iVar1 = iVar1 + 1;
        }
        iVar4 = iVar4 + 1;
        pfVar3 = pfVar3 + 1;
      } while (iVar4 < *param_1);
    }
  }
  return 0xffffffff;
}


