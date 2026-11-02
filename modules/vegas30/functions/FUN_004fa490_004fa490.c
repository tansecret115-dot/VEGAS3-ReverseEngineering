/* Module: vegas30.exe
   Function: FUN_004fa490
   Address: 004fa490
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004fa490(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_c;
  int local_8 [2];
  
  iVar3 = *(int *)(param_1 + 0x158) * 10;
  if ((*(int **)(param_1 + 0x178) != (int *)0x0) &&
     (iVar2 = **(int **)(param_1 + 0x178), iVar2 != 0)) {
    uVar1 = _SfGetUIFont_4(100);
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        FUN_0050aaa0(*(int *)(*(int *)(*(int *)(param_1 + 0x178) + 8) + iVar4 * 4) + 0x48,&local_c);
        _SfGetTextExtent_16(uVar1,local_c,0xffffffff,local_8);
        if (iVar3 <= local_8[0]) {
          iVar3 = local_8[0];
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
  }
  iVar2 = GetSystemMetrics(2);
  return iVar2 + 10 + iVar3;
}


