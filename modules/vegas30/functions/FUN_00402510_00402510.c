/* Module: vegas30.exe
   Function: FUN_00402510
   Address: 00402510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402510(int *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  bVar2 = false;
  iVar4 = 0;
  iVar3 = *param_1;
  if (0 < iVar3) {
    do {
      uVar1 = *(uint *)(param_1[1] * iVar4 + param_1[2]);
      if (uVar1 < 0x9ca6) {
        if (uVar1 == 0x9ca5) {
          if (bVar2) {
            _SfList_InsertList_16(param_1,iVar4,&DAT_0060f8b8,1);
            iVar3 = iVar3 + 1;
          }
          bVar2 = false;
        }
        else if (uVar1 == 0) {
          return 0x8000ffff;
        }
      }
      else if ((0x9ca7 < uVar1) && (uVar1 < 0x9caa)) {
        bVar2 = true;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return 0;
}


