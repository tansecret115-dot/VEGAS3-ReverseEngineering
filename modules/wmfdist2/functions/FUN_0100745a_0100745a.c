/* Module: wmfdist2.exe
   Function: FUN_0100745a
   Address: 0100745a
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0100745a(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  *(undefined1 *)((int)param_1 + 0x2eb5) = 4;
  uVar2 = 4;
  do {
    uVar2 = uVar2 + (1 << ((&DAT_01001528)[*(byte *)((int)param_1 + 0x2eb5)] & 0x1f));
    *(byte *)((int)param_1 + 0x2eb5) = *(byte *)((int)param_1 + 0x2eb5) + 1;
  } while (uVar2 < (uint)param_1[1]);
  iVar1 = (*(code *)param_1[3000])(param_1[1] + 0x105);
  *param_1 = iVar1;
  return iVar1 != 0;
}


