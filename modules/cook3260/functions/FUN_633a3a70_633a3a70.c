/* Module: cook3260.dll
   Function: FUN_633a3a70
   Address: 633a3a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_633a3a70(byte *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (0 < param_2 >> 3) {
    do {
      uVar2 = uVar3 & 3;
      *param_3 = *param_3 & (&DAT_633a80b8)[uVar2];
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      *param_3 = (uint)((&DAT_633a80e8)[uVar2] ^ bVar1) << ((byte)(&DAT_633a80c8)[uVar2] & 0x1f) |
                 *param_3;
      uVar3 = uVar3 + 1;
      param_3 = param_3 + (&DAT_633a80d8)[uVar2];
    } while ((int)uVar3 < param_2 >> 3);
  }
  return;
}


