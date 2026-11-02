/* Module: vegas30k.dll
   Function: FUN_011856e0
   Address: 011856e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 __thiscall FUN_011856e0(int param_1,int *param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = param_4;
  uVar5 = param_3;
  if (((*(int *)(param_1 + 0x8a0) == 0) && (*(int *)(param_1 + 0x8a4) == 0)) &&
     (*(int *)(param_1 + 0x48) != 0)) {
    iVar2 = *(int *)(param_1 + 0x85c);
    if ((iVar2 <= param_4) && ((iVar2 < param_4 || (*(uint *)(param_1 + 0x858) < param_3)))) {
      iVar4 = iVar2;
      uVar5 = *(uint *)(param_1 + 0x858);
    }
  }
  if ((*(int *)(param_1 + 0x85c) <= iVar4) &&
     ((*(int *)(param_1 + 0x85c) < iVar4 || (*(uint *)(param_1 + 0x858) < uVar5)))) {
    while( true ) {
      ResetEvent(*(HANDLE *)(param_1 + 0x818));
      SetEvent(*(HANDLE *)(param_1 + 0x810));
      WaitForSingleObject(*(HANDLE *)(param_1 + 0x818),2);
      if ((*(int *)(param_1 + 0x63c) == 0) ||
         (uVar3 = *(uint *)(param_1 + 0x20), (uVar3 & 0x1860) == 0)) {
        return 0;
      }
      if ((uVar3 & 0x80000000) != 0) break;
      if ((uVar3 & 0x4000) != 0) {
        iVar2 = *(int *)(param_1 + 0x724);
        iVar1 = *(int *)(param_1 + 0x56c);
        uVar3 = *(uint *)(param_1 + 0x720);
        if ((iVar2 < iVar1) || ((iVar2 <= iVar1 && (uVar3 <= *(uint *)(param_1 + 0x568))))) {
          iVar2 = iVar1;
          uVar3 = *(uint *)(param_1 + 0x568);
        }
        if ((iVar2 < *(int *)(param_1 + 0x8ac)) ||
           ((iVar2 <= *(int *)(param_1 + 0x8ac) && (uVar3 < *(uint *)(param_1 + 0x8a8))))) break;
      }
      if ((iVar4 <= *(int *)(param_1 + 0x85c)) &&
         ((iVar4 < *(int *)(param_1 + 0x85c) || (uVar5 <= *(uint *)(param_1 + 0x858))))) break;
    }
  }
  if ((*(uint *)(param_1 + 0x20) & 0x80000000) != 0) {
    return 0xffffffffffffffff;
  }
  if ((*(uint *)(param_1 + 0x20) & 0x4000) != 0) {
    iVar2 = *(int *)(param_1 + 0x724);
    iVar1 = *(int *)(param_1 + 0x56c);
    uVar3 = *(uint *)(param_1 + 0x720);
    if ((iVar2 < iVar1) || ((iVar2 <= iVar1 && (uVar3 <= *(uint *)(param_1 + 0x568))))) {
      iVar2 = iVar1;
      uVar3 = *(uint *)(param_1 + 0x568);
    }
    if ((iVar2 <= *(int *)(param_1 + 0x8ac)) &&
       ((iVar2 < *(int *)(param_1 + 0x8ac) || (uVar3 < *(uint *)(param_1 + 0x8a8))))) {
      return 0xfffffffffffffffe;
    }
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar4 = *(int *)(param_1 + 0x83c);
    *param_2 = iVar4;
    *param_2 = (uint)*(ushort *)(param_1 + 0x504) * *(int *)(param_1 + 0x848) + iVar4;
    iVar4 = *(int *)(param_1 + 0x85c);
    uVar5 = *(uint *)(param_1 + 0x858);
    if ((param_4 <= iVar4) && ((param_4 < iVar4 || (param_3 < uVar5)))) {
      iVar4 = param_4;
      uVar5 = param_3;
    }
    uVar3 = *(uint *)(param_1 + 0x840) - *(uint *)(param_1 + 0x848);
    iVar2 = (*(int *)(param_1 + 0x844) - *(int *)(param_1 + 0x84c)) -
            (uint)(*(uint *)(param_1 + 0x840) < *(uint *)(param_1 + 0x848));
    if ((iVar2 <= iVar4) && ((iVar2 < iVar4 || (uVar3 <= uVar5)))) {
      iVar4 = iVar2;
      uVar5 = uVar3;
    }
    return CONCAT44(iVar4,uVar5);
  }
  iVar2 = *(int *)(param_1 + 0x84c);
  uVar3 = *(uint *)(param_1 + 0x848);
  if ((-1 < iVar2) &&
     ((((0 < iVar2 || (uVar3 != 0)) && (iVar2 <= iVar4)) && ((iVar2 < iVar4 || (uVar3 <= uVar5))))))
  {
    iVar4 = iVar2;
    uVar5 = uVar3;
  }
  *(uint *)(param_1 + 0x848) = uVar3 - uVar5;
  *(uint *)(param_1 + 0x84c) = (iVar2 - iVar4) - (uint)(uVar3 < uVar5);
  iVar2 = *(int *)(param_1 + 0x83c);
  *param_2 = iVar2;
  *param_2 = (uint)*(ushort *)(param_1 + 0x504) * *(int *)(param_1 + 0x848) + iVar2;
  return CONCAT44(iVar4,uVar5);
}


