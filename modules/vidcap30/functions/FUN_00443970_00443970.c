/* Module: vidcap30.exe
   Function: FUN_00443970
   Address: 00443970
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00443970(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined1 *param_6,undefined1 *param_7,int param_8)

{
  int iVar1;
  float10 fVar2;
  undefined1 local_1;
  
  FUN_0042f4b0(param_2,1);
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 0x20) = param_4;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(undefined4 *)(param_1 + 0x24) = param_5;
  *(undefined4 *)(param_1 + 0x2c) = param_5;
  *(undefined4 *)(param_1 + 0x38) = 0;
  fVar2 = (float10)FUN_0042ed90(param_2);
  *(double *)(param_1 + 0x40) = (double)fVar2;
  fVar2 = (float10)FUN_0042ee90(param_2);
  *(double *)(param_1 + 0x48) = (double)fVar2;
  if (param_6 == (undefined1 *)0x0) {
    param_6 = &local_1;
  }
  iVar1 = FUN_00443b80(param_2,param_1,param_6);
  if (-1 < iVar1) {
    if (param_7 == (undefined1 *)0x0) {
      param_7 = &local_1;
    }
    iVar1 = FUN_00443c20(param_2,param_1,param_7);
    if (-1 < iVar1) {
      if (*(int *)(param_1 + 0x3c) == 0) {
        iVar1 = FUN_00443f90(param_2,param_1,&local_1);
      }
      if (-1 < iVar1) {
        if (*(int *)(param_1 + 0x18) == 0) {
          iVar1 = FUN_00444070(param_2,param_1,&local_1);
        }
        if (-1 < iVar1) {
          FUN_00443f60(param_2,param_1,0);
          FUN_00443f20(param_2,param_1,0xfffffffd,0xffffffff);
          FUN_00443b20(param_1,-(param_8 != 0) & 0x10,0x10);
          FUN_00444250(param_2,param_1,0,0,0,0,0,0,0);
        }
      }
    }
  }
  FUN_0042f5d0(param_2,1);
  return iVar1;
}


