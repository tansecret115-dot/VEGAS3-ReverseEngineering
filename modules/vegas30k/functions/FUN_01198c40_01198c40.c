/* Module: vegas30k.dll
   Function: FUN_01198c40
   Address: 01198c40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01198c40(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x74);
  if ((iVar1 <= param_3) &&
     (((iVar1 < param_3 || (*(uint *)(param_1 + 0x70) <= param_2)) &&
      (*(int *)(param_1 + 0x84) != 0)))) {
    *(uint *)(param_1 + 0x558) = *(uint *)(param_1 + 0x70);
    *(int *)(param_1 + 0x55c) = iVar1;
    *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_1 + 0x800);
    *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x534) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x6fc) = *(undefined4 *)(param_1 + 0x804);
    *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(param_1 + 0x808);
    *(undefined4 *)(param_1 + 0x6f4) = *(undefined4 *)(param_1 + 0x80c);
    if (*(double *)(param_1 + 0x50) != *(double *)(param_1 + 0x60)) {
      piVar2 = *(int **)(param_1 + 0x608);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
      for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x5b]) {
        piVar3 = (int *)*piVar2;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x2c))
                    (piVar3,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),0);
        }
      }
    }
    if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x40)) {
      piVar2 = *(int **)(param_1 + 0x608);
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x48);
      for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x5b]) {
        piVar3 = (int *)*piVar2;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x34))(piVar3,*(undefined4 *)(param_1 + 0x40));
        }
      }
    }
    *(undefined4 *)(param_1 + 0x84) = 0;
    uVar4 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar4;
}


