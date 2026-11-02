/* Module: rnco3260.dll
   Function: FUN_636fba70
   Address: 636fba70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fba70(ushort *param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  
  puVar2 = param_1;
  iVar3 = param_2;
  param_1 = (ushort *)(param_2 >> 1);
  if (param_2 == 0) {
    return;
  }
  do {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    do {
      *puVar2 = (ushort)((uVar1 & 0xfc00 | uVar1 >> 0xe & 0x3e0) >> 5) |
                (ushort)((uVar1 & 0xf8) << 8);
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        return;
      }
      param_1 = (ushort *)((int)param_1 - param_4);
    } while (-1 < (int)param_1);
    param_1 = (ushort *)((int)param_1 + param_2);
  } while( true );
}


