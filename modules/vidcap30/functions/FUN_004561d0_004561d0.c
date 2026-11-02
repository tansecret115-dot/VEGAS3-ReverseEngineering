/* Module: vidcap30.exe
   Function: FUN_004561d0
   Address: 004561d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004561d0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_108;
  uchar local_104 [260];
  
  iVar2 = 0;
  iVar1 = *param_1;
  if (0 < iVar1) {
    do {
      local_108 = 0x108;
      _mbscpy(local_104,(uchar *)(param_1[1] * iVar2 + param_1[2]));
      _SfDialogBoxParam_20(DAT_005ba2a0,0x1af,*DAT_005ba4c0,&LAB_00459e50,&local_108);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}


