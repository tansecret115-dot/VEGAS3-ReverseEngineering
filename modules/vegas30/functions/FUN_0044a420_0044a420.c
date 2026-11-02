/* Module: vegas30.exe
   Function: FUN_0044a420
   Address: 0044a420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044a420(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *_Memory;
  void *pvVar4;
  undefined4 uVar5;
  
  piVar2 = (int *)FUN_004452b0(param_1);
  if ((piVar2 != (int *)0x0) && (iVar1 = *piVar2, iVar1 != 0)) {
    if ((param_2 < 0) || (iVar1 + -1 < param_2)) {
      _Memory = (void *)0x0;
    }
    else {
      _Memory = *(void **)(piVar2[2] + param_2 * 4);
    }
    pvVar4 = _Memory;
    if (((*(void **)(param_1 + 0xb4) != (void *)0x0) &&
        (pvVar4 = *(void **)(param_1 + 0xb4), _Memory != (void *)0x0)) ||
       (_Memory = pvVar4, pvVar4 != (void *)0x0)) {
      if ((((*(uint *)(param_1 + 0x9c) & 0x200) == 0) && (*(int *)(param_1 + 0xa8) == 1)) ||
         ((*(int *)(param_1 + 0xa8) == 7 || (*(int *)(param_1 + 0xa8) == 8)))) {
        uVar5 = 0x228;
      }
      else {
        uVar5 = 0x22b;
      }
      iVar3 = FUN_00445380(param_1,uVar5,0,0);
      if (iVar3 < 0) {
        return;
      }
      iVar3 = FUN_00445590(param_1);
      if (iVar3 < 0) {
        return;
      }
      FUN_00445080(param_1,0);
      FUN_005b83b0(*(undefined4 *)(param_1 + 0x88),1);
      if (_Memory != (void *)0x0) {
        _SfVideoFilterCache_UnInit_4(_Memory);
        free(_Memory);
        *(undefined4 *)(piVar2[2] + param_2 * 4) = 0;
        _SfList_DeleteList_16(piVar2,param_2,1,1);
      }
      FUN_005b84d0(*(undefined4 *)(param_1 + 0x88),1);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xb4) = 0;
        switch(*(undefined4 *)(param_1 + 0xa8)) {
        case 1:
          FUN_0044bfa0(param_1,*(undefined4 *)(param_1 + 0xac));
          break;
        case 2:
          FUN_0044c250(param_1,*(undefined4 *)(param_1 + 0xac),1);
          break;
        case 3:
          FUN_0044c250(param_1,*(undefined4 *)(param_1 + 0xac),0);
          break;
        case 4:
          FUN_0044c4d0(param_1,*(undefined4 *)(param_1 + 0x88),1);
          break;
        case 5:
          FUN_0044c390(param_1,*(undefined4 *)(param_1 + 0xac));
          break;
        case 6:
          FUN_0044c2f0(param_1,*(undefined4 *)(param_1 + 0xac),1);
          break;
        case 7:
          FUN_0044c030(param_1,*(undefined4 *)(param_1 + 0xac));
          break;
        case 8:
          FUN_0044c140(param_1,*(undefined4 *)(param_1 + 0xac));
        }
        *(uint *)**(undefined4 **)(param_1 + 0x88) =
             *(uint *)**(undefined4 **)(param_1 + 0x88) | 0x100;
        *(uint *)**(undefined4 **)(param_1 + 0x88) = *(uint *)**(undefined4 **)(param_1 + 0x88) | 8;
        DAT_0064767c = DAT_0064767c | 0x800;
        if (iVar1 == 1) {
          FUN_0053ec50(*(undefined4 *)(param_1 + 0x80),0,0);
          FUN_00445080(param_1,0);
          InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)0x0,0);
        }
      }
      FUN_004457c0(param_1,0);
    }
  }
  FUN_00453250(DAT_00647630,0);
  return;
}


