/* Module: mcplug.dll
   Function: FUN_00403370
   Address: 00403370
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00403370(int *param_1)

{
  int iVar1;
  HGLOBAL hMem;
  undefined4 *puVar2;
  int iVar3;
  int unaff_EDI;
  int *local_4;
  
  local_4 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x3c))(param_1,&local_4);
  if (-1 < iVar1) {
    if (param_1[0x90] == 0) {
      hMem = GlobalAlloc(0x42,unaff_EDI * 0xc);
      puVar2 = GlobalLock(hMem);
      param_1[0x90] = (int)puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        return -0x7ff8fff2;
      }
      iVar1 = param_1[0x9b];
      if (iVar1 != 0) {
        *puVar2 = 2;
        *(undefined4 *)(param_1[0x90] + 4) = 0;
      }
      if (param_1[0xb2] != 0) {
        iVar1 = (uint)(iVar1 != 0) * 0xc;
        *(undefined4 *)(param_1[0x90] + iVar1) = 1;
        *(undefined4 *)(param_1[0x90] + 4 + iVar1) = 0;
      }
    }
    iVar1 = 0;
    if (0 < unaff_EDI) {
      do {
        iVar3 = FUN_00403430(param_1,iVar1);
        if (iVar3 < 0) {
          return iVar3;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < unaff_EDI);
    }
    iVar1 = 0;
  }
  return iVar1;
}


