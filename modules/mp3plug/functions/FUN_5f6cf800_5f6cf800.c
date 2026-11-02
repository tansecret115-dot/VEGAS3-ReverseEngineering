/* Module: mp3plug.dll
   Function: FUN_5f6cf800
   Address: 5f6cf800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6cf800(uint *param_1,int param_2,int param_3,uint *param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  int local_24;
  uint local_20;
  uint local_1c;
  uint *local_18;
  
  uVar1 = param_1[4];
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      *param_5 = 0;
      local_1c = *param_1;
      local_18 = param_4;
      uVar1 = *param_4;
      if ((uVar1 < param_1[1]) && ((int)uVar1 < (int)param_1[1])) {
        do {
          *(undefined4 *)(param_2 + uVar1 * 4) = 0;
          uVar1 = uVar1 + 1;
        } while ((int)uVar1 < (int)param_1[1]);
      }
      local_20 = *param_4;
      *param_4 = 0;
      local_20 = local_20 / local_1c;
      iVar2 = 0;
      if (0 < (int)local_1c) {
        do {
          FUN_5f6cf4a0(*(int **)(param_1[6] + iVar2 * 4),(int *)param_1[5],local_20,&local_24,
                       local_1c,iVar2,param_2,param_3);
          *param_5 = local_24 + *param_5;
          iVar2 = iVar2 + 1;
          *local_18 = local_20 + *local_18;
        } while (iVar2 < (int)local_1c);
      }
    }
    else {
      if (uVar1 == 2) {
        FUN_5f6cf7f0();
        return;
      }
      *param_5 = 0;
    }
  }
  return;
}


