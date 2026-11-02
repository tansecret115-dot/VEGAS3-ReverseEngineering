/* Module: vidcap30.exe
   Function: FUN_00429710
   Address: 00429710
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00429710(int param_1)

{
  HRESULT HVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0x360) == 0) {
    return -0x7ffb1f7c;
  }
  if ((*(uint *)(param_1 + 0x148) & 0x100000) != 0) {
    return 1;
  }
  iVar2 = 4;
  bVar5 = true;
  piVar3 = &DAT_005a35a8;
  piVar4 = (int *)(param_1 + 0x3b8);
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    if ((*(uint *)(param_1 + 0x14c) & 0x10) != 0) {
      HVar1 = CoCreateInstance((IID *)&DAT_005a2de8,(LPUNKNOWN)0x0,1,(IID *)&DAT_005a1ca8,
                               (LPVOID *)(param_1 + 0x3ac));
      if (HVar1 < 0) {
        return HVar1;
      }
      iVar2 = (**(code **)(**(int **)(param_1 + 0x350) + 0xc))
                        (*(int **)(param_1 + 0x350),*(LPVOID *)(param_1 + 0x3ac),
                         L"SF:DV Video Decoder");
      if (iVar2 < 0) {
        return iVar2;
      }
    }
    iVar2 = (**(code **)(**(int **)(param_1 + 0x3b4) + 0x1c))
                      (*(int **)(param_1 + 0x3b4),&DAT_005a2428,&DAT_005a35a8,
                       *(undefined4 *)(param_1 + 0x360),0,0);
  }
  else {
    if (((DAT_005bb4b4 != 0) && (*(int *)(param_1 + 0x840) == 0)) &&
       ((*(uint *)(param_1 + 0x14c) & 2) == 0)) {
      return 0;
    }
    iVar2 = (**(code **)(**(int **)(param_1 + 0x3b4) + 0x1c))
                      (*(int **)(param_1 + 0x3b4),&DAT_005a2428,&DAT_005a35f8,
                       *(int *)(param_1 + 0x360),0,0);
  }
  if (iVar2 == 0x4027e) {
    *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x40000;
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
    iVar2 = 0;
  }
  iVar2 = FUN_00429860(param_1,iVar2);
  return iVar2;
}


