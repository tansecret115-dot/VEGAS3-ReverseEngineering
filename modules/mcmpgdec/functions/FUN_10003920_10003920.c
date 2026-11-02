/* Module: mcmpgdec.dll
   Function: FUN_10003920
   Address: 10003920
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10003920(int *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = 0;
  param_1[2] = 0;
  param_1[4] = 0x20;
  if (param_1[1] + 3U < (uint)(param_1[3] + *param_1)) {
    iVar3 = 0;
    do {
      cVar2 = (char)iVar3;
      iVar3 = iVar3 + 8;
      bVar1 = *(byte *)param_1[1];
      param_1[1] = param_1[1] + 1;
      uVar4 = uVar4 | (uint)bVar1 << (0x18U - cVar2 & 0x1f);
    } while (iVar3 < 0x19);
  }
  else {
    param_1[7] = 1;
    param_1[8] = 1;
  }
  param_1[4] = iVar3;
  param_1[2] = uVar4;
  return;
}


