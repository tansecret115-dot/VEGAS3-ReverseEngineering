/* Module: vegas30.exe
   Function: FUN_0052dfc0
   Address: 0052dfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0052dfc0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_2 + 0x108) = 0x30;
  *(undefined4 *)(param_2 + 0x114) = 1;
  iVar1 = FUN_0052dc50(param_1,param_2);
  *(undefined4 *)(param_2 + 0x118) = 0;
  *(undefined4 *)(param_2 + 0x11c) = DAT_0064a56c;
  *(undefined4 *)(param_2 + 0xa1c) = 0;
  *(undefined4 *)(param_2 + 0xa20) = 0;
  iVar2 = FUN_0052de30(param_1,param_2,param_3);
  if ((-1 < iVar2) && (-1 < iVar1)) {
    if ((iVar2 == 0x4e001) && (iVar1 == 0x4e001)) {
      return 0x4e001;
    }
    iVar2 = 0;
  }
  return iVar2;
}


