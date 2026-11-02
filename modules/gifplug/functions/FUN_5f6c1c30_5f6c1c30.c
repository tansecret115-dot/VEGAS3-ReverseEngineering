/* Module: gifplug.dll
   Function: FUN_5f6c1c30
   Address: 5f6c1c30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f6c1c30(int param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  uint local_c;
  uint local_8;
  int local_4;
  
  iVar1 = FUN_5f6c2f90((void *)(param_1 + 0x218),(int *)&local_8);
  if (-1 < iVar1) {
    if ((local_4 < 0) || ((local_4 < 1 && (local_8 < 2)))) {
      uVar5 = 0;
      iVar1 = 0;
    }
    else {
      uVar5 = 0;
      iVar1 = 0;
      uVar3 = 0;
      iVar4 = 0;
      if ((-1 < local_4) && ((0 < local_4 || (local_8 != 0)))) {
        do {
          iVar2 = FUN_5f6c3000((void *)(param_1 + 0x218),uVar3,iVar4,(int *)&local_c);
          if (iVar2 < 0) {
            return iVar2;
          }
          bVar6 = CARRY4(uVar5,local_c);
          uVar5 = uVar5 + local_c;
          iVar1 = iVar1 + (uint)bVar6;
          bVar6 = 0xfffffffe < uVar3;
          uVar3 = uVar3 + 1;
          iVar4 = iVar4 + (uint)bVar6;
        } while ((iVar4 < local_4) || ((iVar4 <= local_4 && (uVar3 < local_8))));
      }
    }
    lVar7 = __allmul(uVar5,iVar1,10000,0);
    *param_2 = lVar7;
    iVar1 = 0;
  }
  return iVar1;
}


