/* Module: qt4plug.dll
   Function: FUN_5f51be50
   Address: 5f51be50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f51be50(int param_1,int *param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (((param_4 == 2) && (param_2 != (int *)0x0)) && (7 < param_3)) {
    if (*(int *)(param_1 + 0x94) == 0) {
      *param_2 = *(int *)(param_1 + 0x60);
      param_2[1] = 0;
      return 0;
    }
    uVar1 = *(uint *)(param_1 + 0x98);
    if (uVar1 != 0) {
      lVar3 = __allmul((uint)*(ushort *)(param_1 + 0x5a),0,*(uint *)(param_1 + 0x38),
                       *(int *)(param_1 + 0x3c));
      lVar3 = __alldiv((uint)lVar3,(uint)((ulonglong)lVar3 >> 0x20),uVar1,0);
      if ((-1 < lVar3) && (lVar3 != 0)) {
        __allmul(*(uint *)(param_1 + 0x9c),0,(uint)lVar3,(int)((ulonglong)lVar3 >> 0x20));
        iVar2 = ftol();
        *param_2 = iVar2;
        param_2[1] = iVar2 >> 0x1f;
        return 0;
      }
      return 1;
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return 1;
}


