/* Module: vegas30k.dll
   Function: FUN_011d4790
   Address: 011d4790
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011d4790(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  MMRESULT MVar4;
  HGLOBAL pvVar5;
  uint uVar6;
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return 0x8004e001;
  }
  if (param_2 == 0) {
    return 0x80004003;
  }
  iVar3 = (**(code **)(param_1 + 0x10))(param_1,1,*(undefined4 *)(param_1 + 0x14),0,0,0,0,0);
  if (iVar3 == 0) {
    return 0x8000ffff;
  }
  FUN_011d4070(1,0,0,0);
  *(undefined4 *)(param_1 + 0x170) = 1;
  uVar6 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      *(undefined4 *)(param_2 + uVar6 * 4) = 0;
      iVar3 = *(int *)(*(int *)(param_1 + 0x168) + uVar6 * 4);
      uVar1 = *(uint *)(iVar3 + 0x10);
      if ((uVar1 & 8) != 0) {
        *(uint *)(iVar3 + 0x10) = uVar1 & 0xfffffff3;
      }
      MVar4 = midiInUnprepareHeader
                        (*(HMIDIIN *)(param_1 + 0x160),
                         *(LPMIDIHDR *)(*(int *)(param_1 + 0x168) + uVar6 * 4),0x40);
      if (MVar4 == 0x41) {
        midiInReset(*(HMIDIIN *)(param_1 + 0x160));
      }
      else {
        uVar6 = uVar6 + 1;
      }
    } while (uVar6 < *(uint *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x170) = 0x3c2;
  MVar4 = midiInClose(*(HMIDIIN *)(param_1 + 0x160));
  if (MVar4 == 0x41) {
    midiInReset(*(HMIDIIN *)(param_1 + 0x160));
    midiInClose(*(HMIDIIN *)(param_1 + 0x160));
  }
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      pvVar5 = GlobalHandle((LPCVOID)**(undefined4 **)(*(int *)(param_1 + 0x168) + uVar6 * 4));
      GlobalUnlock(pvVar5);
      pvVar5 = GlobalHandle((LPCVOID)**(undefined4 **)(*(int *)(param_1 + 0x168) + uVar6 * 4));
      GlobalFree(pvVar5);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x28));
  }
  pvVar5 = GlobalHandle((LPCVOID)**(undefined4 **)(param_1 + 0x168));
  GlobalUnlock(pvVar5);
  pvVar5 = GlobalHandle((LPCVOID)**(undefined4 **)(param_1 + 0x168));
  GlobalFree(pvVar5);
  pvVar5 = GlobalHandle(*(LPCVOID *)(param_1 + 0x168));
  GlobalUnlock(pvVar5);
  pvVar5 = GlobalHandle(*(LPCVOID *)(param_1 + 0x168));
  GlobalFree(pvVar5);
  piVar2 = *(int **)(param_1 + 0x184);
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined4 *)(param_1 + 0x184) = 0;
  return 0;
}


