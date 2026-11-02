/* Module: mp3plug.dll
   Function: FUN_5f71a490
   Address: 5f71a490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f71a490(int param_1,void *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*param_4 == 1) {
    if ((char)param_4[8] == '\0') {
      iVar1 = 9;
    }
    else {
      iVar1 = 0x11;
    }
  }
  else if ((char)param_4[8] == '\0') {
    iVar1 = 0x11;
  }
  else {
    iVar1 = 0x20;
  }
  iVar1 = ((int)((param_4[2] - param_4[5]) + ((uint)(param_4[2] - param_4[5] >> 2) >> 0x1d)) >> 3) -
          iVar1;
  iVar3 = *(int *)((int)param_2 + 0x10);
  iVar2 = FUN_5f7141a0((int)param_2);
  if (iVar2 < iVar1) {
    iVar2 = FUN_5f7141a0((int)param_2);
    iVar2 = iVar1 - iVar2;
    if (0 < iVar2 * 8) {
      *(uint *)((int)param_2 + 0x1c) =
           *(int *)((int)param_2 + 0x1c) + iVar2 * 8 & *(int *)((int)param_2 + 0xc) - 1U;
      *(int *)((int)param_2 + 0x18) = *(int *)((int)param_2 + 0x18) + iVar2 * 8;
      *(int *)((int)param_2 + 0x10) = *(int *)((int)param_2 + 0x10) + iVar2 * -8;
    }
  }
  iVar2 = FUN_5f7142c0(param_2,param_1,iVar1);
  if (iVar2 != iVar1) {
    return 0;
  }
  iVar2 = *param_3;
  if (iVar2 <= iVar3 >> 3) {
    iVar3 = *(int *)((int)param_2 + 0x10);
    if (0 < iVar3) {
      *(int *)((int)param_2 + 0x18) = *(int *)((int)param_2 + 0x18) + iVar3;
      *(int *)((int)param_2 + 0x10) = *(int *)((int)param_2 + 0x10) - iVar3;
      *(uint *)((int)param_2 + 0x1c) =
           iVar3 + *(int *)((int)param_2 + 0x1c) & *(int *)((int)param_2 + 0xc) - 1U;
      iVar2 = *param_3;
    }
    iVar3 = (iVar2 + iVar1) * 8;
    if (0 < iVar3) {
      iVar1 = (iVar2 + iVar1) * -8;
      *(int *)((int)param_2 + 0x10) = *(int *)((int)param_2 + 0x10) + iVar3;
      *(int *)((int)param_2 + 0x18) = *(int *)((int)param_2 + 0x18) + iVar1;
      *(uint *)((int)param_2 + 0x1c) =
           iVar1 + *(int *)((int)param_2 + 0x1c) & *(int *)((int)param_2 + 0xc) - 1U;
    }
    return 1;
  }
  return 0;
}


