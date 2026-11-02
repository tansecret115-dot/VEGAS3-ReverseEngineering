/* Module: sctplug.dll
   Function: FUN_00405a10
   Address: 00405a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00405a10(int param_1,LPWSTR param_2,int param_3,int param_4)

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
  if (param_4 != 1) {
    if (param_4 != 2) {
      if (param_4 == 3) {
        pBVar3 = (BYTE *)FUN_0040d100(DAT_0043ca5c,0x3fa);
        FUN_00412100(local_104,pBVar3);
        MultiByteToWideChar(0,1,(LPCSTR)local_104,-1,param_2,param_3);
        param_2[param_3 + -1] = L'\0';
      }
      return 1;
    }
    FUN_0041cfb0(*(ushort **)(param_1 + 0x50),local_104);
    lpMultiByteStr = local_104;
    goto LAB_00405b78;
  }
  puVar2 = *(ushort **)(param_1 + 0x50);
  uVar1 = *puVar2;
  if (uVar1 < 4) {
    if ((uVar1 == 3) || (uVar1 == 1)) {
LAB_00405af8:
      if ((uint)puVar2[6] == (uint)(puVar2[7] >> 3) * (uint)puVar2[1]) {
        lpMultiByteStr = (uchar *)FUN_0040d100(DAT_0043ca5c,0x3f9);
        goto LAB_00405b78;
      }
    }
  }
  else if ((0xfdff < uVar1) && (uVar1 < 0xfe03)) goto LAB_00405af8;
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
LAB_00405b78:
  MultiByteToWideChar(0,1,(LPCSTR)lpMultiByteStr,-1,param_2,param_3);
  param_2[param_3 + -1] = L'\0';
  return 0;
}


