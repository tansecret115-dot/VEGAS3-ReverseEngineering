/* Module: vegas30.exe
   Function: FUN_00567ab0
   Address: 00567ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00567ab0(HWND param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  HWND pHVar3;
  int local_8;
  int local_4;
  
  iVar1 = FUN_005624d0(&DAT_0064b538);
  if (iVar1 != 0) {
    iVar2 = FUN_00562c10(iVar1,&local_8,0);
    if ((-1 < iVar2) &&
       ((local_8 != *(int *)(param_2 + 0xe8) || (local_4 != *(int *)(param_2 + 0xec))))) {
      if ((*param_2 & 4) == 0) {
        pHVar3 = GetDlgItem(param_1,0x438);
        FUN_00567a70(pHVar3,local_8,local_4);
        *(int *)(param_2 + 0x28) = local_8;
        *(int *)(param_2 + 0x2c) = local_4;
      }
      pHVar3 = GetDlgItem(param_1,0x43a);
      FUN_00567a70(pHVar3,local_8,local_4);
      *(int *)(param_2 + 0xe8) = local_8;
      *(int *)(param_2 + 0xec) = local_4;
    }
    FUN_00562540(&DAT_0064b538,iVar1);
  }
  return;
}


