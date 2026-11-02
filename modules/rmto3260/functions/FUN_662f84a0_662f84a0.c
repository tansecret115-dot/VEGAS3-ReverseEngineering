/* Module: rmto3260.dll
   Function: FUN_662f84a0
   Address: 662f84a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_662f84a0(uint param_1,undefined4 param_2,int *param_3,ushort *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_66311d74 == 0) {
    return -0x7ffbfff9;
  }
  if (param_1 <= *(int *)((int)DAT_66311d70 + 0xc) - 1U) {
    puVar1 = FUN_66301d80(DAT_66311d70,param_1);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_66301bb0((int)puVar1);
      if ((void *)*puVar1 == (void *)0x0) {
        iVar2 = -0x7ffbfdbb;
      }
      if (iVar2 == 0) {
        iVar2 = FUN_662f9090((void *)*puVar1,param_2,param_3,param_4);
      }
      return iVar2;
    }
  }
  return -0x7ffbfdbb;
}


