/* Module: mcplug.dll
   Function: FUN_00403c60
   Address: 00403c60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00403c60(int param_1,LPWSTR param_2,int param_3,int param_4)

{
  int iVar1;
  BYTE *pBVar2;
  char *lpMultiByteStr;
  uint uVar3;
  uchar local_104 [260];
  
  if (param_4 == 1) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x98);
    if (iVar1 == 1) {
      lpMultiByteStr = "MPEG Layer 1";
    }
    else if (iVar1 == 2) {
      lpMultiByteStr = "MPEG Layer 2";
    }
    else {
      lpMultiByteStr = "MPEG";
    }
  }
  else if (param_4 == 2) {
    if (*(int *)(*(int *)(param_1 + 0x28) + 0x90) == 0) {
      uVar3 = 0x1b1;
    }
    else {
      uVar3 = 0x1b0;
    }
    FUN_00419470(DAT_00487a6c,uVar3);
    pBVar2 = (BYTE *)FUN_00419470(DAT_00487a6c,0x1af);
    FUN_0041fd40(local_104,pBVar2);
    lpMultiByteStr = (char *)local_104;
  }
  else {
    if (param_4 != 3) {
      return 1;
    }
    pBVar2 = (BYTE *)FUN_00419470(DAT_00487ed8,0x46);
    FUN_0041fd40(local_104,pBVar2);
    lpMultiByteStr = (char *)local_104;
  }
  MultiByteToWideChar(0,1,lpMultiByteStr,-1,param_2,param_3);
  param_2[param_3 + -1] = L'\0';
  return 0;
}


