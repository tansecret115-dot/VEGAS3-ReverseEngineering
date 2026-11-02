/* Module: wavplug.dll
   Function: FUN_5f3924a0
   Address: 5f3924a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f3924a0(int param_1,LPWSTR param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort *puVar2;
  BYTE *pBVar3;
  uchar *lpMultiByteStr;
  int iVar4;
  uint *puVar5;
  uint local_14c [6];
  uchar auStack_134 [48];
  uchar local_104 [260];
  
  *param_2 = L'\0';
  FUN_5f392780(param_1);
  if (param_4 != 1) {
    if (param_4 != 2) {
      if (param_4 == 3) {
        pBVar3 = (BYTE *)FUN_5f397740(DAT_5f3db00c,0x3fd);
        FUN_5f39c1a0(local_104,pBVar3);
        MultiByteToWideChar(0,1,(LPCSTR)local_104,-1,param_2,param_3);
        param_2[param_3 + -1] = L'\0';
      }
      return 1;
    }
    FUN_5f39af10(*(ushort **)(param_1 + 0xd0),local_104);
    lpMultiByteStr = local_104;
    goto LAB_5f39260f;
  }
  puVar2 = *(ushort **)(param_1 + 0xd0);
  uVar1 = *puVar2;
  if (uVar1 < 4) {
    if ((uVar1 == 3) || (uVar1 == 1)) {
LAB_5f39258f:
      if ((uint)puVar2[6] == (uint)(puVar2[7] >> 3) * (uint)puVar2[1]) {
        lpMultiByteStr = (uchar *)FUN_5f397740(DAT_5f3db00c,0x3fc);
        goto LAB_5f39260f;
      }
    }
  }
  else if ((0xfdff < uVar1) && (uVar1 < 0xfe03)) goto LAB_5f39258f;
  puVar5 = local_14c;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_14c[0] = 0x48;
  local_14c[2] = (uint)*puVar2;
  iVar4 = acmFormatTagDetailsA(0,local_14c,1);
  if (iVar4 != 0) {
    return 0;
  }
  lpMultiByteStr = auStack_134;
LAB_5f39260f:
  MultiByteToWideChar(0,1,(LPCSTR)lpMultiByteStr,-1,param_2,param_3);
  param_2[param_3 + -1] = L'\0';
  return 0;
}


