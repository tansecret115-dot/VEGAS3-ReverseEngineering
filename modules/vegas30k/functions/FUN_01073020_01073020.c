/* Module: vegas30k.dll
   Function: FUN_01073020
   Address: 01073020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01073020(int param_1,int param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uchar uVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_2 + 0x34c);
  if (iVar1 == 0) {
    uVar3 = ISO9660_MakeShortFileName
                      (param_3,*(uint *)(param_2 + 8) >> 4 & 1,*(ushort *)(iVar2 + 4),
                       (char *)(iVar2 + 0x39));
    *(uchar *)(iVar2 + 0x38) = uVar3;
  }
  else {
    if (iVar1 == 1) {
      uVar3 = ISO9660_MakeShortFileName
                        (param_3,*(uint *)(param_2 + 8) >> 4 & 1,*(ushort *)(iVar2 + 4),
                         (char *)(iVar2 + 0x39));
      *(uchar *)(iVar2 + 0x38) = uVar3;
      return 0;
    }
    if (iVar1 == 2) {
      uVar3 = ISO9660_MakeShortFileName
                        (param_3,*(uint *)(param_2 + 8) >> 4 & 1,*(ushort *)(iVar2 + 4),
                         (char *)(iVar2 + 0x39));
      *(uchar *)(iVar2 + 0x38) = uVar3;
      FUN_01072b20(param_4,param_2);
      return 0;
    }
  }
  return 0;
}


