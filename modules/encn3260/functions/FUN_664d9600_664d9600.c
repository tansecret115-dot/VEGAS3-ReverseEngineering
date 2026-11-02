/* Module: encn3260.dll
   Function: FUN_664d9600
   Address: 664d9600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d9600(void *this,undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(*(int *)((int)this + 8) + 0x12) == 0) {
    return 0x80040009;
  }
  *param_1 = 2;
  param_1[1] = 0;
  param_1[3] = 200;
  *(undefined4 *)(param_1 + 6) = **(undefined4 **)((int)this + 8);
  FUN_664db860(&local_c,param_2);
  *(undefined4 *)(param_1 + 10) = local_c;
  *(undefined4 *)(param_1 + 0xe) = local_8;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(*(int *)((int)this + 8) + 6);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(*(int *)((int)this + 8) + 10);
  uVar1 = *(undefined4 *)(*(int *)((int)this + 8) + 0xe);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 0x1a) = uVar1;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined2 *)(param_1 + 4) = 6;
  return 0;
}


