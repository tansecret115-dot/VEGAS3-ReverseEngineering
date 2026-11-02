/* Module: vidcap30.exe
   Function: FUN_00402100
   Address: 00402100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00402100(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  iVar3 = 0;
  iVar2 = *param_1;
  if (0 < iVar2) {
    do {
      switch(*(undefined4 *)(param_1[1] * iVar3 + param_1[2])) {
      case 0:
        return 0x8000ffff;
      case 10:
        if (bVar1) {
          _SfList_InsertList_16(param_1,iVar3,&DAT_00586a10,1);
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 1;
        }
      case 0xf:
      case 0x10:
      case 0x11:
        bVar1 = true;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return 0;
}


