/* Module: mcplug.dll
   Function: FUN_00404490
   Address: 00404490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00404490(int param_1,uint param_2,int param_3,undefined4 *param_4,undefined4 param_5,
            int *param_6,int *param_7,int *param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0xffffffff);
  *param_4 = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    ReleaseMutex(*(HANDLE *)(param_1 + 0x10));
    return 0x8004e007;
  }
  uVar1 = *(uint *)(param_1 + 0x90);
  iVar3 = *(int *)(param_1 + 0x94);
  if ((param_2 != uVar1 - 1) || (param_3 != iVar3 - (uint)(uVar1 == 0))) {
    if ((iVar3 <= param_3) && ((iVar3 < param_3 || (uVar1 < param_2)))) {
      iVar2 = iVar3 + (uint)(0xfffffff5 < uVar1);
      if ((param_3 <= iVar2) &&
         (((param_3 < iVar2 || (param_2 < uVar1 + 10)) && (iVar3 <= param_3)))) {
        if (iVar3 < param_3) goto LAB_0040451d;
        while (uVar1 < param_2) {
LAB_0040451d:
          do {
            iVar3 = mpegInGetNextFrame(*(undefined4 *)(param_1 + 0x24));
            if ((iVar3 != 0) && (iVar3 != 2)) {
              ReleaseMutex(*(HANDLE *)(param_1 + 0x10));
              return 0x80004005;
            }
            uVar1 = *(uint *)(param_1 + 0x90);
            *(uint *)(param_1 + 0x90) = uVar1 + 1;
            iVar3 = *(int *)(param_1 + 0x94) + (uint)(0xfffffffe < uVar1);
            *(int *)(param_1 + 0x94) = iVar3;
          } while (iVar3 < param_3);
          if (param_3 < iVar3) break;
          uVar1 = *(uint *)(param_1 + 0x90);
        }
      }
    }
    if ((param_2 != *(uint *)(param_1 + 0x90)) || (param_3 != *(int *)(param_1 + 0x94))) {
      iVar3 = mpegInSeekFrame(*(undefined4 *)(param_1 + 0x24),param_2);
      if (iVar3 != 0) {
        ReleaseMutex(*(HANDLE *)(param_1 + 0x10));
        return 0x80004005;
      }
      *(uint *)(param_1 + 0x90) = param_2;
      *(int *)(param_1 + 0x94) = param_3;
    }
    iVar3 = mpegInGetNextFrame(*(undefined4 *)(param_1 + 0x24));
    if ((iVar3 != 0) && (iVar3 != 2)) {
      ReleaseMutex(*(HANDLE *)(param_1 + 0x10));
      return 0x80004005;
    }
    uVar1 = *(uint *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = uVar1 + 1;
    *(uint *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + (uint)(0xfffffffe < uVar1);
  }
  *param_4 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x50);
  if (param_8 != (int *)0x0) {
    iVar3 = *(int *)(param_1 + 0x90);
    iVar2 = *(int *)(param_1 + 0x94);
    *param_8 = iVar3 + -1;
    param_8[1] = iVar2 - (uint)(iVar3 == 0);
  }
  if (param_6 != (int *)0x0) {
    *param_6 = param_1 + 0x28;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = param_1 + 0x50;
  }
  return 0;
}


