/* Module: rmbe3260.dll
   Function: FUN_66045d00
   Address: 66045d00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_66045d00(uint param_1,undefined4 param_2,int *param_3,ushort *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_66075318 == 0) {
    return -0x7ffbfff9;
  }
  if (param_1 <= *(int *)((int)DAT_66075314 + 0xc) - 1U) {
    puVar1 = FUN_66058ce0(DAT_66075314,param_1);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_66058b10((int)puVar1);
      if ((void *)*puVar1 == (void *)0x0) {
        iVar2 = -0x7ffbfdbb;
      }
      if (iVar2 == 0) {
        iVar2 = FUN_66046910((void *)*puVar1,param_2,param_3,param_4);
      }
      return iVar2;
    }
  }
  return -0x7ffbfdbb;
}


