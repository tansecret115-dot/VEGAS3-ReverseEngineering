/* Module: rnco3260.dll
   Function: FUN_637007b0
   Address: 637007b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_637007b0(undefined1 *param_1,int param_2,ushort *param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  puVar3 = param_1;
  iVar4 = param_2 >> 1;
  param_1 = (undefined1 *)param_2;
  if (param_2 == 0) {
    return;
  }
  do {
    uVar2 = (uint)*param_3;
    param_3 = param_3 + 1;
    uVar1 = (&DAT_63795aa0)
            [(uVar2 & 0x1e | (uVar2 & 0x3c0) >> 1) >> 1 | ((uVar2 & 0x7800) >> 7) << 4];
    do {
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
      param_1 = param_1 + -1;
      if (param_1 == (undefined1 *)0x0) {
        return;
      }
      iVar4 = iVar4 - param_4;
    } while (-1 < iVar4);
    iVar4 = iVar4 + param_2;
  } while( true );
}


