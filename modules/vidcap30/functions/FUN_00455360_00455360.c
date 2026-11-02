/* Module: vidcap30.exe
   Function: FUN_00455360
   Address: 00455360
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00455360(int param_1)

{
  LPCVOID pMem;
  int *piVar1;
  int iVar2;
  int iVar3;
  HGLOBAL pvVar4;
  undefined4 local_4;
  
  iVar2 = param_1;
  FUN_00421be0(param_1);
  if (*(int *)(iVar2 + 0x840) != 0) {
    param_1 = 0;
    iVar3 = FUN_0042c7a0(iVar2,&param_1);
    if (-1 < iVar3) {
      DAT_005bb568 = param_1;
    }
    local_4 = 0;
    iVar3 = FUN_0042e110(&local_4);
    if (-1 < iVar3) {
      DAT_005bb56c = local_4;
    }
    pMem = *(LPCVOID *)(iVar2 + 0x840);
    if (pMem != (LPCVOID)0x0) {
      FUN_0042d890();
      pvVar4 = GlobalHandle(pMem);
      GlobalUnlock(pvVar4);
      pvVar4 = GlobalHandle(pMem);
      GlobalFree(pvVar4);
    }
    *(undefined4 *)(iVar2 + 0x840) = 0;
    *(undefined4 *)(iVar2 + 0x844) = 0;
  }
  piVar1 = *(int **)(iVar2 + 0x510);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(iVar2 + 0x7c0);
  *(undefined4 *)(iVar2 + 0x510) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(iVar2 + 0x3b0);
  *(undefined4 *)(iVar2 + 0x7c0) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(iVar2 + 0x3c8);
  *(undefined4 *)(iVar2 + 0x3b0) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(iVar2 + 0x3cc);
  *(undefined4 *)(iVar2 + 0x3c8) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(iVar2 + 0x3d0);
  *(undefined4 *)(iVar2 + 0x3cc) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(iVar2 + 0x358);
  *(undefined4 *)(iVar2 + 0x3d0) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(iVar2 + 0x354);
  *(undefined4 *)(iVar2 + 0x358) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(iVar2 + 0x404);
  *(undefined4 *)(iVar2 + 0x354) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(iVar2 + 0x360);
  *(undefined4 *)(iVar2 + 0x404) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(iVar2 + 0x350);
  *(undefined4 *)(iVar2 + 0x360) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(iVar2 + 0x3b4);
  *(undefined4 *)(iVar2 + 0x350) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(iVar2 + 0x3b4) = 0;
  *(undefined4 *)(iVar2 + 0x148) = *(undefined4 *)(iVar2 + 0x148);
  *(uint *)(iVar2 + 0x14c) = *(uint *)(iVar2 + 0x14c) & 0xffffffbf;
  *(undefined4 *)(iVar2 + 0x148) = *(undefined4 *)(iVar2 + 0x148);
  *(uint *)(iVar2 + 0x14c) = *(uint *)(iVar2 + 0x14c) & 0xffffff7f;
  *(undefined4 *)(iVar2 + 0x148) = *(undefined4 *)(iVar2 + 0x148);
  *(uint *)(iVar2 + 0x14c) = *(uint *)(iVar2 + 0x14c) & 0xffffffef;
  *(undefined4 *)(iVar2 + 0x148) = *(undefined4 *)(iVar2 + 0x148);
  *(uint *)(iVar2 + 0x14c) = *(uint *)(iVar2 + 0x14c) & 0xffffffdf;
  *(uint *)(iVar2 + 0x148) = *(uint *)(iVar2 + 0x148) & 0xfffdffff;
  *(undefined4 *)(iVar2 + 0x14c) = *(undefined4 *)(iVar2 + 0x14c);
  *(undefined4 *)(iVar2 + 0x148) = *(undefined4 *)(iVar2 + 0x148);
  *(uint *)(iVar2 + 0x14c) = *(uint *)(iVar2 + 0x14c) & 0xfffffffb;
  *(undefined4 *)(iVar2 + 0x3b8) = 0;
  *(undefined4 *)(iVar2 + 0x3bc) = 0;
  *(undefined4 *)(iVar2 + 0x3c0) = 0;
  *(undefined4 *)(iVar2 + 0x3c4) = 0;
  *(undefined4 *)(iVar2 + 0x368) = 0;
  *(uint *)(iVar2 + 0x148) = *(uint *)(iVar2 + 0x148) & 0xfffeffff;
  *(undefined4 *)(iVar2 + 0x3a0) = 0;
  *(undefined4 *)(iVar2 + 0x36c) = 0;
  *(undefined4 *)(iVar2 + 0x370) = 0;
  *(undefined4 *)(iVar2 + 0x374) = 0;
  *(undefined2 *)(iVar2 + 0x380) = 0;
  *(undefined4 *)(iVar2 + 0x3a4) = 0;
  *(undefined4 *)(iVar2 + 0x14c) = *(undefined4 *)(iVar2 + 0x14c);
  return;
}


