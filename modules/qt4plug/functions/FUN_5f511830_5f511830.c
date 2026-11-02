/* Module: qt4plug.dll
   Function: FUN_5f511830
   Address: 5f511830
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f511830(int param_1)

{
  ushort *puVar1;
  int *piVar2;
  undefined *puVar3;
  LPSTR lpMultiByteStr;
  BYTE *pBVar4;
  int iVar5;
  int local_318;
  uchar local_314 [260];
  uchar local_210 [260];
  uchar local_10c [264];
  
  local_318 = -0x7ff8fff2;
  if (*(int *)(param_1 + 0x28) == 0) {
    puVar3 = FUN_5f5139f0(param_1);
    *(undefined **)(param_1 + 0x28) = puVar3;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    local_318 = FUN_5f5139a0(param_1);
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 4) = DAT_5f5a004c;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (local_318 < 0) {
    return local_318;
  }
  lpMultiByteStr = FUN_5f527a90(DAT_5f5a4158,DAT_5f5a2a10);
  iVar5 = *(int *)(param_1 + 0x28);
  MultiByteToWideChar(0,1,lpMultiByteStr,-1,(LPWSTR)(iVar5 + 0x14),0x104);
  *(undefined2 *)(iVar5 + 0x21a) = 0;
  local_210[0] = '\0';
  puVar1 = *(ushort **)(*(int *)(param_1 + 0x28) + 0x424);
  if ((puVar1 != (ushort *)0x0) && (*(int *)(puVar1 + 9) != 0)) {
    FUN_5f534fb0(puVar1,local_210);
  }
  local_314[0] = '\0';
  piVar2 = *(int **)(*(int *)(param_1 + 0x28) + 0x428);
  if (((piVar2 != (int *)0x0) && (piVar2[1] != 0)) &&
     (((iVar5 = piVar2[0x12], iVar5 != 0 &&
       ((*(int *)(iVar5 + 8) != 0 && (*(int *)(iVar5 + 4) != 0)))) ||
      ((iVar5 = *piVar2, iVar5 != 0 && ((*(int *)(iVar5 + 8) != 0 && (*(int *)(iVar5 + 4) != 0))))))
     )) {
    FUN_5f52ee50(iVar5,local_314);
  }
  local_10c[0] = '\0';
  if (local_314[0] == '\0') {
    if (local_210[0] != '\0') {
      pBVar4 = (BYTE *)FUN_5f527a90(DAT_5f5a4158,0x1fe);
      FUN_5f52c900(local_10c,pBVar4);
    }
  }
  else if (local_210[0] == '\0') {
    pBVar4 = (BYTE *)FUN_5f527a90(DAT_5f5a4158,0x1fd);
    FUN_5f52c900(local_10c,pBVar4);
  }
  else {
    pBVar4 = (BYTE *)FUN_5f527a90(DAT_5f5a4158,0x1fc);
    FUN_5f52c900(local_10c,pBVar4);
  }
  iVar5 = *(int *)(param_1 + 0x28);
  MultiByteToWideChar(0,1,(LPCSTR)local_10c,-1,(LPWSTR)(iVar5 + 0x21c),0x104);
  *(undefined2 *)(iVar5 + 0x422) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    return local_318;
  }
  return -0x7ffb1fb9;
}


