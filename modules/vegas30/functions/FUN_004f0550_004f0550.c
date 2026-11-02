/* Module: vegas30.exe
   Function: FUN_004f0550
   Address: 004f0550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f0550(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_430 [2];
  undefined4 local_428 [6];
  undefined4 local_410 [259];
  undefined4 uStack_4;
  
  if (DAT_0064b474 != (int *)0x0) {
    _SfList_CreateExZ_32(local_428,4,0x10,0x10,2,0,0,0);
    local_430[0] = 0x400;
    (**(code **)(*DAT_0064b474 + 0xc))(DAT_0064b474,local_430);
    FUN_004ed310(local_428[0]);
    _SfList_Destroy_4(local_428[0]);
  }
  if (((DAT_0064762c != 0) && (iVar1 = *(int *)(DAT_0064762c + 0x6c), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x184) != 0)) {
    puVar3 = local_410;
    for (iVar2 = 0x104; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    SendMessageA(*(HWND *)(iVar1 + 0x184),0x602,0,(LPARAM)local_410);
    FUN_004f01a0(uStack_4);
    _SfSetMetricBinary_16(DAT_00647200,0x44e,local_410,0x410);
  }
  return;
}


