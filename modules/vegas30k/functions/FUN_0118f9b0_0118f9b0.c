/* Module: vegas30k.dll
   Function: FUN_0118f9b0
   Address: 0118f9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0118f9b0(int param_1,int *param_2)

{
  HGLOBAL hMem;
  LPVOID pvVar1;
  int *piVar2;
  
  *param_2 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    *param_2 = *(int *)(param_1 + 0x34);
    (**(code **)**(undefined4 **)(param_1 + 0x34))
              (*(undefined4 **)(param_1 + 0x34),&DAT_011d9e90,param_2);
    return;
  }
  hMem = GlobalAlloc(0x40,0xc);
  pvVar1 = GlobalLock(hMem);
  if (pvVar1 == (LPVOID)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_01191b30(param_1);
  }
  *(int **)(param_1 + 0x34) = piVar2;
  (**(code **)(*piVar2 + 4))(piVar2);
  (**(code **)**(undefined4 **)(param_1 + 0x34))
            (*(undefined4 **)(param_1 + 0x34),&DAT_011d9e90,param_2);
  return;
}


