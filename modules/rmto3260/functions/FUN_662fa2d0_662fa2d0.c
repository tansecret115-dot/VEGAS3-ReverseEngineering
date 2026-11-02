/* Module: rmto3260.dll
   Function: FUN_662fa2d0
   Address: 662fa2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_662fa2d0(void *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint local_8;
  
  if (*(ushort *)((int)param_1 + 0x38) < 4) {
    return -0x7ffbfffc;
  }
  if (*(char *)((int)param_1 + 0xb4) == '\0') {
    return -0x7ffbfffc;
  }
  iVar2 = FUN_662fa8c0(param_1,4,(short *)&local_8);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(**(int **)((int)param_1 + 4) + 0x24))();
    iVar2 = (**(code **)(**(int **)((int)param_1 + 4) + 0x20))(*(int *)((int)param_1 + 0x84) + 4,0);
    if (iVar2 == 0) {
      puVar1 = (uint *)((int)param_1 + 0x88);
      uVar5 = *(int *)((int)param_1 + 0x88) + (local_8 & 0xffff);
      *puVar1 = uVar5;
      uVar5 = FUN_662f2c20(uVar5);
      *puVar1 = uVar5;
      iVar4 = (**(code **)(**(int **)((int)param_1 + 4) + 0x30))(puVar1,4);
      if (iVar4 != 4) {
        iVar2 = (**(code **)(**(int **)((int)param_1 + 4) + 4))();
      }
      if (iVar2 == 0) {
        iVar2 = (**(code **)(**(int **)((int)param_1 + 4) + 0x20))(uVar3,0);
      }
    }
  }
  *(undefined1 *)((int)param_1 + 0xb4) = 0;
  *(undefined4 *)((int)param_1 + 0x88) = 0;
  return iVar2;
}


