/* Module: vidcap30.exe
   Function: FUN_00421be0
   Address: 00421be0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00421be0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  DAT_005ba4b4 = DAT_005ba4b4 | 0x2000;
  uVar2 = FUN_004220e0(param_1);
  piVar1 = *(int **)(param_1 + 0x3e0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x3e4);
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x3e4) = 0;
  if (*(int *)(param_1 + 0x35c) != 0) {
    FUN_00425230(param_1,0);
    uVar2 = (**(code **)(**(int **)(param_1 + 0x35c) + 0x74))(*(int **)(param_1 + 0x35c),0);
    piVar1 = *(int **)(param_1 + 0x35c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x35c) = 0;
  }
  if ((*(int *)(param_1 + 0x3ec) != 0) &&
     (piVar1 = *(int **)(param_1 + 0x3f0), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x24))(piVar1,0,0);
  }
  if (*(int **)(param_1 + 0x3f4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x3f4) + 0xc))(1);
    *(undefined4 *)(param_1 + 0x3f4) = 0;
  }
  if (*(int *)(param_1 + 0x360) != 0) {
    FUN_00421fa0(param_1,*(int *)(param_1 + 0x360));
  }
  if (*(int *)(param_1 + 0x404) != 0) {
    FUN_00421fa0(param_1,*(int *)(param_1 + 0x404));
  }
  piVar1 = *(int **)(param_1 + 0x3ac);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x848);
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x84c);
  *(undefined4 *)(param_1 + 0x848) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 1000);
  *(undefined4 *)(param_1 + 0x84c) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x3f0);
  *(undefined4 *)(param_1 + 1000) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x3ec);
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x3fc);
  *(undefined4 *)(param_1 + 0x3ec) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x3f8);
  *(undefined4 *)(param_1 + 0x3fc) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x854);
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x850);
  *(undefined4 *)(param_1 + 0x854) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x3dc);
  *(undefined4 *)(param_1 + 0x850) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x3dc) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0x3d4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  if ((*(uint *)(param_1 + 0x14c) & 4) == 0) {
    iVar3 = _SfDoesFileExist_4((LPCSTR)(param_1 + 0x684));
    if (iVar3 != 0) {
      DeleteFileA((LPCSTR)(param_1 + 0x684));
    }
  }
  *(undefined4 *)(param_1 + 0x960) = 0;
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xffff7fff;
  *(undefined4 *)(param_1 + 0x3a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfeffffff;
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xff7fffff;
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xffdfffff;
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xffefffff;
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfffbffff;
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xefffffff;
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xf7ffffff;
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xdfffffff;
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xbfffffff;
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfdffffff;
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x148);
  *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) & 0xfffffffe;
  DAT_005ba4b4 = DAT_005ba4b4 & 0xffffdfff;
  return uVar2;
}


