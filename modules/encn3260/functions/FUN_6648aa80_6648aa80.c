/* Module: encn3260.dll
   Function: FUN_6648aa80
   Address: 6648aa80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6648aa80(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (*(void **)(param_1 + 0xe) != (void *)0x0) {
    iVar1 = FUN_66487d80(*(void **)(param_1 + 0xe),param_2,param_3,param_4,param_5,
                         CONCAT22((short)((uint)param_1 >> 0x10),*(undefined2 *)(param_1 + 0xc)));
    return iVar1;
  }
  return -0x7fffbffb;
}


