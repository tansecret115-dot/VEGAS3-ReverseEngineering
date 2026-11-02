/* Module: vegas30k.dll
   Function: FUN_011d2c60
   Address: 011d2c60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011d2c60(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  MMRESULT MVar4;
  
  iVar3 = -0x7ff8fffb;
  if ((*(byte *)(param_2 * 0x20 + 0x1b0 + param_1) & 0x10) == 0) {
    MVar4 = waveOutWrite(*(HWAVEOUT *)(param_1 + 0x3c),(LPWAVEHDR)((param_2 + 0xd) * 0x20 + param_1)
                         ,0x20);
    iVar3 = FUN_011c1770(MVar4);
    if (-1 < iVar3) {
      uVar1 = *(uint *)(param_2 * 0x20 + param_1 + 0x1a4);
      uVar2 = *(uint *)(param_1 + 0x220);
      *(uint *)(param_1 + 0x220) = uVar2 + uVar1;
      *(uint *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + (uint)CARRY4(uVar2,uVar1);
    }
  }
  return iVar3;
}


