/* Module: 28_83260.dll
   Function: FUN_100058d0
   Address: 100058d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100058d0(void *this,float *param_1,float *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  
  fVar3 = FUN_100057d0(param_1);
  puVar1 = (undefined4 *)((int)this + 0xb1c);
  iVar2 = 9;
  *param_2 = (float)(fVar3 - (float10)_DAT_10007104);
  do {
    *puVar1 = puVar1[1];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(float *)((int)this + 0xb40) = *param_2;
  return;
}


