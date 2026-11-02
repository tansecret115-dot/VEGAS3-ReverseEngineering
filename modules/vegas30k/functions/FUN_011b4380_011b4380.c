/* Module: vegas30k.dll
   Function: FUN_011b4380
   Address: 011b4380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011b4380(int param_1,int param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0x4e001;
  }
  if ((*(int *)(param_1 + 0xc70) == 0) && (param_2 != 0)) {
    hMem = GlobalAlloc(0x40,0xb0);
    pvVar1 = GlobalLock(hMem);
    if (pvVar1 == (LPVOID)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_01040ce0();
    }
    *(int **)(param_1 + 0xc70) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
      (**(code **)(**(int **)(param_1 + 0xc70) + 0x14))
                (*(int **)(param_1 + 0xc70),param_1 + 0x176,*(undefined4 *)(param_1 + 0x188),
                 *(undefined4 *)(param_1 + 0x18c),0,0);
    }
  }
  piVar2 = *(int **)(param_1 + 0xc70);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2,param_2);
    if (param_2 == 0) {
      (**(code **)(**(int **)(param_1 + 0xc70) + 0x1c))(*(int **)(param_1 + 0xc70));
      (**(code **)(**(int **)(param_1 + 0xc70) + 8))(*(int **)(param_1 + 0xc70));
      *(undefined4 *)(param_1 + 0xc70) = 0;
    }
  }
  return 1;
}


