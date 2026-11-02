/* Module: rmbe3260.dll
   Function: FUN_66017e30
   Address: 66017e30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66017e30(int param_1,undefined4 *param_2)

{
  void *this;
  int iVar1;
  
  this = (void *)(param_1 + -0x14);
  iVar1 = FUN_66017d60(this,(int)param_2);
  if (iVar1 < 0) {
    return 0x80070057;
  }
  if ((void *)param_2[3] != (void *)0x0) {
    FUN_66017ce0(this,(void *)param_2[3]);
  }
  if ((void *)param_2[6] != (void *)0x0) {
    FUN_66017c60(this,(void *)param_2[6]);
  }
  if (*(void **)((int)param_2 + 0x1e) != (void *)0x0) {
    FUN_66017c60(this,*(void **)((int)param_2 + 0x1e));
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined2 *)(param_2 + 2) = 0;
  *(undefined2 *)((int)param_2 + 10) = 0;
  param_2[3] = 0;
  *(undefined2 *)(param_2 + 4) = 0;
  *(undefined4 *)((int)param_2 + 0x12) = 0;
  *(undefined2 *)((int)param_2 + 0x16) = 0;
  param_2[6] = 0;
  *(undefined2 *)(param_2 + 7) = 0;
  *(undefined4 *)((int)param_2 + 0x1e) = 0;
  return 0;
}


