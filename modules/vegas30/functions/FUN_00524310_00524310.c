/* Module: vegas30.exe
   Function: FUN_00524310
   Address: 00524310
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00524310(int param_1,int param_2,LPCSTR param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_11c [16];
  CHAR local_10c [268];
  
  FUN_00508ba0(param_2,local_11c);
  if (param_2 == *(int *)(param_1 + 0x10c)) {
    lstrcpynA(param_3,local_10c,param_4);
    param_3[param_4 + -1] = '\0';
    return 0;
  }
  uVar2 = FUN_0050a790(*(undefined4 *)(param_1 + 0xfc),param_2);
  iVar3 = FUN_00524310(param_1,uVar2,param_3,param_4);
  if (-1 < iVar3) {
    iVar4 = lstrlenA(param_3);
    iVar1 = iVar4 + 1;
    if (iVar1 < param_4) {
      param_3[iVar4] = '\\';
      lstrcpynA(param_3 + iVar1,local_10c,param_4 - iVar1);
      (param_3 + iVar1)[(param_4 - iVar1) + -1] = '\0';
      iVar4 = lstrlenA(local_10c);
      if (iVar4 + 1 + iVar1 < param_4) {
        return iVar3;
      }
    }
    return -0x7ff8fff2;
  }
  return iVar3;
}


