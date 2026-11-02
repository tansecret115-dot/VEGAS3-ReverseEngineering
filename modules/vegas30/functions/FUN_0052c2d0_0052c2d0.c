/* Module: vegas30.exe
   Function: FUN_0052c2d0
   Address: 0052c2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052c2d0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  int local_4;
  
  iVar3 = 0;
  if (((param_2 != 0) && (*(int *)(param_1 + 0xadc) == 1)) &&
     (-1 < *(int *)(*(int *)(param_2 + 8) + 0x18))) {
    if (*(int *)(param_1 + 0xc9c) != 0) {
      FUN_0047df40(*(int *)(param_1 + 0xc9c),0,0,0,0);
      *(undefined4 *)(param_1 + 0xc9c) = 0;
    }
    if (*(int *)(param_1 + 0xbc8) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    }
    iVar1 = *piVar2;
    if (0 < iVar1) {
      do {
        FUN_005bffc0(0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    FUN_004582a0(param_1,&local_8,&local_10);
    FUN_0047df40(param_2 + 0x98,local_8 - *(uint *)(param_2 + 0x18),
                 (local_4 - *(int *)(param_2 + 0x1c)) - (uint)(local_8 < *(uint *)(param_2 + 0x18)),
                 local_10,local_c);
    *(int *)(param_1 + 0xc9c) = param_2 + 0x98;
    FUN_005bffc0(local_8,local_4,local_10,local_c);
    FUN_004530a0(param_1,0);
  }
  return;
}


