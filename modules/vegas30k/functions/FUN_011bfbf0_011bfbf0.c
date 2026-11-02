/* Module: vegas30k.dll
   Function: FUN_011bfbf0
   Address: 011bfbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011bfbf0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0xc) & 0x14) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x208) != 0) {
    iVar1 = FUN_011bf9b0(1);
    uVar2 = FUN_011aafa0(param_1);
    FUN_011aaf70(param_1,uVar2 & 0xffffffef | 4);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffef | 4;
    return iVar1;
  }
  iVar1 = FUN_011bfb90(0);
  if (-1 < iVar1) {
    uVar2 = FUN_011aafa0(param_1);
    FUN_011aaf70(param_1,uVar2 & 0xffffffeb);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffeb;
    if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
      (**(code **)(param_1 + 0xe0))(param_1,0,*(undefined4 *)(param_1 + 0xe4),0,0,0,0,0,0);
    }
  }
  return iVar1;
}


