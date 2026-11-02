/* Module: vegas30k.dll
   Function: FUN_011a0820
   Address: 011a0820
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011a0820(int param_1)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x7f4) == 0) {
    iVar4 = _SfList_CreateExZ_32
                      ((undefined4 *)(param_1 + 0x7f4),4,0xffffffff,0xffffffff,0x40000000,0,0,0);
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  pvVar1 = GlobalAlloc(0x40,0x448);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 != (LPVOID)0x0) {
    piVar3 = (int *)FUN_011a0af0(param_1);
    if (piVar3 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar3 + 0x108))(0);
      if (iVar4 < 0) {
        (**(code **)(*piVar3 + 0x104))(1);
      }
      else {
        iVar4 = _SfList_InsertList_16
                          (*(undefined4 *)(param_1 + 0x7f4),0xffffffff,&stack0xfffffff8,1);
        (**(code **)(*piVar3 + 4))(piVar3);
      }
    }
  }
  pvVar1 = GlobalAlloc(0x40,0x448);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 != (LPVOID)0x0) {
    piVar3 = (int *)FUN_011a0af0(param_1);
    if (piVar3 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar3 + 0x108))(1);
      if (iVar4 < 0) {
        (**(code **)(*piVar3 + 0x104))(1);
      }
      else {
        *(int **)(param_1 + 0x7fc) = piVar3;
        (**(code **)(*piVar3 + 4))(piVar3);
        (**(code **)(*piVar3 + 0x24))(piVar3,1);
      }
    }
  }
  *(uint *)(param_1 + 0x7ec) = *(uint *)(param_1 + 0x7ec) | 0x20000;
  return iVar4;
}


