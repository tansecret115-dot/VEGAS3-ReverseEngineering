/* Module: vegas30k.dll
   Function: FUN_011d49b0
   Address: 011d49b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011d49b0(int param_1)

{
  MMRESULT MVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  MVar1 = midiInReset(*(HMIDIIN *)(param_1 + 0x160));
  iVar2 = FUN_011c2260(MVar1);
  iVar4 = *(int *)(param_1 + 0x2c);
  puVar5 = (undefined4 *)0x0;
  do {
    if (iVar4 == 0) {
      if (-1 < iVar2) {
        FUN_011d4070(4,0,0,0);
      }
      return iVar2;
    }
    iVar4 = 0;
    do {
      if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x168) + *(int *)(param_1 + 0x24) * 4) + 0x10) & 8)
          != 0) {
        iVar4 = *(int *)(param_1 + 0x24);
        puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x168) + iVar4 * 4);
        break;
      }
      iVar3 = *(int *)(param_1 + 0x24) + 1;
      *(int *)(param_1 + 0x24) = iVar3;
      if (iVar3 == *(int *)(param_1 + 0x28)) {
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != *(int *)(param_1 + 0x28));
    if (puVar5 != (undefined4 *)0x0) {
      puVar5[4] = puVar5[4] & 0xfffffff3 | 1;
      iVar3 = *(int *)(param_1 + 0x24) + 1;
      *(int *)(param_1 + 0x24) = iVar3;
      if (iVar3 == *(int *)(param_1 + 0x28)) {
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        (**(code **)(param_1 + 0x10))
                  (param_1,2,*(undefined4 *)(param_1 + 0x14),0,0,iVar4,*puVar5,puVar5[2]);
      }
    }
    iVar4 = *(int *)(param_1 + 0x2c);
  } while( true );
}


