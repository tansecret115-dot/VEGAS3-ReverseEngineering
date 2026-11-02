/* Module: oggplug.dll
   Function: FUN_004367b0
   Address: 004367b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_004367b0(int *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_4) {
    do {
      iVar1 = FUN_004364f0((int)param_1,param_3);
      if (iVar1 == -1) {
        return 0xffffffff;
      }
      puVar3 = (undefined4 *)(param_1[3] + *param_1 * iVar1 * 4);
      iVar1 = 0;
      if (0 < *param_1) {
        puVar2 = (undefined4 *)(param_2 + iVar4 * 4);
        do {
          iVar4 = iVar4 + 1;
          *puVar2 = *puVar3;
          puVar2 = puVar2 + 1;
          iVar1 = iVar1 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar1 < *param_1);
      }
    } while (iVar4 < param_4);
  }
  return 0;
}


