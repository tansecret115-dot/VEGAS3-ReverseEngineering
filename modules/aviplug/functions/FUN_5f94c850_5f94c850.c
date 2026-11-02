/* Module: aviplug.dll
   Function: FUN_5f94c850
   Address: 5f94c850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f94c850(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(&DAT_5f9d88a0 + (param_2 & 1) * 4) + param_1;
  iVar2 = 0;
  do {
    if (*(char *)(iVar1 + 3) == 'P') {
      *param_3 = *(undefined4 *)(iVar1 + 4);
      return 0;
    }
    iVar1 = iVar1 + 0x500;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  *param_3 = 0xc0c01fc0;
  return 0x8004e00a;
}


