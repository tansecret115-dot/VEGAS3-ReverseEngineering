/* Module: sfcdi.dll
   Function: FUN_5bf16460
   Address: 5bf16460
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_5bf16460(int param_1,uint *param_2,undefined4 param_3)

{
  HGLOBAL hMem;
  CSfReadAudio *this;
  long lVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + 8);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x1e04) = param_3;
  *(int *)(param_1 + 0x1de8) = *(int *)(param_1 + 0x1c) * 0x24c;
  *(undefined4 *)(param_1 + 0x1dec) = 0;
  hMem = GlobalAlloc(0x40,0x48);
  this = GlobalLock(hMem);
  if (this == (CSfReadAudio *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = CSfReadAudio::CSfReadAudio(this,*(uint *)(param_1 + 8));
  }
  *(int *)(param_1 + 0x28) = iVar2;
  if (iVar2 == 0) {
    return -0x7ff8fff2;
  }
  lVar1 = CSfReadAudio::Initialize();
  return lVar1;
}


