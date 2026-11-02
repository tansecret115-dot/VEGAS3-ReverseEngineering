/* Module: wavplug.dll
   Function: FUN_5f38db10
   Address: 5f38db10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f38db10(int param_1,LPWSTR param_2,int param_3,int param_4)

{
  ushort *puVar1;
  BYTE *pBVar2;
  int iVar3;
  uchar *lpMultiByteStr;
  uint *puVar4;
  uint local_14c [6];
  uchar auStack_134 [48];
  uchar local_104 [260];
  
  *param_2 = L'\0';
  FUN_5f38ddc0(param_1);
  if (param_4 == 1) {
    iVar3 = FUN_5f38dcc0(param_1);
    if (iVar3 == 0) {
      lpMultiByteStr = (uchar *)FUN_5f397740(DAT_5f3db00c,0x3fc);
    }
    else {
      puVar1 = *(ushort **)(param_1 + 0xd0);
      puVar4 = local_14c;
      for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      local_14c[0] = 0x48;
      local_14c[2] = (uint)*puVar1;
      iVar3 = acmFormatTagDetailsA(0,local_14c,1);
      if (iVar3 != 0) {
        return 0;
      }
      lpMultiByteStr = auStack_134;
    }
  }
  else {
    if (param_4 != 2) {
      if (param_4 == 3) {
        pBVar2 = (BYTE *)FUN_5f397740(DAT_5f3db00c,0x3fd);
        FUN_5f39c1a0(local_104,pBVar2);
        MultiByteToWideChar(0,1,(LPCSTR)local_104,-1,param_2,param_3);
        param_2[param_3 + -1] = L'\0';
      }
      return 1;
    }
    FUN_5f39af10(*(ushort **)(param_1 + 0xd0),local_104);
    lpMultiByteStr = local_104;
  }
  MultiByteToWideChar(0,1,(LPCSTR)lpMultiByteStr,-1,param_2,param_3);
  param_2[param_3 + -1] = L'\0';
  return 0;
}


