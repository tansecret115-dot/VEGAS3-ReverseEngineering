/* Module: vegas30.exe
   Function: FUN_0044b620
   Address: 0044b620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044b620(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  HMENU hMenu;
  uint uEnable;
  int iVar2;
  int iVar3;
  int iVar4;
  void *_Memory;
  undefined4 *puVar5;
  int local_478;
  undefined4 local_474;
  undefined4 local_470 [34];
  undefined4 *local_3e8;
  undefined4 local_3c8;
  undefined4 local_3c4;
  
  puVar5 = local_470;
  for (iVar4 = 0x11c; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_474 = 0;
  local_3c8 = *param_1;
  local_3c4 = param_1[1];
  local_3e8 = DAT_0064b138;
  piVar1 = (int *)FUN_004452b0(local_470);
  hMenu = (HMENU)FUN_004047d0(0x332,0);
  if (piVar1 == (int *)0x0) {
    local_478 = 0;
  }
  else {
    local_478 = *piVar1;
  }
  uEnable = (uint)(local_478 < 1);
  EnableMenuItem(hMenu,0xa7b3,uEnable);
  EnableMenuItem(hMenu,0xa7b4,uEnable);
  EnableMenuItem(hMenu,0xa7b5,uEnable);
  iVar4 = FUN_00404830(param_2,hMenu,&stack0x0000000c,2);
  if ((iVar4 != 0) && (*(int *)(DAT_0064762c + 0xa0) != 0)) {
    FUN_0044c6f0(*(int *)(DAT_0064762c + 0xa0));
  }
  FUN_005b83b0(local_3e8,1);
  switch(iVar4) {
  case 0xa7b3:
  case 0xa7b4:
    iVar2 = FUN_00445380(local_470,0x23b,0,0);
    if ((-1 < iVar2) && (iVar2 = FUN_00445590(local_470), -1 < iVar2)) {
      iVar2 = 0;
      if (0 < local_478) {
        do {
          if (piVar1 == (int *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *piVar1;
          }
          if ((iVar2 < 0) || (iVar3 + -1 < iVar2)) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(piVar1[2] + iVar2 * 4);
          }
          if (iVar3 != 0) {
            *(uint *)(iVar3 + 0x78) =
                 (*(uint *)(iVar3 + 0x78) ^ (uint)(iVar4 == 0xa7b3)) & 1 ^ *(uint *)(iVar3 + 0x78);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < local_478);
      }
      FUN_004457c0(local_470,0);
      *(uint *)*local_3e8 = *(uint *)*local_3e8 | 0x100;
      *(uint *)*local_3e8 = *(uint *)*local_3e8 | 8;
      DAT_0064767c = DAT_0064767c | 0x800;
    }
    break;
  case 0xa7b5:
    iVar4 = FUN_00445380(local_470,0x23b,0,0);
    if ((-1 < iVar4) && (iVar4 = FUN_00445590(local_470), -1 < iVar4)) {
      while (local_478 = local_478 + -1, -1 < local_478) {
        if (piVar1 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar1;
        }
        if ((local_478 < 0) || (iVar4 + -1 < local_478)) {
          _Memory = (void *)0x0;
        }
        else {
          _Memory = *(void **)(piVar1[2] + local_478 * 4);
        }
        if (_Memory != (void *)0x0) {
          _SfVideoFilterCache_UnInit_4(_Memory);
          free(_Memory);
          *(undefined4 *)(piVar1[2] + local_478 * 4) = 0;
          _SfList_DeleteList_16(piVar1,local_478,1,1);
        }
      }
      FUN_004457c0(local_470,0);
      *(uint *)*local_3e8 = *(uint *)*local_3e8 | 0x100;
      *(uint *)*local_3e8 = *(uint *)*local_3e8 | 8;
      DAT_0064767c = DAT_0064767c | 0x800;
    }
    break;
  case 0xa7ba:
    local_474 = 1;
  }
  FUN_005b84d0(local_3e8,1);
  return local_474;
}


