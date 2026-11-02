/* Module: vegas30.exe
   Function: FUN_005f0120
   Address: 005f0120
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005f0120(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int local_8;
  
  local_8 = 0;
  if ((*(byte *)(param_1 + 0x134) & 1) != 0) {
    return -0x7ffb1f56;
  }
  InterlockedIncrement(&DAT_0065e144);
  piVar4 = *(int **)(param_1 + 0x130);
  bVar3 = true;
  if (piVar4 != (int *)0x0) {
    iVar1 = *piVar4;
    if (0 < iVar1) {
      piVar4 = (int *)piVar4[2];
      iVar5 = iVar1;
      do {
        iVar2 = *piVar4;
        if (*(int *)(iVar2 + 4) == 2) {
          if ((*(int *)(iVar2 + 0x5c) != 0) ||
             ((iVar2 == DAT_0064b148 || ((*(byte *)(iVar2 + 0x8c) & 8) != 0)))) {
LAB_005f019e:
            bVar3 = false;
          }
        }
        else if ((*(int *)(iVar2 + 4) == 3) && (iVar2 == DAT_0064b14c)) goto LAB_005f019e;
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (!bVar3) {
        local_8 = -0x7ffb1ffb;
        goto LAB_005f0266;
      }
    }
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x130) + 8) + iVar5 * 4);
        if (*(int *)(iVar2 + 4) == 2) {
          piVar4 = *(int **)(iVar2 + 0x60);
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 0x2c))(piVar4,0,0);
          }
          if ((param_2 != 0) && ((*(byte *)(iVar2 + 0x8c) & 4) != 0)) {
            FUN_005f7a60();
          }
        }
        if ((*(int *)(param_1 + 0x140) == 0) && ((*(uint *)(iVar2 + 0x8c) & 0x10) != 0)) {
          *(uint *)(iVar2 + 0x8c) = *(uint *)(iVar2 + 0x8c) & 0xffffffec;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
  }
  piVar4 = *(int **)(param_1 + 0x14c);
  *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 0x30;
  if ((piVar4 != (int *)0x0) && (local_8 = (**(code **)(*piVar4 + 0x24))(piVar4), local_8 < 0)) {
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) & 0xffffffcf;
  }
LAB_005f0266:
  InterlockedDecrement(&DAT_0065e144);
  return local_8;
}


