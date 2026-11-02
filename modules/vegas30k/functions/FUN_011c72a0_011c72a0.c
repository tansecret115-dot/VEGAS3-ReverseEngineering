/* Module: vegas30k.dll
   Function: FUN_011c72a0
   Address: 011c72a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011c72a0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  MMRESULT MVar4;
  int iVar5;
  
  iVar3 = -0x7ff8fffb;
  iVar5 = param_2 * 0x20 + param_1;
  if ((*(byte *)(iVar5 + 0x1d4) & 0x10) == 0) {
    MVar4 = waveOutWrite(*(HWAVEOUT *)(param_1 + 0x6c),(LPWAVEHDR)(iVar5 + 0x1c4),0x20);
    iVar3 = FUN_011c1770(MVar4);
    if (-1 < iVar3) {
      uVar1 = *(uint *)(*(int *)(param_1 + 0x208) * 0x20 + 0x1c8 + param_1);
      uVar2 = *(uint *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x48) = uVar2 + uVar1;
      *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (uint)CARRY4(uVar2,uVar1);
    }
  }
  return iVar3;
}


