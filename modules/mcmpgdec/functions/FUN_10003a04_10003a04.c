/* Module: mcmpgdec.dll
   Function: FUN_10003a04
   Address: 10003a04
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_10003a04(int *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = param_1[2];
  iVar4 = param_1[4] - param_2;
  uVar5 = uVar2 << ((byte)param_2 & 0x1f);
  if (iVar4 < 0x19) {
    if (param_1[1] + 3U < (uint)(param_1[3] + *param_1 + (iVar4 >> 3))) {
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
  }
  param_1[4] = iVar4;
  param_1[2] = uVar5;
  return uVar2 >> (0x20 - (byte)param_2 & 0x1f);
}


