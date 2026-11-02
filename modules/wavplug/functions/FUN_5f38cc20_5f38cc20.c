/* Module: wavplug.dll
   Function: FUN_5f38cc20
   Address: 5f38cc20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f38cc20(int param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = FUN_5f38cc80(param_1);
  if ((-1 < iVar1) && (*(int *)(param_1 + 0x230) != 0)) {
    uVar2 = __alldiv(*(uint *)(param_1 + 0x248),*(uint *)(param_1 + 0x24c),
                     *(uint *)(*(int *)(param_1 + 0x230) + 4),0);
    lVar3 = __allmul((uint)uVar2,(int)((ulonglong)uVar2 >> 0x20),10000000,0);
    *param_2 = lVar3;
  }
  return iVar1;
}


