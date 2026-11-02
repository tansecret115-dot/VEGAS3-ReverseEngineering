/* Module: vegas30k.dll
   Function: FUN_0113a650
   Address: 0113a650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0113a650(HWND param_1,int param_2)

{
  LPVOID *ppv;
  undefined4 uVar1;
  LONG LVar2;
  HRESULT HVar3;
  HGLOBAL hMem;
  LPVOID pvVar4;
  int *piVar5;
  int iVar6;
  
  LVar2 = GetWindowLongA(param_1,8);
  uVar1 = *(undefined4 *)(LVar2 + 4);
  ppv = (LPVOID *)(param_2 + 0x24);
  HVar3 = CoCreateInstance((IID *)(param_2 + 0x28),(LPUNKNOWN)0x0,3,(IID *)&DAT_011f0e80,ppv);
  if (HVar3 < 0) {
    return 0;
  }
  hMem = GlobalAlloc(0x40,0x10);
  pvVar4 = GlobalLock(hMem);
  if (pvVar4 == (LPVOID)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_011641e0(uVar1,0);
  }
  *(int **)(param_2 + 0x40) = piVar5;
  (**(code **)(*piVar5 + 4))(piVar5);
  iVar6 = (**(code **)(*(int *)*ppv + 0xc))(*ppv,*(undefined4 *)(param_2 + 0x40));
  piVar5 = *ppv;
  if (iVar6 < 0) {
    (**(code **)(*piVar5 + 8))(piVar5);
    *ppv = (LPVOID)0x0;
    if (*(int **)(param_2 + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(param_2 + 0x40) + 0x1c))(1);
    }
    return 0;
  }
  iVar6 = (**(code **)(*piVar5 + 0x1c))(piVar5,1,param_2 + 0x1c);
  if (iVar6 < 0) {
    (**(code **)(*(int *)*ppv + 8))(*ppv);
    *ppv = (LPVOID)0x0;
    return 0;
  }
  return 1;
}


