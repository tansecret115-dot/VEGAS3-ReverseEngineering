/* Module: rnco3260.dll
   Function: FUN_636fda60
   Address: 636fda60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fda60(ushort *param_1,int param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2 >> 1;
  iVar5 = param_2;
  if (param_2 == 0) {
    return;
  }
  do {
    bVar1 = param_3[2];
    bVar2 = param_3[1];
    bVar3 = *param_3;
    param_3 = param_3 + 3;
    do {
      *param_1 = (bVar2 & 0xf8 | (bVar1 & 0xf8) << 5) << 2 | (ushort)(bVar3 >> 3);
      param_1 = param_1 + 1;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        return;
      }
      iVar4 = iVar4 - param_4;
    } while (-1 < iVar4);
    iVar4 = iVar4 + param_2;
  } while( true );
}


