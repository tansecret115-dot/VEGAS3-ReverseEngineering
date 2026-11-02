/* Module: vidcap30.exe
   Function: FUN_00552940
   Address: 00552940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 FUN_00552940(int *param_1)

{
  int iVar1;
  char cVar2;
  
  if (*(int *)((int)param_1 + 0x1a5) == 0) {
    cVar2 = FUN_00551060(param_1);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x1bd) + 0x52);
  if (*(int *)((int)param_1 + 0x1a5) == iVar1 + 0xd0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x61;
    *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(*(int *)((int)param_1 + 0x1bd) + 0x52);
    (**(code **)(*param_1 + 4))(param_1,3);
    *(undefined4 *)((int)param_1 + 0x1a5) = 0;
  }
  else {
    cVar2 = (**(code **)(*(int *)((int)param_1 + 0x51) + 0x14))(param_1,iVar1);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  *(uint *)(*(int *)((int)param_1 + 0x1bd) + 0x52) =
       *(int *)(*(int *)((int)param_1 + 0x1bd) + 0x52) + 1U & 7;
  return 1;
}


