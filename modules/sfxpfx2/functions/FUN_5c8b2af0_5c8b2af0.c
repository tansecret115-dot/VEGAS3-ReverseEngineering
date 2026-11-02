/* Module: sfxpfx2.dll
   Function: FUN_5c8b2af0
   Address: 5c8b2af0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8b2af0(byte *param_1,uint param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  iVar1 = (int)(short)(param_2 >> 0x10);
  if ((param_2 & 8) == 0) {
    iVar1 = (int)(((longlong)iVar1 * (longlong)DAT_5c8e9734) / 0x78);
    uVar3 = *(uint *)(param_1 + 0x100);
  }
  else {
    iVar1 = (int)(((longlong)iVar1 * (longlong)DAT_5c8e9738) / 0x78);
    uVar3 = *(uint *)(param_1 + 0x100);
  }
  pbVar2 = param_1 + 0x1c;
  FUN_5c8aedc0((int)param_1,(int *)pbVar2,(int)pbVar2,iVar1,uVar3);
  FUN_5c8b1e40(param_1,1);
  (**(code **)(param_1 + 0x120))
            (param_1,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x11c),9,pbVar2,
             *(undefined4 *)(param_1 + 0x100));
  (**(code **)(param_1 + 0x120))
            (param_1,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x11c),5,pbVar2,
             *(undefined4 *)(param_1 + 0x100));
  (**(code **)(param_1 + 0x120))
            (param_1,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x11c),8,pbVar2,
             *(undefined4 *)(param_1 + 0x100));
  return;
}


