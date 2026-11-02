/* Module: cook3260.dll
   Function: FUN_633a4f10
   Address: 633a4f10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_633a4f10(void *this,int param_1,float *param_2,int param_3,int param_4)

{
  short sVar1;
  float fVar2;
  short *psVar3;
  
  psVar3 = (short *)(param_1 + param_4 * 2);
  if (0 < param_3) {
    do {
      sVar1 = *psVar3;
      param_3 = param_3 + -1;
      psVar3 = psVar3 + *(int *)((int)this + 8);
      fVar2 = ((float)(int)sVar1 - _DAT_633a9560) - *(float *)((int)this + param_4 * 4 + 0x16b0c);
      *(float *)((int)this + param_4 * 4 + 0x16b0c) =
           *(float *)((int)this + param_4 * 4 + 0x16b0c) - fVar2 * _DAT_633a9564;
      *param_2 = fVar2;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


