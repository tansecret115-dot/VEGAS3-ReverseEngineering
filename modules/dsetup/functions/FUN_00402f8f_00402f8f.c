/* Module: dsetup.dll
   Function: FUN_00402f8f
   Address: 00402f8f
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_00402f8f(byte *param_1,byte *param_2)

{
  byte bVar1;
  DWORD *pDVar2;
  int iVar3;
  byte *pbVar4;
  byte local_24 [32];
  
  pDVar2 = FUN_004034d2();
  pbVar4 = local_24;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4 = pbVar4 + 4;
  }
  do {
    bVar1 = *param_2;
    local_24[bVar1 >> 3] = local_24[bVar1 >> 3] | '\x01' << (bVar1 & 7);
    param_2 = param_2 + 1;
  } while (bVar1 != 0);
  if (param_1 == (byte *)0x0) {
    param_1 = (byte *)pDVar2[6];
  }
  for (; (bVar1 = *param_1, pbVar4 = param_1, (local_24[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0
         && (bVar1 != 0)); param_1 = param_1 + 1) {
  }
  do {
    bVar1 = *pbVar4;
    if (bVar1 == 0) {
LAB_0040301e:
      pDVar2[6] = (DWORD)pbVar4;
      return -(uint)(param_1 != pbVar4) & (uint)param_1;
    }
    if ((local_24[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0) {
      *pbVar4 = 0;
      pbVar4 = pbVar4 + 1;
      goto LAB_0040301e;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}


