/* Module: ednt3260.dll
   Function: FUN_630f9210
   Address: 630f9210
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630f9210(void *this,short param_1,int param_2,int param_3)

{
  double *pdVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_3 < *(short *)((int)this + 0x6344)) {
    pdVar1 = (double *)(param_3 * 0x800 + param_2 * 0x2800 + 0x30992 + (int)this);
  }
  else {
    pdVar1 = (double *)((int)this + 0x5af6);
  }
  if (param_1 == 0) {
    FUN_630f4680((int)this + 0x52f6,pdVar1,(double *)&DAT_630ff938,(double *)&DAT_630ffd38,0x80);
  }
  else {
    FUN_630f4720((int)this + 0x52f6,pdVar1,(double *)&DAT_63100138,(double *)&DAT_63100338,0x40);
  }
  if (*(short *)((int)this + 0x6344) <= param_3) {
    iVar4 = 7;
    puVar3 = (undefined4 *)((int)this + param_2 * 0x38 + 0x3f992);
    puVar2 = (undefined4 *)((int)this + 0x5af6);
    do {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + 2;
    } while (iVar4 != 0);
  }
  return;
}


