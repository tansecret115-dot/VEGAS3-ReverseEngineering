/* Module: vidcap30.exe
   Function: FUN_00465680
   Address: 00465680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00465680(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  
  param_1 = *(int *)(&DAT_00592420 + (param_2 & 1) * 4) + param_1;
  iVar1 = 0;
  do {
    if (*(char *)(param_1 + 3) == 'P') {
      *param_3 = *(undefined4 *)(param_1 + 4);
      return 0;
    }
    param_1 = param_1 + 0x500;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  *param_3 = 0xc0c01fc0;
  return 0x8004e00a;
}


