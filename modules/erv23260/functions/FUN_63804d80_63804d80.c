/* Module: erv23260.dll
   Function: FUN_63804d80
   Address: 63804d80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_63804d80(void *this,int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_2;
  if (param_2 < 0x65) {
    iVar2 = FUN_638025b0((void *)((int)this + -0x70),param_1,&param_1,(int *)&param_2);
    if ((iVar2 == 0) && (param_1 <= (int)param_2)) {
      iVar3 = param_1 * 0x77c + 0x14 + (int)this;
      iVar4 = param_1;
      do {
        *(uint *)(iVar3 + 0x90) = uVar1;
        FUN_638089b0(iVar3);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x77c;
      } while (iVar4 <= (int)param_2);
    }
    return iVar2;
  }
  return 10;
}


