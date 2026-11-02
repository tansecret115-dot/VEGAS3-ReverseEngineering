/* Module: sfpaplug.dll
   Function: FUN_0040bb80
   Address: 0040bb80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040bb80(void *this,undefined4 param_1,int param_2,int *param_3)

{
  *param_3 = 0;
  if ((param_2 != 0) && (*(int *)((int)this + 0x220) != 0)) {
    *param_3 = *(int *)(*(int *)(*(int *)((int)this + 0x220) + 0x424) + 4);
  }
  if (*param_3 == 0) {
    *param_3 = 0xac44;
  }
  return 0;
}


