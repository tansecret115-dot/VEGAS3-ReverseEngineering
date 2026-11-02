/* Module: mp3rw.dll
   Function: FUN_00411490
   Address: 00411490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00411490(void *this,byte *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    param_3 = 7;
  }
  iVar1 = FUN_004115d0(this,param_1);
  if (iVar1 < 0) {
    *param_2 = 1;
    *(int *)param_1 = param_3;
    uVar2 = FUN_004115b0(this);
    return uVar2;
  }
  if (*(int *)param_1 == -1) {
    *param_2 = 0;
    return 0;
  }
  if (*(int *)param_1 == 0) {
    *param_2 = 1;
    uVar2 = FUN_004115b0(this);
    return uVar2;
  }
  *param_2 = 0;
  return 0;
}


