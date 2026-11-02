/* Module: vegas30.exe
   Function: FUN_0054c420
   Address: 0054c420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054c420(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = 0;
  puVar4 = &DAT_00644c88;
  do {
    if (*puVar4 == param_2) break;
    puVar4 = puVar4 + 8;
    iVar3 = iVar3 + 1;
  } while (puVar4 < &DAT_00644e28);
  iVar1 = *(int *)(param_1 + 0x550);
  local_c = 0;
  (&DAT_00657628)[iVar1 * 4] = (&DAT_00644c80)[iVar3 * 4];
  (&DAT_0065762c)[iVar1 * 4] = (&DAT_00644c84)[iVar3 * 4];
  uVar2 = *(undefined4 *)(iVar3 * 0x10 + 0x644c8c);
  *(undefined4 *)(&DAT_00657630 + iVar1 * 8) = *(undefined4 *)(&DAT_00644c88 + iVar3 * 8);
  *(undefined4 *)(&DAT_00657634 + iVar1 * 0x10) = uVar2;
  *(undefined2 *)((int)&DAT_0065762c + *(int *)(param_1 + 0x550) * 0x10 + 2) =
       (&DAT_006577c8)[(ushort)(&DAT_00657630)[*(int *)(param_1 + 0x550) * 8]];
  *(int *)(param_1 + 0x550) = *(int *)(param_1 + 0x550) + 1;
  DAT_00644e20 = DAT_00644e20 + 1;
  local_14 = *(undefined4 *)(param_1 + 0x550);
  local_4 = *(undefined4 *)(param_1 + 0x548);
  local_8 = *(undefined4 *)(param_1 + 0x54c);
  local_10 = local_14;
  SendMessageA(*(HWND *)(param_1 + 0x98),0x40b,0,(LPARAM)&local_14);
  SendMessageA(*(HWND *)(param_1 + 0x98),0x422,0xffffffff,0x1ffff);
  return;
}


