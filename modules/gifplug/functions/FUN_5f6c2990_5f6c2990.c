/* Module: gifplug.dll
   Function: FUN_5f6c2990
   Address: 5f6c2990
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6c2990(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  uint local_c;
  uint local_8;
  int local_4;
  
  lVar6 = __allmul(*(uint *)(param_1 + 0xcc),0,*param_2,param_2[1]);
  iVar1 = FUN_5f6c2f90(*(void **)(param_1 + 0xc),(int *)&local_8);
  if (-1 < iVar1) {
    if ((local_4 < 0) || ((local_4 < 1 && (local_8 < 2)))) {
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      uVar4 = 0;
      uVar3 = 0;
      if ((-1 < lVar6) && (lVar6 != 0)) {
        do {
          iVar1 = FUN_5f6c3000(*(void **)(param_1 + 0xc),uVar4,uVar3,(int *)&local_c);
          if (iVar1 < 0) {
            return iVar1;
          }
          iVar1 = (uint)lVar6 - local_c;
          iVar2 = (int)((ulonglong)lVar6 >> 0x20) - (uint)((uint)lVar6 < local_c);
          if (-1 < iVar2) {
            bVar5 = 0xfffffffe < uVar4;
            uVar4 = uVar4 + 1;
            uVar3 = uVar3 + bVar5;
            if ((local_4 < (int)uVar3) || ((local_4 <= (int)uVar3 && (local_8 <= uVar4)))) {
              return -0x7fffbffb;
            }
          }
          lVar6 = CONCAT44(iVar2,iVar1);
        } while ((0 < iVar2) || ((-1 < iVar2 && (lVar6 = CONCAT44(iVar2,iVar1), iVar1 != 0))));
      }
    }
    *param_2 = uVar4;
    param_2[1] = uVar3;
    iVar1 = 0;
  }
  return iVar1;
}


