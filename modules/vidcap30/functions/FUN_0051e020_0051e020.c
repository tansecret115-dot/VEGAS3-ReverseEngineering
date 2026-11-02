/* Module: vidcap30.exe
   Function: FUN_0051e020
   Address: 0051e020
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0051e020(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(short)(param_2 >> 0x10);
  if ((param_2 & 8) == 0) {
    uVar2 = (undefined4)(((longlong)iVar1 * (longlong)DAT_00662434) / 0x78);
    uVar3 = *(undefined4 *)(param_1 + 0x100);
  }
  else {
    uVar2 = (undefined4)(((longlong)iVar1 * (longlong)DAT_00662438) / 0x78);
    uVar3 = *(undefined4 *)(param_1 + 0x100);
  }
  iVar1 = param_1 + 0x1c;
  FUN_0051a290(param_1,iVar1,iVar1,uVar2,uVar3);
  FUN_0051d310(param_1,1);
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


