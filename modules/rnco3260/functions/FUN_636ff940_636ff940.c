/* Module: rnco3260.dll
   Function: FUN_636ff940
   Address: 636ff940
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636ff940(undefined1 *param_1,int param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_2 >> 1;
  iVar6 = param_2;
  if (param_2 == 0) {
    return;
  }
  do {
    bVar3 = *param_3;
    pbVar1 = param_3 + 1;
    pbVar2 = param_3 + 2;
    param_3 = param_3 + 3;
    uVar4 = (&DAT_63795aa0)[(uint)(bVar3 >> 4) | *pbVar1 & 0xf0 | (*pbVar2 & 0xf0) << 4];
    do {
      *param_1 = uVar4;
      param_1 = param_1 + 1;
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) {
        return;
      }
      iVar5 = iVar5 - param_4;
    } while (-1 < iVar5);
    iVar5 = iVar5 + param_2;
  } while( true );
}


