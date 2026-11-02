/* Module: vegas30k.dll
   Function: FUN_0100e8d0
   Address: 0100e8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0100e8d0(int param_1,undefined4 *param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  *param_2 = 0;
  hMem = GlobalAlloc(0x40,0xc);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 != (LPVOID)0x0) {
    piVar2 = (int *)FUN_0100f640(param_1);
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(code **)*piVar2)(piVar2,&DAT_011da800,param_2);
      if (-1 < iVar3) {
        iVar4 = *(int *)(param_1 + 0x24) + 1;
        *(int *)(param_1 + 0x24) = iVar4;
        if (iVar4 <= *(int *)(param_1 + 0x18)) {
          iVar4 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x1c) = iVar4;
      }
      (**(code **)(*piVar2 + 8))(piVar2);
      return iVar3;
    }
  }
  return -0x7ff8fff2;
}


