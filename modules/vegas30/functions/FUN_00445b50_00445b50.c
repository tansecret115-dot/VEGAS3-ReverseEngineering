/* Module: vegas30.exe
   Function: FUN_00445b50
   Address: 00445b50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00445bd1) */

longlong FUN_00445b50(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 local_8;
  
  piVar1 = param_1;
  iVar3 = 0;
  local_8._0_4_ = 0;
  local_8._4_4_ = (int *)0x0;
  local_8 = 0;
  if ((param_1 != (int *)0x0) && (iVar4 = param_1[0x2b], iVar4 != 0)) {
    switch(param_1[0x2a]) {
    case 1:
      local_8 = *(longlong *)(iVar4 + 0x20);
      break;
    case 2:
    case 3:
    case 4:
      local_8 = FUN_004a0e90(DAT_00647630);
      break;
    case 5:
      iVar3 = (**(code **)(*(int *)param_1[0x2c] + 0x28))((int *)param_1[0x2c],&param_1);
      local_8 = CONCAT44(local_8._4_4_,(undefined4)local_8);
      if ((-1 < iVar3) &&
         (local_8 = CONCAT44(local_8._4_4_,(undefined4)local_8), param_1 != (int *)0x0)) {
        (**(code **)(*param_1 + 0x38))(param_1,&local_8);
        (**(code **)(*local_8._4_4_ + 8))(local_8._4_4_);
      }
      break;
    case 6:
      if (*(int **)(iVar4 + 0x130) == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = **(int **)(iVar4 + 0x130);
      }
      if (0 < iVar4) {
        do {
          iVar2 = FUN_005f1430(iVar3);
          if (*(int *)(iVar2 + 4) == 3) {
            lVar5 = ftol();
            if (local_8 <= lVar5) {
              local_8 = lVar5;
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar4);
      }
      break;
    case 7:
      local_8 = *(longlong *)(iVar4 + 0x78);
      break;
    case 8:
      local_8 = *(longlong *)(iVar4 + 0x80);
    }
  }
  if ((piVar1[0x2d] != 0) && ((*(byte *)(piVar1[0x2d] + 0x78) & 0x20) != 0)) {
    return 0;
  }
  return local_8;
}


