/* Module: vegas30k.dll
   Function: FUN_010ab5a0
   Address: 010ab5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010ab5a0(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(short)(param_2 >> 0x10);
  if ((param_2 & 8) == 0) {
    uVar2 = (undefined4)(((longlong)iVar1 * (longlong)DAT_0128e924) / 0x78);
    uVar3 = *(undefined4 *)(param_1 + 0x100);
  }
  else {
    uVar2 = (undefined4)(((longlong)iVar1 * (longlong)DAT_0128e928) / 0x78);
    uVar3 = *(undefined4 *)(param_1 + 0x100);
  }
  iVar1 = param_1 + 0x1c;
  FUN_010a7810(param_1,iVar1,iVar1,uVar2,uVar3);
  FUN_010aa890(param_1,1);
  (**(code **)(param_1 + 0x120))
            (param_1,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x11c),9,iVar1,
             *(undefined4 *)(param_1 + 0x100));
  (**(code **)(param_1 + 0x120))
            (param_1,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x11c),5,iVar1,
             *(undefined4 *)(param_1 + 0x100));
  (**(code **)(param_1 + 0x120))
            (param_1,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x11c),8,iVar1,
             *(undefined4 *)(param_1 + 0x100));
  return;
}


