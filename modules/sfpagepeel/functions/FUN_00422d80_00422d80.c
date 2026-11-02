/* Module: sfpagepeel.dll
   Function: FUN_00422d80
   Address: 00422d80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00422d80(int param_1,uint param_2)

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
  if (((int)param_2 < 0) + 1 == 2 - (uint)((*(uint *)(param_1 + 0xc) & 8) != 0)) {
    iVar3 = (-(uint)(uVar1 != 0) & 0xfffffffe) + 2;
  }
  else {
    iVar3 = (-(uint)(uVar1 != 0) & 0xfffffffe) + 3;
  }
  (**(code **)(param_1 + 200))
            (param_1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0xc4),9,0);
  if (0 < iVar2) {
    do {
      (**(code **)(param_1 + 200))
                (param_1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0xc4),iVar3,0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(param_1 + 200))
            (param_1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0xc4),8,0);
  return;
}


