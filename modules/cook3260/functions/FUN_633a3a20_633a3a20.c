/* Module: cook3260.dll
   Function: FUN_633a3a20
   Address: 633a3a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_633a3a20(uint *param_1,int param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < param_2 >> 3) {
    do {
      uVar1 = uVar2 & 3;
      *param_3 = (byte)(*param_1 >> ((byte)(&DAT_633a80c8)[uVar1] & 0x1f)) ^ (&DAT_633a80e8)[uVar1];
      param_3 = param_3 + 1;
      uVar2 = uVar2 + 1;
      param_1 = param_1 + (&DAT_633a80d8)[uVar1];
    } while ((int)uVar2 < param_2 >> 3);
  }
  return;
}


