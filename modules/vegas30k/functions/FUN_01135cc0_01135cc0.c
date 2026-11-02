/* Module: vegas30k.dll
   Function: FUN_01135cc0
   Address: 01135cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_01135cc0(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x14) < *param_3) {
    *(int *)(param_1 + 0x14) = *param_3;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x18) <= param_3[1]) {
    iVar1 = param_3[1];
  }
  *(int *)(param_1 + 0x18) = iVar1;
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) <= param_3[3]) {
    iVar1 = param_3[3];
  }
  *(int *)(param_1 + 0x20) = iVar1;
  hMem = GlobalAlloc(0x40,0x50);
  pvVar2 = GlobalLock(hMem);
  if (pvVar2 != (LPVOID)0x0) {
    piVar3 = (int *)FUN_0113aee0(param_1,param_3,param_1 + 4);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
      FUN_01135de0(piVar3);
    }
    return piVar3;
  }
  return (int *)0x0;
}


