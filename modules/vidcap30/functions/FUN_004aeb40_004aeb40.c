/* Module: vidcap30.exe
   Function: FUN_004aeb40
   Address: 004aeb40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004aeb40(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)(short)(param_2 >> 0x10);
  iVar2 = iVar3 / 0x78;
  uVar1 = param_2 >> 3 & 1;
  if (iVar2 < 0) {
    iVar3 = (int)((ulonglong)((longlong)iVar3 * 0x77777777) >> 0x20) - iVar3;
    iVar2 = (iVar3 >> 6) - (iVar3 >> 0x1f);
  }
  if ((int)param_2 < 0) {
    iVar3 = (-(uint)(uVar1 != 0) & 0xfffffffe) + 3;
  }
  else {
    iVar3 = (-(uint)(uVar1 != 0) & 0xfffffffe) + 2;
  }
  (**(code **)(param_1 + 0xc0))
            (param_1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xbc),9,0);
  if (0 < iVar2) {
    do {
      (**(code **)(param_1 + 0xc0))
                (param_1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xbc),iVar3,0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(param_1 + 0xc0))
            (param_1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0xbc),8,0);
  return;
}


