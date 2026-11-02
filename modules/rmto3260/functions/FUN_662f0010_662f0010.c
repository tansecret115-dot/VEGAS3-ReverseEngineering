/* Module: rmto3260.dll
   Function: FUN_662f0010
   Address: 662f0010
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662f0010(byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  
  while( true ) {
    bVar1 = *param_1;
    bVar2 = bVar1 < *param_2;
    if (bVar1 != *param_2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = param_1[1];
    bVar2 = bVar1 < param_2[1];
    if (bVar1 != param_2[1]) break;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar2) - (uint)(bVar2 != 0);
}


