/* Module: vegas30k.dll
   Function: FUN_0118e070
   Address: 0118e070
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0118e070(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0x4e001;
  if ((*(uint *)(param_1 + 0xc) & 2) == 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffef;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    iVar1 = FUN_0118df80(param_2,param_3);
    if (((-1 < iVar1) &&
        (iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x30))
                           (*(int **)(param_1 + 0x18),4,5000000,0,&LAB_0118e740,param_1), -1 < iVar1
        )) && (iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x40))
                                 (*(int **)(param_1 + 0x18),0,0), -1 < iVar1)) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 8;
      if ((*(int *)(param_1 + 0xb4) == 0) ||
         (iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x38))(*(int **)(param_1 + 0x18),0,0),
         -1 < iVar1)) {
        uVar2 = *(uint *)(param_1 + 0xc) | 2;
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x18) + 0x3c))(*(int **)(param_1 + 0x18));
        uVar2 = *(uint *)(param_1 + 0xc) & 0xfffffff7;
      }
      *(uint *)(param_1 + 0xc) = uVar2;
      if (-1 < iVar1) {
        return iVar1;
      }
    }
    (**(code **)(**(int **)(param_1 + 0x18) + 0x34))(*(int **)(param_1 + 0x18));
  }
  return iVar1;
}


