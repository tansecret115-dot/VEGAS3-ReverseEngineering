/* Module: mcmpgdec.dll
   Function: FUN_10003984
   Address: 10003984
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_10003984(int *param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar4 = 0;
  param_1[4] = 0x20;
  iVar2 = param_1[2];
  param_1[2] = 0;
  if (param_1[1] + 3U < (uint)(param_1[3] + *param_1)) {
    iVar4 = 0;
    do {
      cVar3 = (char)iVar4;
      iVar4 = iVar4 + 8;
      bVar1 = *(byte *)param_1[1];
      param_1[1] = param_1[1] + 1;
      uVar5 = uVar5 | (uint)bVar1 << (0x18U - cVar3 & 0x1f);
    } while (iVar4 < 0x19);
  }
  else {
    param_1[7] = 1;
    param_1[8] = 1;
  }
  param_1[4] = iVar4;
  param_1[2] = uVar5;
  return iVar2;
}


