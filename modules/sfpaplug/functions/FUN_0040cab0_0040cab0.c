/* Module: sfpaplug.dll
   Function: FUN_0040cab0
   Address: 0040cab0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040cab0(int param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = FUN_0040cb10(param_1);
  if ((-1 < iVar1) && (*(int *)(param_1 + 0x220) != 0)) {
    uVar2 = __alldiv(*(uint *)(param_1 + 600),*(uint *)(param_1 + 0x25c),
                     *(uint *)(*(int *)(param_1 + 0x220) + 4),0);
    lVar3 = __allmul((uint)uVar2,(int)((ulonglong)uVar2 >> 0x20),10000000,0);
    *param_2 = lVar3;
  }
  return iVar1;
}


