/* Module: sfpaplug.dll
   Function: FUN_00410980
   Address: 00410980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00410980(void *this,undefined4 param_1,int param_2,int *param_3)

{
  *param_3 = 0;
  if ((param_2 != 0) && (*(int *)((int)this + 0x21c) != 0)) {
    *param_3 = *(int *)(*(int *)(*(int *)((int)this + 0x21c) + 0x424) + 4);
  }
  if (*param_3 == 0) {
    *param_3 = 0xac44;
  }
  return 0;
}


